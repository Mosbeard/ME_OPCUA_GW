/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <open62541/server_config_default.h>
#include <open62541/plugin/log_stdout.h>
#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>
#include <check.h>
#include "thread_wrapper.h"

/* While server initialization, value callbacks are called twice.
 * This counter is used to ensure that the deletion of the variable is triggered by the client (not while the server initialization)*/
int counter  = 0;
UA_Server *server;
UA_Boolean running;
UA_ServerNetworkLayer nl;
UA_NodeId temperatureNodeId = {1, UA_NODEIDTYPE_NUMERIC, {1001}};
UA_Int32 temperature;
THREAD_HANDLE server_thread;

static void
updateCurrentTime(void) {
    UA_DateTime now = UA_DateTime_now();
    UA_Variant value;
    UA_Variant_setScalar(&value, &now, &UA_TYPES[UA_TYPES_DATETIME]);
    UA_NodeId currentNodeId = UA_NODEID_STRING(1, "current-time-value-callback");
    UA_Server_writeValue(server, currentNodeId, value);
}

static void
addCurrentTimeVariable(void) {
    UA_DateTime now = 0;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("en-US", "Current time - value callback");
    attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;
    UA_Variant_setScalar(&attr.value, &now, &UA_TYPES[UA_TYPES_DATETIME]);

    UA_NodeId currentNodeId = UA_NODEID_STRING(1, "current-time-value-callback");
    UA_QualifiedName currentName = UA_QUALIFIEDNAME(1, "current-time-value-callback");
    UA_NodeId parentNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    UA_NodeId parentReferenceNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES);
    UA_NodeId variableTypeNodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE);
    UA_Server_addVariableNode(server, currentNodeId, parentNodeId,
                              parentReferenceNodeId, currentName,
                              variableTypeNodeId, attr, NULL, NULL);

    updateCurrentTime();
}

static void
beforeReadTime(UA_Server *tmpserver,
               const UA_NodeId *sessionId, void *sessionContext,
               const UA_NodeId *nodeid, void *nodeContext,
               const UA_NumericRange *range, const UA_DataValue *data) {
    updateCurrentTime();
}

static void
afterWriteTime(UA_Server *tmpServer,
               const UA_NodeId *sessionId, void *sessionContext,
               const UA_NodeId *nodeId, void *nodeContext,
               const UA_NumericRange *range, const UA_DataValue *data) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "The variable was updated");
}

static void
addValueCallbackToCurrentTimeVariable(void) {
    UA_NodeId currentNodeId = UA_NODEID_STRING(1, "current-time-value-callback");
    UA_ValueCallback callback ;
    callback.onRead = beforeReadTime;
    callback.onWrite = afterWriteTime;
    UA_Server_setVariableNode_valueCallback(server, currentNodeId, callback);
}

static UA_StatusCode
readTemperature(UA_Server *tmpServer,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_NodeId *nodeId, void *nodeContext,
                UA_Boolean sourceTimeStamp, const UA_NumericRange *range,
                UA_DataValue *dataValue) {
    if (counter < 2)
        counter++;
    else
        UA_Server_deleteNode(server, temperatureNodeId, true);

    UA_Variant_setScalarCopy(&dataValue->value, &temperature, &UA_TYPES[UA_TYPES_INT32]);
    dataValue->hasValue = true;
    return UA_STATUSCODE_GOOD;
}

static UA_StatusCode
writeTemperature(UA_Server *tmpServer,
                 const UA_NodeId *sessionId, void *sessionContext,
                 const UA_NodeId *nodeId, void *nodeContext,
                 const UA_NumericRange *range, const UA_DataValue *data) {
    temperature = *(UA_Int32 *) data->value.data;
    return UA_STATUSCODE_GOOD;
}

static void
addDataSourceVariable(void) {
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("en-US", "Temperature");
    attr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_DataSource temperatureSource;
    temperatureSource.read = readTemperature;
    temperatureSource.write = writeTemperature;
    UA_StatusCode retval = UA_Server_addDataSourceVariableNode(server, temperatureNodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), UA_QUALIFIEDNAME(1, "Temperature"),
                                        UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), attr,
                                        temperatureSource, NULL, NULL);

    ck_assert_int_eq(retval, UA_STATUSCODE_GOOD);
}

THREAD_CALLBACK(serverloop) {
    while(running)
        UA_Server_run_iterate(server, true);
    return 0;
}
static void setup(void) {
    running = true;
    server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));
    UA_Server_run_startup(server);
    addCurrentTimeVariable();
    addValueCallbackToCurrentTimeVariable();
    addDataSourceVariable();
    THREAD_CREATE(server_thread, serverloop);
}

static void teardown(void) {
    running = false;
    counter = 0;
    THREAD_JOIN(server_thread);
    UA_Server_run_shutdown(server);
    UA_Server_delete(server);
}

START_TEST(client_readValueCallbackAttribute) {
        UA_Client *client = UA_Client_new();
        UA_ClientConfig_setDefault(UA_Client_getConfig(client));
        UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
        ck_assert_uint_eq(retval, UA_STATUSCODE_GOOD);

        UA_Variant val;
        UA_Variant_init(&val);
        UA_NodeId nodeId = UA_NODEID_STRING(1, "current-time-value-callback");
        retval = UA_Client_readValueAttribute(client, nodeId, &val);
        ck_assert_uint_eq(retval, UA_STATUSCODE_GOOD);
        UA_Variant_deleteMembers(&val);

        UA_Client_disconnect(client);
        UA_Client_delete(client);
    }
END_TEST

START_TEST(client_readMultipleAttributes) {
        UA_Client *client = UA_Client_new();
        UA_ClientConfig_setDefault(UA_Client_getConfig(client));
        UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
        ck_assert_uint_eq(retval, UA_STATUSCODE_GOOD);

        UA_ReadRequest request;
        UA_ReadRequest_init(&request);
        UA_ReadValueId ids[3];
        UA_ReadValueId_init(&ids[0]);
        ids[0].attributeId = UA_ATTRIBUTEID_DESCRIPTION;
        ids[0].nodeId = temperatureNodeId;

        UA_ReadValueId_init(&ids[1]);
        ids[1].attributeId = UA_ATTRIBUTEID_VALUE;
        ids[1].nodeId = temperatureNodeId;

        UA_ReadValueId_init(&ids[2]);
        ids[2].attributeId = UA_ATTRIBUTEID_BROWSENAME;
        ids[2].nodeId = temperatureNodeId;

        request.nodesToRead = ids;
        request.nodesToReadSize = 3;

        UA_ReadResponse response = UA_Client_Service_read(client, request);
        retval = response.responseHeader.serviceResult;
        ck_assert_uint_eq(retval, UA_STATUSCODE_GOOD);

        ck_assert_int_eq(response.resultsSize, 3);
        ck_assert_uint_eq(response.results[0].status, UA_STATUSCODE_GOOD);
        ck_assert_uint_eq(response.results[1].status, UA_STATUSCODE_GOOD);
        ck_assert_uint_eq(response.results[2].status, UA_STATUSCODE_BADNODEIDUNKNOWN);

        UA_ReadResponse_deleteMembers(&response);

        UA_Client_disconnect(client);
        UA_Client_delete(client);
    }
END_TEST

static Suite* testSuite_immutableNodes(void) {
    Suite *s = suite_create("Immutable Nodes");
    TCase *valueCallback = tcase_create("ValueCallback");
    tcase_add_checked_fixture(valueCallback, setup, teardown);
    tcase_add_test(valueCallback, client_readValueCallbackAttribute);
    tcase_add_test(valueCallback, client_readMultipleAttributes);
    suite_add_tcase(s,valueCallback);
    return s;
}

int main(void) {
    Suite *s = testSuite_immutableNodes();
    SRunner *sr = srunner_create(s);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

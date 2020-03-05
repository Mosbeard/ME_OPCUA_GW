/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "ua_namespace_tig4.h"


/* JobDescriptor - ns=2;i=3002 */

static UA_StatusCode function_ua_namespace_tig4_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "JobDescriptor");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[2], 3002),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "JobDescriptor"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 3002)
);
}

/* Default XML - ns=2;i=5007 */

static UA_StatusCode function_ua_namespace_tig4_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5007),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5007), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[2], 3002), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5007)
);
}

/* Default Binary - ns=2;i=5006 */

static UA_StatusCode function_ua_namespace_tig4_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5006),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5006), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[2], 3002), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5006)
);
}

/* Default JSON - ns=2;i=5008 */

static UA_StatusCode function_ua_namespace_tig4_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5008),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5008), UA_NODEID_NUMERIC(ns[0], 38), UA_EXPANDEDNODEID_NUMERIC(ns[2], 3002), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5008)
);
}

/* http://Merkle.de/TIG4WeldingMachine/ - ns=2;i=5019 */

static UA_StatusCode function_ua_namespace_tig4_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://Merkle.de/TIG4WeldingMachine/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5019),
UA_NODEID_NUMERIC(ns[0], 11715),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "http://Merkle.de/TIG4WeldingMachine/"),
UA_NODEID_NUMERIC(ns[0], 11616),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5019)
);
}

/* StaticStringNodeIdPattern - ns=2;i=6087 */

static UA_StatusCode function_ua_namespace_tig4_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6087),
UA_NODEID_NUMERIC(ns[2], 5019),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6087)
);
}

/* StaticNumericNodeIdRange - ns=2;i=6086 */

static UA_StatusCode function_ua_namespace_tig4_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6086),
UA_NODEID_NUMERIC(ns[2], 5019),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6086)
);
}

/* StaticNodeIdTypes - ns=2;i=6085 */

static UA_StatusCode function_ua_namespace_tig4_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6085),
UA_NODEID_NUMERIC(ns[2], 5019),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6085)
);
}

/* IsNamespaceSubset - ns=2;i=6081 */

static UA_StatusCode function_ua_namespace_tig4_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_2_i_6081_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_2_i_6081_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_2_i_6081_variant_DataContents);
*variablenode_ns_2_i_6081_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6081_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6081),
UA_NODEID_NUMERIC(ns[2], 5019),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_2_i_6081_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6081)
);
}

/* NamespaceVersion - ns=2;i=6084 */

static UA_StatusCode function_ua_namespace_tig4_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6084_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6084_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6084_variant_DataContents);
*variablenode_ns_2_i_6084_variant_DataContents = UA_STRING_ALLOC("1.0.0");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6084_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6084),
UA_NODEID_NUMERIC(ns[2], 5019),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6084_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6084)
);
}

/* NamespacePublicationDate - ns=2;i=6082 */

static UA_StatusCode function_ua_namespace_tig4_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
UA_DateTime *variablenode_ns_2_i_6082_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_2_i_6082_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_2_i_6082_variant_DataContents);
*variablenode_ns_2_i_6082_variant_DataContents = ( (UA_DateTime)(1580924190000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6082_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6082),
UA_NODEID_NUMERIC(ns[2], 5019),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_2_i_6082_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6082)
);
}

/* NamespaceUri - ns=2;i=6083 */

static UA_StatusCode function_ua_namespace_tig4_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6083_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6083_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6083_variant_DataContents);
*variablenode_ns_2_i_6083_variant_DataContents = UA_STRING_ALLOC("http://Merkle.de/TIG4WeldingMachine/");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6083_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6083),
UA_NODEID_NUMERIC(ns[2], 5019),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6083_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6083)
);
}

/* WeldingMachineType - ns=2;i=1002 */

static UA_StatusCode function_ua_namespace_tig4_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "WeldingMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[1], 1002),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "WeldingMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1002)
);
}

/* Configuration - ns=2;i=5003 */

static UA_StatusCode function_ua_namespace_tig4_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Configuration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Parameters representing the configuration items of the TopologyElement. If the CurrentWrite bit is set in the AccessLevel Attribute they can be modified by Clients.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5003),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Configuration"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5003), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5003)
);
}

/* Operational - ns=2;i=5004 */

static UA_StatusCode function_ua_namespace_tig4_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Operational");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Parameters and Methods useful for during normal operation, like process data.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5004),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Operational"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5004), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5004)
);
}

/* ProtocolType - ns=2;i=6003 */

static UA_StatusCode function_ua_namespace_tig4_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ProtocolType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6003),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ProtocolType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6003), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6003)
);
}

/* Manufacturer - ns=2;i=6001 */

static UA_StatusCode function_ua_namespace_tig4_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText *variablenode_ns_2_i_6001_variant_DataContents =  UA_LocalizedText_new();
if (!variablenode_ns_2_i_6001_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_LocalizedText_init(variablenode_ns_2_i_6001_variant_DataContents);
*variablenode_ns_2_i_6001_variant_DataContents = UA_LOCALIZEDTEXT_ALLOC("", "Merkle");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6001_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6001),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_LocalizedText_delete(variablenode_ns_2_i_6001_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6001), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6001)
);
}

/* Model - ns=2;i=6007 */

static UA_StatusCode function_ua_namespace_tig4_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6007),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6007), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6007)
);
}

/* MethodSet - ns=2;i=5001 */

static UA_StatusCode function_ua_namespace_tig4_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MethodSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Methods");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5001),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MethodSet"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5001), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5001)
);
}

/* Activate - ns=2;i=7001 */

static UA_StatusCode function_ua_namespace_tig4_19_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Activate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7001),
UA_NODEID_NUMERIC(ns[2], 5004),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "Activate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7001), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7001), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5001), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_19_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7001)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Deactivate - ns=2;i=7002 */

static UA_StatusCode function_ua_namespace_tig4_20_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Deactivate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7002),
UA_NODEID_NUMERIC(ns[2], 5004),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "Deactivate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7002), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7002), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5001), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_20_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7002)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ReadJob - ns=2;i=7005 */

static UA_StatusCode function_ua_namespace_tig4_21_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadJob");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7005),
UA_NODEID_NUMERIC(ns[2], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "ReadJob"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7005), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5004), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7005), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_21_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7005)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=6037 */

static UA_StatusCode function_ua_namespace_tig4_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_6037_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6037_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_6037_variant_DataContents[0].name = UA_STRING("number");
variablenode_ns_2_i_6037_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 4);
variablenode_ns_2_i_6037_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6037_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6037),
UA_NODEID_NUMERIC(ns[2], 7005),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6037), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6037)
);
}

/* SetSimulationMode - ns=2;i=7003 */

static UA_StatusCode function_ua_namespace_tig4_23_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetSimulationMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7003),
UA_NODEID_NUMERIC(ns[2], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "SetSimulationMode"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7003), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7003), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5004), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_23_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7003)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=6035 */

static UA_StatusCode function_ua_namespace_tig4_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_6035_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6035_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_6035_variant_DataContents[0].name = UA_STRING("value");
variablenode_ns_2_i_6035_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1);
variablenode_ns_2_i_6035_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6035_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6035),
UA_NODEID_NUMERIC(ns[2], 7003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6035), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6035)
);
}

/* WriteJob - ns=2;i=7006 */

static UA_StatusCode function_ua_namespace_tig4_25_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "WriteJob");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7006),
UA_NODEID_NUMERIC(ns[2], 5004),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "WriteJob"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7006), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7006), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5001), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_25_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7006)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=6038 */

static UA_StatusCode function_ua_namespace_tig4_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_6038_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6038_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_6038_variant_DataContents[0].name = UA_STRING("job");
variablenode_ns_2_i_6038_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[2], 3002);
variablenode_ns_2_i_6038_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6038_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6038),
UA_NODEID_NUMERIC(ns[2], 7006),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6038), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6038)
);
}

/* SetArc - ns=2;i=7004 */

static UA_StatusCode function_ua_namespace_tig4_27_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetArc");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7004),
UA_NODEID_NUMERIC(ns[2], 5001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "SetArc"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7004), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7004), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5004), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_27_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7004)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=6036 */

static UA_StatusCode function_ua_namespace_tig4_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_6036_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6036_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_6036_variant_DataContents[0].name = UA_STRING("value");
variablenode_ns_2_i_6036_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1);
variablenode_ns_2_i_6036_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6036_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6036),
UA_NODEID_NUMERIC(ns[2], 7004),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6036), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6036)
);
}

/* TIG4WeldingMachineType - ns=2;i=1003 */

static UA_StatusCode function_ua_namespace_tig4_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TIG4WeldingMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[2], 1003),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "TIG4WeldingMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1003)
);
}

/* TIG4WeldingMachine - ns=2;i=5012 */

static UA_StatusCode function_ua_namespace_tig4_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TIG4WeldingMachine");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[1], 5001),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "TIG4WeldingMachine"),
UA_NODEID_NUMERIC(ns[2], 1003),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5012)
);
}

/* Configuration - ns=2;i=5011 */

static UA_StatusCode function_ua_namespace_tig4_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Configuration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Parameters representing the configuration items of the TopologyElement. If the CurrentWrite bit is set in the AccessLevel Attribute they can be modified by Clients.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5011),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Configuration"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5011)
);
}

/* SerialNumber - ns=2;i=6076 */

static UA_StatusCode function_ua_namespace_tig4_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6076),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6076)
);
}

/* ManufacturerUri - ns=2;i=6054 */

static UA_StatusCode function_ua_namespace_tig4_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6054_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6054_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6054_variant_DataContents);
*variablenode_ns_2_i_6054_variant_DataContents = UA_STRING_ALLOC("http://merkle.de");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6054_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6054),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6054_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6054)
);
}

/* Manufacturer - ns=2;i=6053 */

static UA_StatusCode function_ua_namespace_tig4_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText *variablenode_ns_2_i_6053_variant_DataContents =  UA_LocalizedText_new();
if (!variablenode_ns_2_i_6053_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_LocalizedText_init(variablenode_ns_2_i_6053_variant_DataContents);
*variablenode_ns_2_i_6053_variant_DataContents = UA_LOCALIZEDTEXT_ALLOC("", "Merkle");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6053_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6053),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_LocalizedText_delete(variablenode_ns_2_i_6053_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6053)
);
}

/* DeviceClass - ns=2;i=6051 */

static UA_StatusCode function_ua_namespace_tig4_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceClass");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6051),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "DeviceClass"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6051)
);
}

/* DeviceManual - ns=2;i=6078 */

static UA_StatusCode function_ua_namespace_tig4_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6078),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "DeviceManual"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6078)
);
}

/* SoftwareRevision - ns=2;i=6077 */

static UA_StatusCode function_ua_namespace_tig4_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6077),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6077)
);
}

/* DeviceRevision - ns=2;i=6079 */

static UA_StatusCode function_ua_namespace_tig4_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6079),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6079)
);
}

/* Description - ns=2;i=6050 */

static UA_StatusCode function_ua_namespace_tig4_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "Description");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6050),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Description"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6050)
);
}

/* ProtocolType - ns=2;i=6049 */

static UA_StatusCode function_ua_namespace_tig4_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6049_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6049_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6049_variant_DataContents);
*variablenode_ns_2_i_6049_variant_DataContents = UA_STRING_ALLOC("TIG4");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6049_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProtocolType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6049),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ProtocolType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6049_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6049)
);
}

/* Model - ns=2;i=6048 */

static UA_StatusCode function_ua_namespace_tig4_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText *variablenode_ns_2_i_6048_variant_DataContents =  UA_LocalizedText_new();
if (!variablenode_ns_2_i_6048_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_LocalizedText_init(variablenode_ns_2_i_6048_variant_DataContents);
*variablenode_ns_2_i_6048_variant_DataContents = UA_LOCALIZEDTEXT_ALLOC("", "TIG4");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6048_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6048),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_LocalizedText_delete(variablenode_ns_2_i_6048_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6048)
);
}

/* RevisionCounter - ns=2;i=6080 */

static UA_StatusCode function_ua_namespace_tig4_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6080),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6080)
);
}

/* MethodSet - ns=2;i=5016 */

static UA_StatusCode function_ua_namespace_tig4_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MethodSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Methods");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5016),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MethodSet"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5016)
);
}

/* Operational - ns=2;i=5017 */

static UA_StatusCode function_ua_namespace_tig4_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Operational");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Parameters and Methods useful for during normal operation, like process data.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Operational"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5017)
);
}

/* Activate - ns=2;i=7007 */

static UA_StatusCode function_ua_namespace_tig4_45_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Activate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7007),
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "Activate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7007), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5016), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_45_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7007)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Deactivate - ns=2;i=7008 */

static UA_StatusCode function_ua_namespace_tig4_46_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Deactivate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7008),
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "Deactivate"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7008), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5016), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_46_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7008)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ReadJob - ns=2;i=7009 */

static UA_StatusCode function_ua_namespace_tig4_47_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadJob");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7009),
UA_NODEID_NUMERIC(ns[2], 5016),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "ReadJob"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7009), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5017), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_47_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7009)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=6055 */

static UA_StatusCode function_ua_namespace_tig4_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_6055_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6055_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_6055_variant_DataContents[0].name = UA_STRING("number");
variablenode_ns_2_i_6055_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 4);
variablenode_ns_2_i_6055_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6055_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6055),
UA_NODEID_NUMERIC(ns[2], 7009),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6055)
);
}

/* SetArc - ns=2;i=7010 */

static UA_StatusCode function_ua_namespace_tig4_49_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetArc");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7010),
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "SetArc"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7010), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5016), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_49_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7010)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=6056 */

static UA_StatusCode function_ua_namespace_tig4_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_6056_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6056_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_6056_variant_DataContents[0].name = UA_STRING("value");
variablenode_ns_2_i_6056_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1);
variablenode_ns_2_i_6056_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6056_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6056),
UA_NODEID_NUMERIC(ns[2], 7010),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6056)
);
}

/* WriteJob - ns=2;i=7012 */

static UA_StatusCode function_ua_namespace_tig4_51_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "WriteJob");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7012),
UA_NODEID_NUMERIC(ns[2], 5016),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "WriteJob"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7012), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5017), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_51_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7012)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=6058 */

static UA_StatusCode function_ua_namespace_tig4_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_6058_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6058_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_6058_variant_DataContents[0].name = UA_STRING("job");
variablenode_ns_2_i_6058_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[2], 3002);
variablenode_ns_2_i_6058_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6058_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6058),
UA_NODEID_NUMERIC(ns[2], 7012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6058)
);
}

/* SetSimulationMode - ns=2;i=7011 */

static UA_StatusCode function_ua_namespace_tig4_53_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SetSimulationMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[2], 7011),
UA_NODEID_NUMERIC(ns[2], 5016),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "SetSimulationMode"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 7011), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5017), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_ua_namespace_tig4_53_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 7011)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=2;i=6057 */

static UA_StatusCode function_ua_namespace_tig4_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296);
UA_Argument variablenode_ns_2_i_6057_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6057_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_2_i_6057_variant_DataContents[0].name = UA_STRING("value");
variablenode_ns_2_i_6057_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 1);
variablenode_ns_2_i_6057_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6057_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6057),
UA_NODEID_NUMERIC(ns[2], 7011),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6057)
);
}

/* ParameterSet - ns=2;i=5018 */

static UA_StatusCode function_ua_namespace_tig4_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5018),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5018)
);
}

/* ArcIsOn - ns=2;i=6059 */

static UA_StatusCode function_ua_namespace_tig4_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "ArcIsOn");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6059),
UA_NODEID_NUMERIC(ns[2], 5018),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ArcIsOn"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6059), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5017), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6059)
);
}

/* IsOnline - ns=2;i=6063 */

static UA_StatusCode function_ua_namespace_tig4_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "IsOnline");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6063),
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "IsOnline"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6063), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5018), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6063)
);
}

/* ErrorCode - ns=2;i=6062 */

static UA_StatusCode function_ua_namespace_tig4_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
attr.displayName = UA_LOCALIZEDTEXT("", "ErrorCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6062),
UA_NODEID_NUMERIC(ns[2], 5018),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ErrorCode"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6062), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5017), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6062)
);
}

/* Voltage - ns=2;i=6075 */

static UA_StatusCode function_ua_namespace_tig4_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "Voltage");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6075),
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "Voltage"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6075), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5018), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6075)
);
}

/* Jobs - ns=2;i=6065 */

static UA_StatusCode function_ua_namespace_tig4_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3002);
UA_JobDescriptor variablenode_ns_2_i_6065_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6065_variant_DataContents[0], &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
variablenode_ns_2_i_6065_variant_DataContents[0].number = (UA_Int16) 0;
variablenode_ns_2_i_6065_variant_DataContents[0].name = UA_STRING("");
variablenode_ns_2_i_6065_variant_DataContents[0].rawData = UA_BYTESTRING_NULL;
variablenode_ns_2_i_6065_variant_DataContents[0].process = (UA_UInt16) 0;
variablenode_ns_2_i_6065_variant_DataContents[0].shieldingGas = UA_STRING("");
variablenode_ns_2_i_6065_variant_DataContents[0].fillerMaterial = UA_STRING("");
variablenode_ns_2_i_6065_variant_DataContents[0].fillerDiameter = UA_STRING("");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6065_variant_DataContents, (UA_Int32) 1, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
attr.displayName = UA_LOCALIZEDTEXT("", "Jobs");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6065),
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "Jobs"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6065), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5018), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6065)
);
}

/* SimulationMode - ns=2;i=6074 */

static UA_StatusCode function_ua_namespace_tig4_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "SimulationMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6074),
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "SimulationMode"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6074), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5018), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6074)
);
}

/* Current - ns=2;i=6060 */

static UA_StatusCode function_ua_namespace_tig4_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "Current");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6060),
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "Current"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6060), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5018), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6060)
);
}

/* Diagnostics - ns=2;i=5013 */

static UA_StatusCode function_ua_namespace_tig4_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Diagnostics");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Parameters and Methods for diagnostics.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5013),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Diagnostics"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5013)
);
}

/* Outputs - ns=2;i=5015 */

static UA_StatusCode function_ua_namespace_tig4_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Outputs");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5015),
UA_NODEID_NUMERIC(ns[2], 5013),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Outputs"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5015)
);
}

/* Inputs - ns=2;i=5014 */

static UA_StatusCode function_ua_namespace_tig4_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Inputs");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5014),
UA_NODEID_NUMERIC(ns[2], 5013),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Inputs"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5014)
);
}

/* HardwareRevision - ns=2;i=6052 */

static UA_StatusCode function_ua_namespace_tig4_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6052),
UA_NODEID_NUMERIC(ns[2], 5012),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6052)
);
}

/* ProtocolType - ns=2;i=6034 */

static UA_StatusCode function_ua_namespace_tig4_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6034_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6034_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6034_variant_DataContents);
*variablenode_ns_2_i_6034_variant_DataContents = UA_STRING_ALLOC("TIG4");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6034_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProtocolType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6034),
UA_NODEID_NUMERIC(ns[2], 1003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "ProtocolType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6034_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6034), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6034)
);
}

/* Model - ns=2;i=6033 */

static UA_StatusCode function_ua_namespace_tig4_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
UA_LocalizedText *variablenode_ns_2_i_6033_variant_DataContents =  UA_LocalizedText_new();
if (!variablenode_ns_2_i_6033_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_LocalizedText_init(variablenode_ns_2_i_6033_variant_DataContents);
*variablenode_ns_2_i_6033_variant_DataContents = UA_LOCALIZEDTEXT_ALLOC("", "TIG4");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6033_variant_DataContents, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6033),
UA_NODEID_NUMERIC(ns[2], 1003),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_LocalizedText_delete(variablenode_ns_2_i_6033_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6033), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6033)
);
}

/* SoftwareRevision - ns=2;i=6009 */

static UA_StatusCode function_ua_namespace_tig4_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6009),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6009), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6009)
);
}

/* Description - ns=2;i=6004 */

static UA_StatusCode function_ua_namespace_tig4_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "Description");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6004),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Description"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6004), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6004)
);
}

/* ParameterSet - ns=2;i=5002 */

static UA_StatusCode function_ua_namespace_tig4_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5002), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5002)
);
}

/* Jobs - ns=2;i=6025 */

static UA_StatusCode function_ua_namespace_tig4_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3002);
UA_JobDescriptor variablenode_ns_2_i_6025_variant_DataContents[1];

UA_init(&variablenode_ns_2_i_6025_variant_DataContents[0], &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
variablenode_ns_2_i_6025_variant_DataContents[0].number = (UA_Int16) 0;
variablenode_ns_2_i_6025_variant_DataContents[0].name = UA_STRING("");
variablenode_ns_2_i_6025_variant_DataContents[0].rawData = UA_BYTESTRING_NULL;
variablenode_ns_2_i_6025_variant_DataContents[0].process = (UA_UInt16) 0;
variablenode_ns_2_i_6025_variant_DataContents[0].shieldingGas = UA_STRING("");
variablenode_ns_2_i_6025_variant_DataContents[0].fillerMaterial = UA_STRING("");
variablenode_ns_2_i_6025_variant_DataContents[0].fillerDiameter = UA_STRING("");
UA_Variant_setArray(&attr.value, &variablenode_ns_2_i_6025_variant_DataContents, (UA_Int32) 1, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
attr.displayName = UA_LOCALIZEDTEXT("", "Jobs");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6025),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Jobs"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6025), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6025), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5004), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6025)
);
}

/* ArcIsOn - ns=2;i=6012 */

static UA_StatusCode function_ua_namespace_tig4_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "ArcIsOn");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6012),
UA_NODEID_NUMERIC(ns[2], 5004),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "ArcIsOn"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6012), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6012), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5002), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6012)
);
}

/* IsOnline - ns=2;i=6010 */

static UA_StatusCode function_ua_namespace_tig4_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "IsOnline");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6010),
UA_NODEID_NUMERIC(ns[2], 5004),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "IsOnline"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6010), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6010), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5002), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6010)
);
}

/* ErrorCode - ns=2;i=6013 */

static UA_StatusCode function_ua_namespace_tig4_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
attr.displayName = UA_LOCALIZEDTEXT("", "ErrorCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6013),
UA_NODEID_NUMERIC(ns[2], 5004),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "ErrorCode"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6013), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6013), UA_NODEID_NUMERIC(ns[0], 46), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5002), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6013)
);
}

/* Voltage - ns=2;i=6015 */

static UA_StatusCode function_ua_namespace_tig4_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "Voltage");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6015),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Voltage"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6015), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6015), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5004), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6015)
);
}

/* SimulationMode - ns=2;i=6011 */

static UA_StatusCode function_ua_namespace_tig4_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "SimulationMode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6011),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "SimulationMode"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6011), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5004), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6011), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6011)
);
}

/* Current - ns=2;i=6014 */

static UA_StatusCode function_ua_namespace_tig4_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11);
attr.displayName = UA_LOCALIZEDTEXT("", "Current");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6014),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[2], "Current"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6014), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6014), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5004), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6014)
);
}

/* Diagnostics - ns=2;i=5005 */

static UA_StatusCode function_ua_namespace_tig4_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Diagnostics");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Parameters and Methods for diagnostics.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Diagnostics"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5005), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5005)
);
}

/* Inputs - ns=2;i=5009 */

static UA_StatusCode function_ua_namespace_tig4_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Inputs");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5009),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Inputs"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5009), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5009)
);
}

/* Outputs - ns=2;i=5010 */

static UA_StatusCode function_ua_namespace_tig4_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Outputs");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 5010),
UA_NODEID_NUMERIC(ns[2], 5005),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Outputs"),
UA_NODEID_NUMERIC(ns[1], 1005),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 5010), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 5010)
);
}

/* ManufacturerUri - ns=2;i=6002 */

static UA_StatusCode function_ua_namespace_tig4_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6002_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6002_variant_DataContents);
*variablenode_ns_2_i_6002_variant_DataContents = UA_STRING_ALLOC("http://merkle.de");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6002_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6002),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6002_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6002), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6002)
);
}

/* DeviceClass - ns=2;i=6005 */

static UA_StatusCode function_ua_namespace_tig4_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceClass");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6005),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "DeviceClass"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6005), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6005)
);
}

/* HardwareRevision - ns=2;i=6006 */

static UA_StatusCode function_ua_namespace_tig4_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6006),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6006), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6006)
);
}

/* SerialNumber - ns=2;i=6008 */

static UA_StatusCode function_ua_namespace_tig4_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6008),
UA_NODEID_NUMERIC(ns[2], 1002),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6008), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6008)
);
}

/* JobDescriptorType - ns=2;i=2001 */

static UA_StatusCode function_ua_namespace_tig4_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3002);

UA_STACKARRAY(UA_JobDescriptor, variabletypenode_ns_2_i_2001_JobDescriptor_0, 1);
UA_init(variabletypenode_ns_2_i_2001_JobDescriptor_0, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
variabletypenode_ns_2_i_2001_JobDescriptor_0->number = (UA_Int16) 0;
variabletypenode_ns_2_i_2001_JobDescriptor_0->name = UA_STRING("");
variabletypenode_ns_2_i_2001_JobDescriptor_0->rawData = UA_BYTESTRING_NULL;
variabletypenode_ns_2_i_2001_JobDescriptor_0->process = (UA_UInt16) 0;
variabletypenode_ns_2_i_2001_JobDescriptor_0->shieldingGas = UA_STRING("");
variabletypenode_ns_2_i_2001_JobDescriptor_0->fillerMaterial = UA_STRING("");
variabletypenode_ns_2_i_2001_JobDescriptor_0->fillerDiameter = UA_STRING("");
UA_Variant_setScalar(&attr.value, variabletypenode_ns_2_i_2001_JobDescriptor_0, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
attr.displayName = UA_LOCALIZEDTEXT("", "JobDescriptorType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[2], 2001),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[2], "JobDescriptorType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);

return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 2001)
);
}

/* Number - ns=2;i=6022 */

static UA_StatusCode function_ua_namespace_tig4_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6022),
UA_NODEID_NUMERIC(ns[2], 2001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Number"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6022), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6022)
);
}

/* FillerDiameter - ns=2;i=6030 */

static UA_StatusCode function_ua_namespace_tig4_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12878);
attr.displayName = UA_LOCALIZEDTEXT("", "FillerDiameter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6030),
UA_NODEID_NUMERIC(ns[2], 2001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "FillerDiameter"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6030), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6030)
);
}

/* CurrentJob - ns=2;i=6039 */

static UA_StatusCode function_ua_namespace_tig4_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3002);

UA_STACKARRAY(UA_JobDescriptor, variablenode_ns_2_i_6039_JobDescriptor_0, 1);
UA_init(variablenode_ns_2_i_6039_JobDescriptor_0, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
variablenode_ns_2_i_6039_JobDescriptor_0->number = (UA_Int16) 0;
variablenode_ns_2_i_6039_JobDescriptor_0->name = UA_STRING("");
variablenode_ns_2_i_6039_JobDescriptor_0->rawData = UA_BYTESTRING_NULL;
variablenode_ns_2_i_6039_JobDescriptor_0->process = (UA_UInt16) 0;
variablenode_ns_2_i_6039_JobDescriptor_0->shieldingGas = UA_STRING("");
variablenode_ns_2_i_6039_JobDescriptor_0->fillerMaterial = UA_STRING("");
variablenode_ns_2_i_6039_JobDescriptor_0->fillerDiameter = UA_STRING("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6039_JobDescriptor_0, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentJob");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6039),
UA_NODEID_NUMERIC(ns[2], 5017),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[2], "CurrentJob"),
UA_NODEID_NUMERIC(ns[2], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6039), UA_NODEID_NUMERIC(ns[0], 47), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5018), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6039)
);
}

/* Name - ns=2;i=6042 */

static UA_StatusCode function_ua_namespace_tig4_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6042),
UA_NODEID_NUMERIC(ns[2], 6039),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6042)
);
}

/* FillerDiameter - ns=2;i=6040 */

static UA_StatusCode function_ua_namespace_tig4_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12878);
attr.displayName = UA_LOCALIZEDTEXT("", "FillerDiameter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6040),
UA_NODEID_NUMERIC(ns[2], 6039),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "FillerDiameter"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6040)
);
}

/* RawData - ns=2;i=6045 */

static UA_StatusCode function_ua_namespace_tig4_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
attr.displayName = UA_LOCALIZEDTEXT("", "RawData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6045),
UA_NODEID_NUMERIC(ns[2], 6039),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RawData"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6045)
);
}

/* Process - ns=2;i=6044 */

static UA_StatusCode function_ua_namespace_tig4_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
attr.displayName = UA_LOCALIZEDTEXT("", "Process");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6044),
UA_NODEID_NUMERIC(ns[2], 6039),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Process"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6044)
);
}

/* ShieldingGas - ns=2;i=6046 */

static UA_StatusCode function_ua_namespace_tig4_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ShieldingGas");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6046),
UA_NODEID_NUMERIC(ns[2], 6039),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "ShieldingGas"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6046)
);
}

/* FillerMaterial - ns=2;i=6041 */

static UA_StatusCode function_ua_namespace_tig4_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "FillerMaterial");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6041),
UA_NODEID_NUMERIC(ns[2], 6039),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "FillerMaterial"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6041)
);
}

/* Number - ns=2;i=6043 */

static UA_StatusCode function_ua_namespace_tig4_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6043),
UA_NODEID_NUMERIC(ns[2], 6039),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Number"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6043)
);
}

/* CurrentJob - ns=2;i=6029 */

static UA_StatusCode function_ua_namespace_tig4_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 3002);

UA_STACKARRAY(UA_JobDescriptor, variablenode_ns_2_i_6029_JobDescriptor_0, 1);
UA_init(variablenode_ns_2_i_6029_JobDescriptor_0, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
variablenode_ns_2_i_6029_JobDescriptor_0->number = (UA_Int16) 0;
variablenode_ns_2_i_6029_JobDescriptor_0->name = UA_STRING("");
variablenode_ns_2_i_6029_JobDescriptor_0->rawData = UA_BYTESTRING_NULL;
variablenode_ns_2_i_6029_JobDescriptor_0->process = (UA_UInt16) 0;
variablenode_ns_2_i_6029_JobDescriptor_0->shieldingGas = UA_STRING("");
variablenode_ns_2_i_6029_JobDescriptor_0->fillerMaterial = UA_STRING("");
variablenode_ns_2_i_6029_JobDescriptor_0->fillerDiameter = UA_STRING("");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6029_JobDescriptor_0, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentJob");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[2], 5002),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "CurrentJob"),
UA_NODEID_NUMERIC(ns[2], 2001),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6029), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5004), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6029), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6029)
);
}

/* FillerMaterial - ns=2;i=6088 */

static UA_StatusCode function_ua_namespace_tig4_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "FillerMaterial");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6088),
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "FillerMaterial"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6088), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6088)
);
}

/* RawData - ns=2;i=6092 */

static UA_StatusCode function_ua_namespace_tig4_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
attr.displayName = UA_LOCALIZEDTEXT("", "RawData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6092),
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RawData"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6092), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6092)
);
}

/* FillerDiameter - ns=2;i=6061 */

static UA_StatusCode function_ua_namespace_tig4_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12878);
attr.displayName = UA_LOCALIZEDTEXT("", "FillerDiameter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6061),
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "FillerDiameter"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6061), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6061)
);
}

/* ShieldingGas - ns=2;i=6093 */

static UA_StatusCode function_ua_namespace_tig4_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ShieldingGas");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6093),
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "ShieldingGas"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6093), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6093)
);
}

/* Process - ns=2;i=6091 */

static UA_StatusCode function_ua_namespace_tig4_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
attr.displayName = UA_LOCALIZEDTEXT("", "Process");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6091),
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Process"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6091), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6091)
);
}

/* Number - ns=2;i=6090 */

static UA_StatusCode function_ua_namespace_tig4_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 4);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6090),
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Number"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6090), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6090)
);
}

/* Name - ns=2;i=6089 */

static UA_StatusCode function_ua_namespace_tig4_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6089),
UA_NODEID_NUMERIC(ns[2], 6029),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6089), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6089)
);
}

/* RawData - ns=2;i=6024 */

static UA_StatusCode function_ua_namespace_tig4_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
attr.displayName = UA_LOCALIZEDTEXT("", "RawData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6024),
UA_NODEID_NUMERIC(ns[2], 2001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "RawData"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6024), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6024)
);
}

/* Name - ns=2;i=6023 */

static UA_StatusCode function_ua_namespace_tig4_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6023),
UA_NODEID_NUMERIC(ns[2], 2001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Name"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6023), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6023)
);
}

/* Process - ns=2;i=6026 */

static UA_StatusCode function_ua_namespace_tig4_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
attr.displayName = UA_LOCALIZEDTEXT("", "Process");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6026),
UA_NODEID_NUMERIC(ns[2], 2001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "Process"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6026), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6026)
);
}

/* ShieldingGas - ns=2;i=6027 */

static UA_StatusCode function_ua_namespace_tig4_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ShieldingGas");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6027),
UA_NODEID_NUMERIC(ns[2], 2001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "ShieldingGas"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6027), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6027)
);
}

/* FillerMaterial - ns=2;i=6028 */

static UA_StatusCode function_ua_namespace_tig4_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "FillerMaterial");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6028),
UA_NODEID_NUMERIC(ns[2], 2001),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "FillerMaterial"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6028), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78), true);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6028)
);
}

/* TIG4WeldingMachine - ns=2;i=6018 */
static const UA_Byte variablenode_ns_2_i_6018_variant_DataContents_byteArray[1370] = {60, 120, 115, 58, 115, 99, 104, 101, 109, 97, 32, 101, 108, 101, 109, 101, 110, 116, 70, 111, 114, 109, 68, 101, 102, 97, 117, 108, 116, 61, 34, 113, 117, 97, 108, 105, 102, 105, 101, 100, 34, 32, 116, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 77, 101, 114, 107, 108, 101, 46, 100, 101, 47, 84, 73, 71, 52, 87, 101, 108, 100, 105, 110, 103, 77, 97, 99, 104, 105, 110, 101, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 77, 101, 114, 107, 108, 101, 46, 100, 101, 47, 84, 73, 71, 52, 87, 101, 108, 100, 105, 110, 103, 77, 97, 99, 104, 105, 110, 101, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 120, 109, 108, 110, 115, 58, 120, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 34, 62, 10, 32, 60, 120, 115, 58, 105, 109, 112, 111, 114, 116, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 74, 111, 98, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 104, 111, 114, 116, 34, 32, 110, 97, 109, 101, 61, 34, 78, 117, 109, 98, 101, 114, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 110, 97, 109, 101, 61, 34, 78, 97, 109, 101, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 97, 115, 101, 54, 52, 66, 105, 110, 97, 114, 121, 34, 32, 110, 97, 109, 101, 61, 34, 82, 97, 119, 68, 97, 116, 97, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 117, 110, 115, 105, 103, 110, 101, 100, 83, 104, 111, 114, 116, 34, 32, 110, 97, 109, 101, 61, 34, 80, 114, 111, 99, 101, 115, 115, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 110, 97, 109, 101, 61, 34, 83, 104, 105, 101, 108, 100, 105, 110, 103, 71, 97, 115, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 110, 97, 109, 101, 61, 34, 70, 105, 108, 108, 101, 114, 77, 97, 116, 101, 114, 105, 97, 108, 34, 47, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 49, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 32, 110, 97, 109, 101, 61, 34, 70, 105, 108, 108, 101, 114, 68, 105, 97, 109, 101, 116, 101, 114, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 74, 111, 98, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 34, 32, 110, 97, 109, 101, 61, 34, 74, 111, 98, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 34, 47, 62, 10, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 74, 111, 98, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 34, 62, 10, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 74, 111, 98, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 34, 32, 110, 97, 109, 101, 61, 34, 74, 111, 98, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 10, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 10, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 74, 111, 98, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 34, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 74, 111, 98, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 47, 62, 10, 60, 47, 120, 115, 58, 115, 99, 104, 101, 109, 97, 62, 10};



static UA_StatusCode function_ua_namespace_tig4_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_2_i_6018_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_2_i_6018_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_2_i_6018_variant_DataContents);
variablenode_ns_2_i_6018_variant_DataContents->length = 1370;
variablenode_ns_2_i_6018_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_2_i_6018_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6018_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TIG4WeldingMachine");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Collects the data type descriptions of http://Merkle.de/TIG4WeldingMachine/");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6018),
UA_NODEID_NUMERIC(ns[0], 92),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "TIG4WeldingMachine"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_2_i_6018_variant_DataContents->data = NULL;
variablenode_ns_2_i_6018_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_2_i_6018_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6018)
);
}

/* NamespaceUri - ns=2;i=6019 */

static UA_StatusCode function_ua_namespace_tig4_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6019_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6019_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6019_variant_DataContents);
*variablenode_ns_2_i_6019_variant_DataContents = UA_STRING_ALLOC("http://Merkle.de/TIG4WeldingMachine/Types.xsd");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6019_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6019),
UA_NODEID_NUMERIC(ns[2], 6018),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6019_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6019)
);
}

/* TIG4JobType - ns=2;i=6021 */

static UA_StatusCode function_ua_namespace_tig4_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6021_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6021_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6021_variant_DataContents);
*variablenode_ns_2_i_6021_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='TIG4JobType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6021_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TIG4JobType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6021),
UA_NODEID_NUMERIC(ns[2], 6018),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "TIG4JobType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6021_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6021), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5007), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6021)
);
}

/* TIG4WeldingMachine - ns=2;i=6016 */
static const UA_Byte variablenode_ns_2_i_6016_variant_DataContents_byteArray[870] = {60, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 32, 120, 109, 108, 110, 115, 58, 120, 115, 105, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 45, 105, 110, 115, 116, 97, 110, 99, 101, 34, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 77, 101, 114, 107, 108, 101, 46, 100, 101, 47, 84, 73, 71, 52, 87, 101, 108, 100, 105, 110, 103, 77, 97, 99, 104, 105, 110, 101, 47, 34, 32, 68, 101, 102, 97, 117, 108, 116, 66, 121, 116, 101, 79, 114, 100, 101, 114, 61, 34, 76, 105, 116, 116, 108, 101, 69, 110, 100, 105, 97, 110, 34, 32, 120, 109, 108, 110, 115, 58, 111, 112, 99, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 47, 34, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 32, 84, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 77, 101, 114, 107, 108, 101, 46, 100, 101, 47, 84, 73, 71, 52, 87, 101, 108, 100, 105, 110, 103, 77, 97, 99, 104, 105, 110, 101, 47, 34, 62, 10, 32, 60, 111, 112, 99, 58, 73, 109, 112, 111, 114, 116, 32, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 47, 62, 10, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 32, 78, 97, 109, 101, 61, 34, 74, 111, 98, 68, 101, 115, 99, 114, 105, 112, 116, 111, 114, 34, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 49, 54, 34, 32, 78, 97, 109, 101, 61, 34, 78, 117, 109, 98, 101, 114, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 67, 104, 97, 114, 65, 114, 114, 97, 121, 34, 32, 78, 97, 109, 101, 61, 34, 78, 97, 109, 101, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 66, 121, 116, 101, 83, 116, 114, 105, 110, 103, 34, 32, 78, 97, 109, 101, 61, 34, 82, 97, 119, 68, 97, 116, 97, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 85, 73, 110, 116, 49, 54, 34, 32, 78, 97, 109, 101, 61, 34, 80, 114, 111, 99, 101, 115, 115, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 67, 104, 97, 114, 65, 114, 114, 97, 121, 34, 32, 78, 97, 109, 101, 61, 34, 83, 104, 105, 101, 108, 100, 105, 110, 103, 71, 97, 115, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 67, 104, 97, 114, 65, 114, 114, 97, 121, 34, 32, 78, 97, 109, 101, 61, 34, 70, 105, 108, 108, 101, 114, 77, 97, 116, 101, 114, 105, 97, 108, 34, 47, 62, 10, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 67, 104, 97, 114, 65, 114, 114, 97, 121, 34, 32, 78, 97, 109, 101, 61, 34, 70, 105, 108, 108, 101, 114, 68, 105, 97, 109, 101, 116, 101, 114, 34, 47, 62, 10, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 10, 60, 47, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 62, 10};



static UA_StatusCode function_ua_namespace_tig4_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
UA_ByteString *variablenode_ns_2_i_6016_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_2_i_6016_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_2_i_6016_variant_DataContents);
variablenode_ns_2_i_6016_variant_DataContents->length = 870;
variablenode_ns_2_i_6016_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_2_i_6016_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6016_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TIG4WeldingMachine");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Collects the data type descriptions of http://Merkle.de/TIG4WeldingMachine/");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6016),
UA_NODEID_NUMERIC(ns[0], 93),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "TIG4WeldingMachine"),
UA_NODEID_NUMERIC(ns[0], 72),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_2_i_6016_variant_DataContents->data = NULL;
variablenode_ns_2_i_6016_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_2_i_6016_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6016)
);
}

/* TIG4JobType - ns=2;i=6020 */

static UA_StatusCode function_ua_namespace_tig4_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6020_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6020_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6020_variant_DataContents);
*variablenode_ns_2_i_6020_variant_DataContents = UA_STRING_ALLOC("TIG4JobType");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6020_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TIG4JobType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6020),
UA_NODEID_NUMERIC(ns[2], 6016),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[2], "TIG4JobType"),
UA_NODEID_NUMERIC(ns[0], 69),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6020_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[2], 6020), UA_NODEID_NUMERIC(ns[0], 39), UA_EXPANDEDNODEID_NUMERIC(ns[2], 5006), false);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6020)
);
}

/* NamespaceUri - ns=2;i=6017 */

static UA_StatusCode function_ua_namespace_tig4_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_2_i_6017_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_6017_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_6017_variant_DataContents);
*variablenode_ns_2_i_6017_variant_DataContents = UA_STRING_ALLOC("http://Merkle.de/TIG4WeldingMachine/");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_6017_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 6017),
UA_NODEID_NUMERIC(ns[2], 6016),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_6017_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ua_namespace_tig4_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 6017)
);
}

UA_StatusCode ua_namespace_tig4(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[3];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/DI/");
ns[2] = UA_Server_addNamespace(server, "http://Merkle.de/TIG4WeldingMachine/");
bool dummy = (
!(retVal = function_ua_namespace_tig4_0_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_1_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_2_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_3_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_4_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_5_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_6_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_7_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_8_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_9_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_10_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_11_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_12_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_13_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_14_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_15_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_16_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_17_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_18_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_19_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_20_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_21_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_22_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_23_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_24_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_25_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_26_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_27_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_28_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_29_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_30_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_31_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_32_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_33_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_34_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_35_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_36_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_37_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_38_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_39_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_40_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_41_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_42_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_43_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_44_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_45_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_46_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_47_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_48_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_49_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_50_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_51_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_52_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_53_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_54_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_55_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_56_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_57_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_58_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_59_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_60_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_61_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_62_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_63_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_64_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_65_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_66_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_67_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_68_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_69_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_70_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_71_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_72_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_73_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_74_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_75_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_76_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_77_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_78_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_79_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_80_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_81_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_82_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_83_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_84_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_85_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_86_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_87_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_88_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_89_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_90_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_91_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_92_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_93_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_94_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_95_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_96_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_97_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_98_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_99_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_100_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_101_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_102_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_103_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_104_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_105_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_106_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_107_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_108_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_109_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_110_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_111_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_112_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_113_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_114_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_115_begin(server, ns)) &&
!(retVal = function_ua_namespace_tig4_115_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_114_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_113_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_112_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_111_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_110_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_109_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_108_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_107_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_106_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_105_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_104_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_103_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_102_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_101_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_100_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_99_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_98_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_97_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_96_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_95_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_94_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_93_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_92_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_91_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_90_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_89_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_88_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_87_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_86_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_85_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_84_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_83_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_82_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_81_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_80_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_79_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_78_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_77_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_76_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_75_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_74_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_73_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_72_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_71_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_70_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_69_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_68_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_67_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_66_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_65_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_64_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_63_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_62_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_61_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_60_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_59_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_58_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_57_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_56_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_55_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_54_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_53_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_52_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_51_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_50_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_49_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_48_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_47_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_46_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_45_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_44_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_43_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_42_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_41_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_40_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_39_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_38_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_37_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_36_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_35_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_34_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_33_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_32_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_31_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_30_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_29_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_28_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_27_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_26_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_25_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_24_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_23_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_22_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_21_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_20_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_19_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_18_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_17_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_16_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_15_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_14_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_13_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_12_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_11_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_10_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_9_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_8_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_7_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_6_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_5_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_4_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_3_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_2_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_1_finish(server, ns)) &&
!(retVal = function_ua_namespace_tig4_0_finish(server, ns)) 
); (void)(dummy);
return retVal;
}

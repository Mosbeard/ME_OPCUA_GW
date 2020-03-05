/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace0_generated.h"


/* HasInterface - ns=0;i=17603 */

static UA_StatusCode function_namespace0_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "InterfaceOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasInterface");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 17603),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "HasInterface"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17603)
);
}

/* HasHistoricalConfiguration - ns=0;i=56 */

static UA_StatusCode function_namespace0_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "HistoricalConfigurationOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasHistoricalConfiguration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 56),
UA_NODEID_NUMERIC(ns[0], 44),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "HasHistoricalConfiguration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 56)
);
}

/* HasEffect - ns=0;i=54 */

static UA_StatusCode function_namespace0_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeEffectedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasEffect");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 54),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "HasEffect"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 54)
);
}

/* HasCause - ns=0;i=53 */

static UA_StatusCode function_namespace0_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "MayBeCausedBy");
attr.displayName = UA_LOCALIZEDTEXT("", "HasCause");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 53),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "HasCause"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 53)
);
}

/* ToState - ns=0;i=52 */

static UA_StatusCode function_namespace0_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "FromTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "ToState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 52),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ToState"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 52)
);
}

/* FromState - ns=0;i=51 */

static UA_StatusCode function_namespace0_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ToTransition");
attr.displayName = UA_LOCALIZEDTEXT("", "FromState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[0], 51),
UA_NODEID_NUMERIC(ns[0], 32),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "FromState"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 51)
);
}

/* DiagnosticInfo - ns=0;i=25 */

static UA_StatusCode function_namespace0_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DiagnosticInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 25),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DiagnosticInfo"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 25)
);
}

/* DataValue - ns=0;i=23 */

static UA_StatusCode function_namespace0_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 23),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataValue"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 23)
);
}

/* Structure - ns=0;i=22 */

static UA_StatusCode function_namespace0_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Structure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Structure"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 22)
);
}

/* Range - ns=0;i=884 */

static UA_StatusCode function_namespace0_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Range");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 884),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Range"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 884)
);
}

/* TimeZoneDataType - ns=0;i=8912 */

static UA_StatusCode function_namespace0_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TimeZoneDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 8912),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "TimeZoneDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 8912)
);
}

/* ServerDiagnosticsSummaryDataType - ns=0;i=859 */

static UA_StatusCode function_namespace0_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 859),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 859)
);
}

/* BuildInfo - ns=0;i=338 */

static UA_StatusCode function_namespace0_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 338),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 338)
);
}

/* Argument - ns=0;i=296 */

static UA_StatusCode function_namespace0_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Argument");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 296),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Argument"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 296)
);
}

/* RolePermissionType - ns=0;i=96 */

static UA_StatusCode function_namespace0_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RolePermissionType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 96),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "RolePermissionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 96)
);
}

/* ServerStatusDataType - ns=0;i=862 */

static UA_StatusCode function_namespace0_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 862),
UA_NODEID_NUMERIC(ns[0], 22),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerStatusDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 862)
);
}

/* LocalizedText - ns=0;i=21 */

static UA_StatusCode function_namespace0_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LocalizedText");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 21),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "LocalizedText"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 21)
);
}

/* QualifiedName - ns=0;i=20 */

static UA_StatusCode function_namespace0_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "QualifiedName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 20),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "QualifiedName"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 20)
);
}

/* StatusCode - ns=0;i=19 */

static UA_StatusCode function_namespace0_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StatusCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 19),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "StatusCode"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 19)
);
}

/* ExpandedNodeId - ns=0;i=18 */

static UA_StatusCode function_namespace0_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExpandedNodeId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 18),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ExpandedNodeId"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 18)
);
}

/* NodeId - ns=0;i=17 */

static UA_StatusCode function_namespace0_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NodeId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 17),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "NodeId"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17)
);
}

/* XmlElement - ns=0;i=16 */

static UA_StatusCode function_namespace0_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "XmlElement");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 16),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "XmlElement"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 16)
);
}

/* ByteString - ns=0;i=15 */

static UA_StatusCode function_namespace0_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ByteString");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 15),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ByteString"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 15)
);
}

/* Image - ns=0;i=30 */

static UA_StatusCode function_namespace0_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Image");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 30),
UA_NODEID_NUMERIC(ns[0], 15),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Image"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 30)
);
}

/* Guid - ns=0;i=14 */

static UA_StatusCode function_namespace0_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Guid");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 14),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Guid"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 14)
);
}

/* DateTime - ns=0;i=13 */

static UA_StatusCode function_namespace0_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DateTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 13),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DateTime"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 13)
);
}

/* UtcTime - ns=0;i=294 */

static UA_StatusCode function_namespace0_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UtcTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 294),
UA_NODEID_NUMERIC(ns[0], 13),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UtcTime"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 294)
);
}

/* String - ns=0;i=12 */

static UA_StatusCode function_namespace0_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "String");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "String"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 12)
);
}

/* NumericRange - ns=0;i=291 */

static UA_StatusCode function_namespace0_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NumericRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 291),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "NumericRange"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 291)
);
}

/* LocaleId - ns=0;i=295 */

static UA_StatusCode function_namespace0_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 295),
UA_NODEID_NUMERIC(ns[0], 12),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "LocaleId"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 295)
);
}

/* Boolean - ns=0;i=1 */

static UA_StatusCode function_namespace0_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Boolean");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 1),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Boolean"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 1)
);
}

/* Enumeration - ns=0;i=29 */

static UA_StatusCode function_namespace0_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Enumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Enumeration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 29)
);
}

/* ServerState - ns=0;i=852 */

static UA_StatusCode function_namespace0_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 852),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerState"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 852)
);
}

/* IdType - ns=0;i=256 */

static UA_StatusCode function_namespace0_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IdType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 256),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "IdType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 256)
);
}

/* RedundancySupport - ns=0;i=851 */

static UA_StatusCode function_namespace0_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 851),
UA_NODEID_NUMERIC(ns[0], 29),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 851)
);
}

/* Number - ns=0;i=26 */

static UA_StatusCode function_namespace0_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 24),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Number"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 26)
);
}

/* Double - ns=0;i=11 */

static UA_StatusCode function_namespace0_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Double");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 11),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Double"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11)
);
}

/* Duration - ns=0;i=290 */

static UA_StatusCode function_namespace0_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Duration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 290),
UA_NODEID_NUMERIC(ns[0], 11),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Duration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 290)
);
}

/* Decimal - ns=0;i=50 */

static UA_StatusCode function_namespace0_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Decimal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 50),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Decimal"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 50)
);
}

/* UInteger - ns=0;i=28 */

static UA_StatusCode function_namespace0_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "UInteger");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UInteger"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 28)
);
}

/* UInt32 - ns=0;i=7 */

static UA_StatusCode function_namespace0_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt32");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 7),
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UInt32"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 7)
);
}

/* AccessRestrictionType - ns=0;i=95 */

static UA_StatusCode function_namespace0_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AccessRestrictionType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 95),
UA_NODEID_NUMERIC(ns[0], 7),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "AccessRestrictionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 95)
);
}

/* UInt16 - ns=0;i=5 */

static UA_StatusCode function_namespace0_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt16");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 5),
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UInt16"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 5)
);
}

/* UInt64 - ns=0;i=9 */

static UA_StatusCode function_namespace0_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UInt64");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 9),
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "UInt64"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 9)
);
}

/* Byte - ns=0;i=3 */

static UA_StatusCode function_namespace0_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Byte");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 3),
UA_NODEID_NUMERIC(ns[0], 28),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Byte"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3)
);
}

/* Integer - ns=0;i=27 */

static UA_StatusCode function_namespace0_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Integer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Integer"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 27)
);
}

/* SByte - ns=0;i=2 */

static UA_StatusCode function_namespace0_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SByte");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 2),
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "SByte"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2)
);
}

/* Int64 - ns=0;i=8 */

static UA_StatusCode function_namespace0_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int64");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 8),
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Int64"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 8)
);
}

/* Int32 - ns=0;i=6 */

static UA_StatusCode function_namespace0_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int32");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 6),
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Int32"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 6)
);
}

/* Int16 - ns=0;i=4 */

static UA_StatusCode function_namespace0_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Int16");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 4),
UA_NODEID_NUMERIC(ns[0], 27),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Int16"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 4)
);
}

/* Float - ns=0;i=10 */

static UA_StatusCode function_namespace0_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Float");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[0], 10),
UA_NODEID_NUMERIC(ns[0], 26),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "Float"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 10)
);
}

/* DataItemType - ns=0;i=2365 */

static UA_StatusCode function_namespace0_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "DataItemType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2365),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataItemType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2365)
);
}

/* BaseAnalogType - ns=0;i=15318 */

static UA_StatusCode function_namespace0_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26);
attr.displayName = UA_LOCALIZEDTEXT("", "BaseAnalogType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 15318),
UA_NODEID_NUMERIC(ns[0], 2365),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "BaseAnalogType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 15318)
);
}

/* AnalogItemType - ns=0;i=2368 */

static UA_StatusCode function_namespace0_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26);
attr.displayName = UA_LOCALIZEDTEXT("", "AnalogItemType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2368),
UA_NODEID_NUMERIC(ns[0], 15318),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "AnalogItemType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2368)
);
}

/* EURange - ns=0;i=2369 */

static UA_StatusCode function_namespace0_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 884);
attr.displayName = UA_LOCALIZEDTEXT("", "EURange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2369),
UA_NODEID_NUMERIC(ns[0], 2368),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EURange"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2369)
);
}

/* InterfaceTypes - ns=0;i=17708 */

static UA_StatusCode function_namespace0_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InterfaceTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 17708),
UA_NODEID_NUMERIC(ns[0], 86),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[0], "InterfaceTypes"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17708)
);
}

/* BaseInterfaceType - ns=0;i=17602 */

static UA_StatusCode function_namespace0_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "BaseInterfaceType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 17602),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "BaseInterfaceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 17602), UA_NODEID_NUMERIC(ns[0], 35), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17708), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17602)
);
}

/* TransitionType - ns=0;i=2310 */

static UA_StatusCode function_namespace0_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2310),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "TransitionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2310)
);
}

/* StateType - ns=0;i=2307 */

static UA_StatusCode function_namespace0_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StateType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2307),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "StateType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2307)
);
}

/* TransitionVariableType - ns=0;i=2762 */

static UA_StatusCode function_namespace0_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2762),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "TransitionVariableType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2762)
);
}

/* Number - ns=0;i=2765 */

static UA_StatusCode function_namespace0_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2765),
UA_NODEID_NUMERIC(ns[0], 2762),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2765)
);
}

/* Id - ns=0;i=2763 */

static UA_StatusCode function_namespace0_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2763),
UA_NODEID_NUMERIC(ns[0], 2762),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2763)
);
}

/* Name - ns=0;i=2764 */

static UA_StatusCode function_namespace0_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 20);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2764),
UA_NODEID_NUMERIC(ns[0], 2762),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2764)
);
}

/* TransitionTime - ns=0;i=2766 */

static UA_StatusCode function_namespace0_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2766),
UA_NODEID_NUMERIC(ns[0], 2762),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionTime"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2766)
);
}

/* FiniteTransitionVariableType - ns=0;i=2767 */

static UA_StatusCode function_namespace0_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "FiniteTransitionVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2767),
UA_NODEID_NUMERIC(ns[0], 2762),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "FiniteTransitionVariableType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2767)
);
}

/* Id - ns=0;i=2768 */

static UA_StatusCode function_namespace0_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2768),
UA_NODEID_NUMERIC(ns[0], 2767),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2768)
);
}

/* StateVariableType - ns=0;i=2755 */

static UA_StatusCode function_namespace0_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "StateVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2755),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "StateVariableType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2755)
);
}

/* FiniteStateVariableType - ns=0;i=2760 */

static UA_StatusCode function_namespace0_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "FiniteStateVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2760),
UA_NODEID_NUMERIC(ns[0], 2755),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "FiniteStateVariableType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2760)
);
}

/* Id - ns=0;i=2761 */

static UA_StatusCode function_namespace0_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2761),
UA_NODEID_NUMERIC(ns[0], 2760),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2761)
);
}

/* Number - ns=0;i=2758 */

static UA_StatusCode function_namespace0_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "Number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2758),
UA_NODEID_NUMERIC(ns[0], 2755),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Number"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2758)
);
}

/* Id - ns=0;i=2756 */

static UA_StatusCode function_namespace0_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2756),
UA_NODEID_NUMERIC(ns[0], 2755),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2756)
);
}

/* Name - ns=0;i=2757 */

static UA_StatusCode function_namespace0_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 20);
attr.displayName = UA_LOCALIZEDTEXT("", "Name");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2757),
UA_NODEID_NUMERIC(ns[0], 2755),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Name"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2757)
);
}

/* EffectiveDisplayName - ns=0;i=2759 */

static UA_StatusCode function_namespace0_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "EffectiveDisplayName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2759),
UA_NODEID_NUMERIC(ns[0], 2755),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EffectiveDisplayName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2759)
);
}

/* StateMachineType - ns=0;i=2299 */

static UA_StatusCode function_namespace0_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2299),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "StateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2299)
);
}

/* LastTransition - ns=0;i=2770 */

static UA_StatusCode function_namespace0_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "LastTransition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2770),
UA_NODEID_NUMERIC(ns[0], 2299),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2762),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2770)
);
}

/* Id - ns=0;i=3724 */

static UA_StatusCode function_namespace0_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3724),
UA_NODEID_NUMERIC(ns[0], 2770),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3724)
);
}

/* CurrentState - ns=0;i=2769 */

static UA_StatusCode function_namespace0_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2769),
UA_NODEID_NUMERIC(ns[0], 2299),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2755),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2769)
);
}

/* Id - ns=0;i=3720 */

static UA_StatusCode function_namespace0_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3720),
UA_NODEID_NUMERIC(ns[0], 2769),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3720)
);
}

/* FiniteStateMachineType - ns=0;i=2771 */

static UA_StatusCode function_namespace0_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FiniteStateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2771),
UA_NODEID_NUMERIC(ns[0], 2299),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "FiniteStateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2771)
);
}

/* CurrentState - ns=0;i=2772 */

static UA_StatusCode function_namespace0_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2772),
UA_NODEID_NUMERIC(ns[0], 2771),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2772)
);
}

/* Id - ns=0;i=3728 */

static UA_StatusCode function_namespace0_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3728),
UA_NODEID_NUMERIC(ns[0], 2772),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3728)
);
}

/* ProgramStateMachineType - ns=0;i=2391 */

static UA_StatusCode function_namespace0_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramStateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 2771),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ProgramStateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2391)
);
}

/* InstanceCount - ns=0;i=2396 */

static UA_StatusCode function_namespace0_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "InstanceCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2396),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "InstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2396)
);
}

/* MaxRecycleCount - ns=0;i=2398 */

static UA_StatusCode function_namespace0_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxRecycleCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2398),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxRecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2398)
);
}

/* Start - ns=0;i=2426 */

static UA_StatusCode function_namespace0_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 2426),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2426)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* MaxInstanceCount - ns=0;i=2397 */

static UA_StatusCode function_namespace0_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxInstanceCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2397),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxInstanceCount"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2397)
);
}

/* LastTransition - ns=0;i=3835 */

static UA_StatusCode function_namespace0_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "LastTransition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3835),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3835)
);
}

/* FinalResultData - ns=0;i=3850 */

static UA_StatusCode function_namespace0_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FinalResultData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 3850),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "FinalResultData"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3850)
);
}

/* Ready - ns=0;i=2400 */

static UA_StatusCode function_namespace0_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Ready");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2400),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Ready"),
UA_NODEID_NUMERIC(ns[0], 2307),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2400)
);
}

/* StateNumber - ns=0;i=2401 */

static UA_StatusCode function_namespace0_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2401_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2401_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2401_variant_DataContents);
*variablenode_ns_0_i_2401_variant_DataContents = (UA_UInt32) 12;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2401_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2401),
UA_NODEID_NUMERIC(ns[0], 2400),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2401_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2401)
);
}

/* RecycleCount - ns=0;i=2395 */

static UA_StatusCode function_namespace0_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
attr.displayName = UA_LOCALIZEDTEXT("", "RecycleCount");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2395),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "RecycleCount"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2395)
);
}

/* Running - ns=0;i=2402 */

static UA_StatusCode function_namespace0_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Running");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2402),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Running"),
UA_NODEID_NUMERIC(ns[0], 2307),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2402)
);
}

/* StateNumber - ns=0;i=2403 */

static UA_StatusCode function_namespace0_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2403_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2403_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2403_variant_DataContents);
*variablenode_ns_0_i_2403_variant_DataContents = (UA_UInt32) 13;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2403_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2403),
UA_NODEID_NUMERIC(ns[0], 2402),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2403_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2403)
);
}

/* AutoDelete - ns=0;i=2394 */

static UA_StatusCode function_namespace0_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "AutoDelete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2394),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "AutoDelete"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2394)
);
}

/* ReadyToHalted - ns=0;i=2424 */

static UA_StatusCode function_namespace0_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2424),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ReadyToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2424), UA_NODEID_NUMERIC(ns[0], 51), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2400), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2424)
);
}

/* TransitionNumber - ns=0;i=2425 */

static UA_StatusCode function_namespace0_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2425_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2425_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2425_variant_DataContents);
*variablenode_ns_0_i_2425_variant_DataContents = (UA_UInt32) 9;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2425_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2425),
UA_NODEID_NUMERIC(ns[0], 2424),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2425_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2425)
);
}

/* Suspend - ns=0;i=2427 */

static UA_StatusCode function_namespace0_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspend");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 2427),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Suspend"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2427)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Halted - ns=0;i=2406 */

static UA_StatusCode function_namespace0_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Halted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2406),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Halted"),
UA_NODEID_NUMERIC(ns[0], 2307),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2406), UA_NODEID_NUMERIC(ns[0], 52), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2424), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2406)
);
}

/* StateNumber - ns=0;i=2407 */

static UA_StatusCode function_namespace0_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2407_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2407_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2407_variant_DataContents);
*variablenode_ns_0_i_2407_variant_DataContents = (UA_UInt32) 11;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2407_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2407),
UA_NODEID_NUMERIC(ns[0], 2406),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2407_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2407)
);
}

/* Suspended - ns=0;i=2404 */

static UA_StatusCode function_namespace0_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Suspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2404),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Suspended"),
UA_NODEID_NUMERIC(ns[0], 2307),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2404)
);
}

/* StateNumber - ns=0;i=2405 */

static UA_StatusCode function_namespace0_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2405_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2405_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2405_variant_DataContents);
*variablenode_ns_0_i_2405_variant_DataContents = (UA_UInt32) 14;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2405_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2405),
UA_NODEID_NUMERIC(ns[0], 2404),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2405_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2405)
);
}

/* RunningToReady - ns=0;i=2414 */

static UA_StatusCode function_namespace0_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2414),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "RunningToReady"),
UA_NODEID_NUMERIC(ns[0], 2310),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2414), UA_NODEID_NUMERIC(ns[0], 51), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2402), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2414), UA_NODEID_NUMERIC(ns[0], 52), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2400), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2414)
);
}

/* TransitionNumber - ns=0;i=2415 */

static UA_StatusCode function_namespace0_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2415_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2415_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2415_variant_DataContents);
*variablenode_ns_0_i_2415_variant_DataContents = (UA_UInt32) 4;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2415_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2415),
UA_NODEID_NUMERIC(ns[0], 2414),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2415_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2415)
);
}

/* Reset - ns=0;i=2430 */

static UA_StatusCode function_namespace0_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 2430),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Reset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2430)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CurrentState - ns=0;i=3830 */

static UA_StatusCode function_namespace0_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3830),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3830)
);
}

/* Creatable - ns=0;i=2392 */

static UA_StatusCode function_namespace0_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "Creatable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2392),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Creatable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2392)
);
}

/* Resume - ns=0;i=2428 */

static UA_StatusCode function_namespace0_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 2428),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2428)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SuspendedToReady - ns=0;i=2422 */

static UA_StatusCode function_namespace0_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2422),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SuspendedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2422), UA_NODEID_NUMERIC(ns[0], 52), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2400), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2422), UA_NODEID_NUMERIC(ns[0], 51), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2404), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2422)
);
}

/* TransitionNumber - ns=0;i=2423 */

static UA_StatusCode function_namespace0_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2423_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2423_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2423_variant_DataContents);
*variablenode_ns_0_i_2423_variant_DataContents = (UA_UInt32) 8;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2423_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2423),
UA_NODEID_NUMERIC(ns[0], 2422),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2423_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2423)
);
}

/* RunningToHalted - ns=0;i=2412 */

static UA_StatusCode function_namespace0_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2412),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "RunningToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2412), UA_NODEID_NUMERIC(ns[0], 51), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2402), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2412), UA_NODEID_NUMERIC(ns[0], 52), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2406), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2412)
);
}

/* TransitionNumber - ns=0;i=2413 */

static UA_StatusCode function_namespace0_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2413_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2413_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2413_variant_DataContents);
*variablenode_ns_0_i_2413_variant_DataContents = (UA_UInt32) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2413_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2413),
UA_NODEID_NUMERIC(ns[0], 2412),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2413_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2413)
);
}

/* Deletable - ns=0;i=2393 */

static UA_StatusCode function_namespace0_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "Deletable");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2393),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Deletable"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2393)
);
}

/* ReadyToRunning - ns=0;i=2410 */

static UA_StatusCode function_namespace0_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ReadyToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2410),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ReadyToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2410), UA_NODEID_NUMERIC(ns[0], 52), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2402), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2410), UA_NODEID_NUMERIC(ns[0], 51), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2400), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2410), UA_NODEID_NUMERIC(ns[0], 53), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2426), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2410)
);
}

/* TransitionNumber - ns=0;i=2411 */

static UA_StatusCode function_namespace0_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2411_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2411_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2411_variant_DataContents);
*variablenode_ns_0_i_2411_variant_DataContents = (UA_UInt32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2411_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2411),
UA_NODEID_NUMERIC(ns[0], 2410),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2411_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2411)
);
}

/* SuspendedToRunning - ns=0;i=2418 */

static UA_StatusCode function_namespace0_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToRunning");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2418),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SuspendedToRunning"),
UA_NODEID_NUMERIC(ns[0], 2310),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2418), UA_NODEID_NUMERIC(ns[0], 53), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2428), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2418), UA_NODEID_NUMERIC(ns[0], 52), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2402), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2418), UA_NODEID_NUMERIC(ns[0], 51), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2404), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2418)
);
}

/* TransitionNumber - ns=0;i=2419 */

static UA_StatusCode function_namespace0_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2419_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2419_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2419_variant_DataContents);
*variablenode_ns_0_i_2419_variant_DataContents = (UA_UInt32) 6;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2419_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2419),
UA_NODEID_NUMERIC(ns[0], 2418),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2419_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2419)
);
}

/* RunningToSuspended - ns=0;i=2416 */

static UA_StatusCode function_namespace0_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RunningToSuspended");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2416),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "RunningToSuspended"),
UA_NODEID_NUMERIC(ns[0], 2310),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2416), UA_NODEID_NUMERIC(ns[0], 52), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2404), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2416), UA_NODEID_NUMERIC(ns[0], 53), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2427), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2416), UA_NODEID_NUMERIC(ns[0], 51), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2402), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2416)
);
}

/* TransitionNumber - ns=0;i=2417 */

static UA_StatusCode function_namespace0_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2417_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2417_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2417_variant_DataContents);
*variablenode_ns_0_i_2417_variant_DataContents = (UA_UInt32) 5;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2417_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2417),
UA_NODEID_NUMERIC(ns[0], 2416),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2417_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2417)
);
}

/* SuspendedToHalted - ns=0;i=2420 */

static UA_StatusCode function_namespace0_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SuspendedToHalted");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2420),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SuspendedToHalted"),
UA_NODEID_NUMERIC(ns[0], 2310),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2420), UA_NODEID_NUMERIC(ns[0], 51), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2404), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2420), UA_NODEID_NUMERIC(ns[0], 52), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2406), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2420)
);
}

/* TransitionNumber - ns=0;i=2421 */

static UA_StatusCode function_namespace0_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2421_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2421_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2421_variant_DataContents);
*variablenode_ns_0_i_2421_variant_DataContents = (UA_UInt32) 7;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2421_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2421),
UA_NODEID_NUMERIC(ns[0], 2420),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2421_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2421)
);
}

/* HaltedToReady - ns=0;i=2408 */

static UA_StatusCode function_namespace0_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HaltedToReady");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2408),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "HaltedToReady"),
UA_NODEID_NUMERIC(ns[0], 2310),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2408), UA_NODEID_NUMERIC(ns[0], 52), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2400), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2408), UA_NODEID_NUMERIC(ns[0], 51), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2406), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2408), UA_NODEID_NUMERIC(ns[0], 53), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2430), true);
return retVal;
}

static UA_StatusCode function_namespace0_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2408)
);
}

/* TransitionNumber - ns=0;i=2409 */

static UA_StatusCode function_namespace0_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_0_i_2409_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_0_i_2409_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_0_i_2409_variant_DataContents);
*variablenode_ns_0_i_2409_variant_DataContents = (UA_UInt32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_2409_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2409),
UA_NODEID_NUMERIC(ns[0], 2408),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_0_i_2409_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace0_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2409)
);
}

/* Halt - ns=0;i=2429 */

static UA_StatusCode function_namespace0_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Halt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 2429),
UA_NODEID_NUMERIC(ns[0], 2391),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Halt"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2429), UA_NODEID_NUMERIC(ns[0], 53), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2420), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2429), UA_NODEID_NUMERIC(ns[0], 53), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2412), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2429), UA_NODEID_NUMERIC(ns[0], 53), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2424), false);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2429)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* LastTransition - ns=0;i=2773 */

static UA_StatusCode function_namespace0_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "LastTransition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2773),
UA_NODEID_NUMERIC(ns[0], 2771),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "LastTransition"),
UA_NODEID_NUMERIC(ns[0], 2767),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2773)
);
}

/* Id - ns=0;i=3732 */

static UA_StatusCode function_namespace0_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3732),
UA_NODEID_NUMERIC(ns[0], 2773),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3732)
);
}

/* AvailableTransitions - ns=0;i=17636 */

static UA_StatusCode function_namespace0_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableTransitions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 17636),
UA_NODEID_NUMERIC(ns[0], 2771),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "AvailableTransitions"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17636)
);
}

/* AvailableStates - ns=0;i=17635 */

static UA_StatusCode function_namespace0_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "AvailableStates");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 17635),
UA_NODEID_NUMERIC(ns[0], 2771),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "AvailableStates"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 17635)
);
}

/* ServerDiagnosticsSummaryType - ns=0;i=2150 */

static UA_StatusCode function_namespace0_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 859);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummaryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2150),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummaryType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2150)
);
}

/* BuildInfoType - ns=0;i=3051 */

static UA_StatusCode function_namespace0_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfoType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 3051),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "BuildInfoType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3051)
);
}

/* BuildDate - ns=0;i=3057 */

static UA_StatusCode function_namespace0_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3057),
UA_NODEID_NUMERIC(ns[0], 3051),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3057)
);
}

/* ProductName - ns=0;i=3054 */

static UA_StatusCode function_namespace0_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3054),
UA_NODEID_NUMERIC(ns[0], 3051),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3054)
);
}

/* ProductUri - ns=0;i=3052 */

static UA_StatusCode function_namespace0_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3052),
UA_NODEID_NUMERIC(ns[0], 3051),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductUri"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3052)
);
}

/* BuildNumber - ns=0;i=3056 */

static UA_StatusCode function_namespace0_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3056),
UA_NODEID_NUMERIC(ns[0], 3051),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3056)
);
}

/* SoftwareVersion - ns=0;i=3055 */

static UA_StatusCode function_namespace0_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3055),
UA_NODEID_NUMERIC(ns[0], 3051),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SoftwareVersion"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3055)
);
}

/* ManufacturerName - ns=0;i=3053 */

static UA_StatusCode function_namespace0_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3053),
UA_NODEID_NUMERIC(ns[0], 3051),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ManufacturerName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3053)
);
}

/* ServerStatusType - ns=0;i=2138 */

static UA_StatusCode function_namespace0_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 862);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatusType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 2138),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerStatusType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2138)
);
}

/* BuildInfo - ns=0;i=2142 */

static UA_StatusCode function_namespace0_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2142),
UA_NODEID_NUMERIC(ns[0], 2138),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
UA_NODEID_NUMERIC(ns[0], 3051),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2142)
);
}

/* CurrentTime - ns=0;i=2140 */

static UA_StatusCode function_namespace0_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2140),
UA_NODEID_NUMERIC(ns[0], 2138),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2140)
);
}

/* StartTime - ns=0;i=2139 */

static UA_StatusCode function_namespace0_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2139),
UA_NODEID_NUMERIC(ns[0], 2138),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2139)
);
}

/* State - ns=0;i=2141 */

static UA_StatusCode function_namespace0_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 852);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2141),
UA_NODEID_NUMERIC(ns[0], 2138),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "State"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2141)
);
}

/* BaseEventType - ns=0;i=2041 */

static UA_StatusCode function_namespace0_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "BaseEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "BaseEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2041)
);
}

/* TransitionEventType - ns=0;i=2311 */

static UA_StatusCode function_namespace0_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2311),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "TransitionEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2311)
);
}

/* FromState - ns=0;i=2775 */

static UA_StatusCode function_namespace0_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "FromState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2775),
UA_NODEID_NUMERIC(ns[0], 2311),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "FromState"),
UA_NODEID_NUMERIC(ns[0], 2755),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2775)
);
}

/* Id - ns=0;i=3746 */

static UA_StatusCode function_namespace0_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3746),
UA_NODEID_NUMERIC(ns[0], 2775),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3746)
);
}

/* ToState - ns=0;i=2776 */

static UA_StatusCode function_namespace0_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ToState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2776),
UA_NODEID_NUMERIC(ns[0], 2311),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ToState"),
UA_NODEID_NUMERIC(ns[0], 2755),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2776)
);
}

/* Id - ns=0;i=3750 */

static UA_StatusCode function_namespace0_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3750),
UA_NODEID_NUMERIC(ns[0], 2776),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3750)
);
}

/* Transition - ns=0;i=2774 */

static UA_StatusCode function_namespace0_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "Transition");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2774),
UA_NODEID_NUMERIC(ns[0], 2311),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Transition"),
UA_NODEID_NUMERIC(ns[0], 2762),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2774)
);
}

/* Id - ns=0;i=3754 */

static UA_StatusCode function_namespace0_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3754),
UA_NODEID_NUMERIC(ns[0], 2774),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3754)
);
}

/* ProgramTransitionEventType - ns=0;i=2378 */

static UA_StatusCode function_namespace0_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramTransitionEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2378),
UA_NODEID_NUMERIC(ns[0], 2311),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ProgramTransitionEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2378), UA_NODEID_NUMERIC(ns[0], 54), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2422), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2378), UA_NODEID_NUMERIC(ns[0], 54), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2408), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2378), UA_NODEID_NUMERIC(ns[0], 54), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2420), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2378), UA_NODEID_NUMERIC(ns[0], 54), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2414), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2378), UA_NODEID_NUMERIC(ns[0], 54), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2410), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2378), UA_NODEID_NUMERIC(ns[0], 54), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2412), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2378), UA_NODEID_NUMERIC(ns[0], 54), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2418), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2378), UA_NODEID_NUMERIC(ns[0], 54), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2424), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 2378), UA_NODEID_NUMERIC(ns[0], 54), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2416), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2378)
);
}

/* IntermediateResult - ns=0;i=2379 */

static UA_StatusCode function_namespace0_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24);
attr.displayName = UA_LOCALIZEDTEXT("", "IntermediateResult");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2379),
UA_NODEID_NUMERIC(ns[0], 2378),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "IntermediateResult"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2379)
);
}

/* SourceNode - ns=0;i=2044 */

static UA_StatusCode function_namespace0_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceNode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2044),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "SourceNode"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2044)
);
}

/* Message - ns=0;i=2050 */

static UA_StatusCode function_namespace0_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "Message");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2050),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Message"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2050)
);
}

/* SourceName - ns=0;i=2045 */

static UA_StatusCode function_namespace0_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SourceName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2045),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "SourceName"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2045)
);
}

/* EventQueueOverflowEventType - ns=0;i=3035 */

static UA_StatusCode function_namespace0_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "EventQueueOverflowEventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 3035),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "EventQueueOverflowEventType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3035)
);
}

/* Severity - ns=0;i=2051 */

static UA_StatusCode function_namespace0_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
attr.displayName = UA_LOCALIZEDTEXT("", "Severity");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2051),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Severity"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2051)
);
}

/* ReceiveTime - ns=0;i=2047 */

static UA_StatusCode function_namespace0_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "ReceiveTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2047),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ReceiveTime"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2047)
);
}

/* EventId - ns=0;i=2042 */

static UA_StatusCode function_namespace0_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
attr.displayName = UA_LOCALIZEDTEXT("", "EventId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2042),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EventId"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2042)
);
}

/* Time - ns=0;i=2046 */

static UA_StatusCode function_namespace0_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "Time");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2046),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Time"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2046)
);
}

/* LocalTime - ns=0;i=3190 */

static UA_StatusCode function_namespace0_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 8912);
attr.displayName = UA_LOCALIZEDTEXT("", "LocalTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3190),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "LocalTime"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3190)
);
}

/* EventType - ns=0;i=2043 */

static UA_StatusCode function_namespace0_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17);
attr.displayName = UA_LOCALIZEDTEXT("", "EventType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2043),
UA_NODEID_NUMERIC(ns[0], 2041),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EventType"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2043)
);
}

/* NamespacesType - ns=0;i=11645 */

static UA_StatusCode function_namespace0_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacesType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 11645),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "NamespacesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11645)
);
}

/* NamespaceMetadataType - ns=0;i=11616 */

static UA_StatusCode function_namespace0_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceMetadataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 11616),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "NamespaceMetadataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11616)
);
}

/* OperationLimitsType - ns=0;i=11564 */

static UA_StatusCode function_namespace0_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimitsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 11564),
UA_NODEID_NUMERIC(ns[0], 61),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "OperationLimitsType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11564)
);
}

/* ServerRedundancyType - ns=0;i=2034 */

static UA_StatusCode function_namespace0_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancyType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2034),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerRedundancyType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2034)
);
}

/* RedundancySupport - ns=0;i=2035 */

static UA_StatusCode function_namespace0_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2035),
UA_NODEID_NUMERIC(ns[0], 2034),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2035)
);
}

/* VendorServerInfoType - ns=0;i=2033 */

static UA_StatusCode function_namespace0_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfoType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2033),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "VendorServerInfoType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2033)
);
}

/* ServerDiagnosticsType - ns=0;i=2020 */

static UA_StatusCode function_namespace0_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2020),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2020)
);
}

/* ServerCapabilitiesType - ns=0;i=2013 */

static UA_StatusCode function_namespace0_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilitiesType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2013),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerCapabilitiesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2013)
);
}

/* OperationLimits - ns=0;i=11551 */

static UA_StatusCode function_namespace0_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11551),
UA_NODEID_NUMERIC(ns[0], 2013),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OperationLimits"),
UA_NODEID_NUMERIC(ns[0], 11564),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11551)
);
}

/* ServerType - ns=0;i=2004 */

static UA_StatusCode function_namespace0_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 2004),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ServerType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2004)
);
}

/* ServerStatus - ns=0;i=2007 */

static UA_StatusCode function_namespace0_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 862);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatus");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2007),
UA_NODEID_NUMERIC(ns[0], 2004),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerStatus"),
UA_NODEID_NUMERIC(ns[0], 2138),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2007)
);
}

/* CurrentTime - ns=0;i=3075 */

static UA_StatusCode function_namespace0_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3075),
UA_NODEID_NUMERIC(ns[0], 2007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3075)
);
}

/* State - ns=0;i=3076 */

static UA_StatusCode function_namespace0_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 852);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3076),
UA_NODEID_NUMERIC(ns[0], 2007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "State"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3076)
);
}

/* StartTime - ns=0;i=3074 */

static UA_StatusCode function_namespace0_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3074),
UA_NODEID_NUMERIC(ns[0], 2007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3074)
);
}

/* BuildInfo - ns=0;i=3077 */

static UA_StatusCode function_namespace0_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3077),
UA_NODEID_NUMERIC(ns[0], 2007),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
UA_NODEID_NUMERIC(ns[0], 3051),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3077)
);
}

/* ProductName - ns=0;i=3080 */

static UA_StatusCode function_namespace0_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3080),
UA_NODEID_NUMERIC(ns[0], 3077),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3080)
);
}

/* ProductUri - ns=0;i=3078 */

static UA_StatusCode function_namespace0_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3078),
UA_NODEID_NUMERIC(ns[0], 3077),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductUri"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3078)
);
}

/* SoftwareVersion - ns=0;i=3081 */

static UA_StatusCode function_namespace0_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3081),
UA_NODEID_NUMERIC(ns[0], 3077),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SoftwareVersion"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3081)
);
}

/* BuildNumber - ns=0;i=3082 */

static UA_StatusCode function_namespace0_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3082),
UA_NODEID_NUMERIC(ns[0], 3077),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3082)
);
}

/* BuildDate - ns=0;i=3083 */

static UA_StatusCode function_namespace0_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3083),
UA_NODEID_NUMERIC(ns[0], 3077),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3083)
);
}

/* ManufacturerName - ns=0;i=3079 */

static UA_StatusCode function_namespace0_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3079),
UA_NODEID_NUMERIC(ns[0], 3077),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ManufacturerName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3079)
);
}

/* NamespaceArray - ns=0;i=2006 */

static UA_StatusCode function_namespace0_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2006),
UA_NODEID_NUMERIC(ns[0], 2004),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2006)
);
}

/* Server - ns=0;i=2253 */

static UA_StatusCode function_namespace0_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Server");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[0], "Server"),
UA_NODEID_NUMERIC(ns[0], 2004),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2253)
);
}

/* ServiceLevel - ns=0;i=2267 */

static UA_StatusCode function_namespace0_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
attr.displayName = UA_LOCALIZEDTEXT("", "ServiceLevel");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2267),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ServiceLevel"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2267)
);
}

/* Namespaces - ns=0;i=11715 */

static UA_StatusCode function_namespace0_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Namespaces");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11715),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "Namespaces"),
UA_NODEID_NUMERIC(ns[0], 11645),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11715)
);
}

/* ServerRedundancy - ns=0;i=2296 */

static UA_StatusCode function_namespace0_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerRedundancy");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2296),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerRedundancy"),
UA_NODEID_NUMERIC(ns[0], 2034),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2296)
);
}

/* RedundancySupport - ns=0;i=3709 */

static UA_StatusCode function_namespace0_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 851);
attr.displayName = UA_LOCALIZEDTEXT("", "RedundancySupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 3709),
UA_NODEID_NUMERIC(ns[0], 2296),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "RedundancySupport"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 3709)
);
}

/* ServerCapabilities - ns=0;i=2268 */

static UA_StatusCode function_namespace0_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerCapabilities");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerCapabilities"),
UA_NODEID_NUMERIC(ns[0], 2013),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2268)
);
}

/* OperationLimits - ns=0;i=11704 */

static UA_StatusCode function_namespace0_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OperationLimits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "OperationLimits"),
UA_NODEID_NUMERIC(ns[0], 11564),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11704)
);
}

/* MaxNodesPerNodeManagement - ns=0;i=11713 */

static UA_StatusCode function_namespace0_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerNodeManagement");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11713),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerNodeManagement"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11713)
);
}

/* MaxNodesPerTranslateBrowsePathsToNodeIds - ns=0;i=11712 */

static UA_StatusCode function_namespace0_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerTranslateBrowsePathsToNodeIds");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11712),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerTranslateBrowsePathsToNodeIds"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11712)
);
}

/* MaxNodesPerRead - ns=0;i=11705 */

static UA_StatusCode function_namespace0_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRead");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11705),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRead"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11705)
);
}

/* MaxNodesPerBrowse - ns=0;i=11710 */

static UA_StatusCode function_namespace0_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerBrowse");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11710),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerBrowse"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11710)
);
}

/* MaxNodesPerRegisterNodes - ns=0;i=11711 */

static UA_StatusCode function_namespace0_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerRegisterNodes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11711),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerRegisterNodes"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11711)
);
}

/* MaxNodesPerMethodCall - ns=0;i=11709 */

static UA_StatusCode function_namespace0_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerMethodCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11709),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerMethodCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11709)
);
}

/* MaxNodesPerWrite - ns=0;i=11707 */

static UA_StatusCode function_namespace0_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxNodesPerWrite");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11707),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxNodesPerWrite"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11707)
);
}

/* MaxMonitoredItemsPerCall - ns=0;i=11714 */

static UA_StatusCode function_namespace0_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxMonitoredItemsPerCall");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 11714),
UA_NODEID_NUMERIC(ns[0], 11704),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxMonitoredItemsPerCall"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11714)
);
}

/* MinSupportedSampleRate - ns=0;i=2272 */

static UA_StatusCode function_namespace0_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290);
attr.displayName = UA_LOCALIZEDTEXT("", "MinSupportedSampleRate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2272),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MinSupportedSampleRate"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2272)
);
}

/* LocaleIdArray - ns=0;i=2271 */

static UA_StatusCode function_namespace0_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295);
attr.displayName = UA_LOCALIZEDTEXT("", "LocaleIdArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2271),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "LocaleIdArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2271)
);
}

/* MaxQueryContinuationPoints - ns=0;i=2736 */

static UA_StatusCode function_namespace0_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxQueryContinuationPoints");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2736),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxQueryContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2736)
);
}

/* ServerProfileArray - ns=0;i=2269 */

static UA_StatusCode function_namespace0_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
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
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerProfileArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2269),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ServerProfileArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2269)
);
}

/* MaxBrowseContinuationPoints - ns=0;i=2735 */

static UA_StatusCode function_namespace0_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxBrowseContinuationPoints");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2735),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxBrowseContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2735)
);
}

/* MaxHistoryContinuationPoints - ns=0;i=2737 */

static UA_StatusCode function_namespace0_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 5);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxHistoryContinuationPoints");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2737),
UA_NODEID_NUMERIC(ns[0], 2268),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "MaxHistoryContinuationPoints"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2737)
);
}

/* ServerDiagnostics - ns=0;i=2274 */

static UA_StatusCode function_namespace0_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnostics");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2274),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnostics"),
UA_NODEID_NUMERIC(ns[0], 2020),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2274)
);
}

/* ServerDiagnosticsSummary - ns=0;i=2275 */

static UA_StatusCode function_namespace0_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 859);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerDiagnosticsSummary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2275),
UA_NODEID_NUMERIC(ns[0], 2274),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerDiagnosticsSummary"),
UA_NODEID_NUMERIC(ns[0], 2150),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2275)
);
}

/* EnabledFlag - ns=0;i=2294 */

static UA_StatusCode function_namespace0_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "EnabledFlag");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2294),
UA_NODEID_NUMERIC(ns[0], 2274),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "EnabledFlag"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2294)
);
}

/* NamespaceArray - ns=0;i=2255 */

static UA_StatusCode function_namespace0_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2255),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "NamespaceArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2255)
);
}

/* GetMonitoredItems - ns=0;i=11492 */

static UA_StatusCode function_namespace0_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetMonitoredItems");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[0], 11492),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "GetMonitoredItems"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_namespace0_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 11492)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ServerArray - ns=0;i=2254 */

static UA_StatusCode function_namespace0_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2254),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ServerArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2254)
);
}

/* VendorServerInfo - ns=0;i=2295 */

static UA_StatusCode function_namespace0_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VendorServerInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 2295),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "VendorServerInfo"),
UA_NODEID_NUMERIC(ns[0], 2033),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2295)
);
}

/* ServerStatus - ns=0;i=2256 */

static UA_StatusCode function_namespace0_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 862);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerStatus");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ServerStatus"),
UA_NODEID_NUMERIC(ns[0], 2138),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2256)
);
}

/* ShutdownReason - ns=0;i=2993 */

static UA_StatusCode function_namespace0_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21);
attr.displayName = UA_LOCALIZEDTEXT("", "ShutdownReason");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2993),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ShutdownReason"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2993)
);
}

/* BuildInfo - ns=0;i=2260 */

static UA_StatusCode function_namespace0_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 338);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildInfo");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildInfo"),
UA_NODEID_NUMERIC(ns[0], 3051),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2260)
);
}

/* ManufacturerName - ns=0;i=2263 */

static UA_StatusCode function_namespace0_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2263),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ManufacturerName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2263)
);
}

/* ProductName - ns=0;i=2261 */

static UA_StatusCode function_namespace0_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2261),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2261)
);
}

/* BuildNumber - ns=0;i=2265 */

static UA_StatusCode function_namespace0_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2265),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2265)
);
}

/* ProductUri - ns=0;i=2262 */

static UA_StatusCode function_namespace0_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2262),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "ProductUri"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2262)
);
}

/* SoftwareVersion - ns=0;i=2264 */

static UA_StatusCode function_namespace0_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2264),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SoftwareVersion"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2264)
);
}

/* BuildDate - ns=0;i=2266 */

static UA_StatusCode function_namespace0_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "BuildDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2266),
UA_NODEID_NUMERIC(ns[0], 2260),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "BuildDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2266)
);
}

/* SecondsTillShutdown - ns=0;i=2992 */

static UA_StatusCode function_namespace0_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
attr.displayName = UA_LOCALIZEDTEXT("", "SecondsTillShutdown");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2992),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "SecondsTillShutdown"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2992)
);
}

/* StartTime - ns=0;i=2257 */

static UA_StatusCode function_namespace0_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "StartTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2257),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "StartTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2257)
);
}

/* CurrentTime - ns=0;i=2258 */

static UA_StatusCode function_namespace0_generated_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2258),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "CurrentTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2258)
);
}

/* State - ns=0;i=2259 */

static UA_StatusCode function_namespace0_generated_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 852);
attr.displayName = UA_LOCALIZEDTEXT("", "State");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2259),
UA_NODEID_NUMERIC(ns[0], 2256),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[0], "State"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2259)
);
}

/* Auditing - ns=0;i=2994 */

static UA_StatusCode function_namespace0_generated_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
attr.displayName = UA_LOCALIZEDTEXT("", "Auditing");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2994),
UA_NODEID_NUMERIC(ns[0], 2253),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "Auditing"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2994)
);
}

/* ServerArray - ns=0;i=2005 */

static UA_StatusCode function_namespace0_generated_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 1000.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "ServerArray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 2005),
UA_NODEID_NUMERIC(ns[0], 2004),
UA_NODEID_NUMERIC(ns[0], 46),
UA_QUALIFIEDNAME(ns[0], "ServerArray"),
UA_NODEID_NUMERIC(ns[0], 68),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 2005)
);
}

/* ModellingRuleType - ns=0;i=77 */

static UA_StatusCode function_namespace0_generated_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ModellingRuleType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 77),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "ModellingRuleType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 77)
);
}

/* Optional - ns=0;i=80 */

static UA_StatusCode function_namespace0_generated_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Optional");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 80),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Optional"),
UA_NODEID_NUMERIC(ns[0], 77),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11551), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2758), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17635), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2770), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3190), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2759), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2766), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17636), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3850), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2765), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2773), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2757), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 80), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2764), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 80)
);
}

/* Mandatory - ns=0;i=78 */

static UA_StatusCode function_namespace0_generated_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Mandatory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 78),
UA_NODEID_NUMERIC(ns[0], 0),
UA_NODEID_NUMERIC(ns[0], 0),
UA_QUALIFIEDNAME(ns[0], "Mandatory"),
UA_NODEID_NUMERIC(ns[0], 77),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2142), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3750), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2394), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2379), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2417), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2035), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2395), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2046), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2045), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2423), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2421), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2413), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3830), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3052), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3078), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2419), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2411), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3082), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2425), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3055), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2044), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2042), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3720), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2050), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3081), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2407), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3057), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3054), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2401), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2763), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3056), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2369), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2005), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2772), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2761), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2756), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2141), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3053), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2769), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3079), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2774), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3083), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3080), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2393), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2405), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3076), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2140), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2415), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2006), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3074), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2139), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3732), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3754), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2043), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2007), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2776), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2768), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3835), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2775), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2051), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3746), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2047), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2403), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3728), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3724), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2409), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3077), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[0], 78), UA_NODEID_NUMERIC(ns[0], 37), UA_EXPANDEDNODEID_NUMERIC(ns[0], 3075), false);
return retVal;
}

static UA_StatusCode function_namespace0_generated_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 78)
);
}

/* DataTypeEncodingType - ns=0;i=76 */

static UA_StatusCode function_namespace0_generated_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeEncodingType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 76),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataTypeEncodingType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 76)
);
}

/* DataTypeSystemType - ns=0;i=75 */

static UA_StatusCode function_namespace0_generated_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeSystemType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[0], 75),
UA_NODEID_NUMERIC(ns[0], 58),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataTypeSystemType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 75)
);
}

/* XML Schema - ns=0;i=92 */

static UA_StatusCode function_namespace0_generated_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "XML Schema");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 92),
UA_NODEID_NUMERIC(ns[0], 90),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[0], "XML Schema"),
UA_NODEID_NUMERIC(ns[0], 75),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 92)
);
}

/* OPC Binary - ns=0;i=93 */

static UA_StatusCode function_namespace0_generated_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OPC Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[0], 93),
UA_NODEID_NUMERIC(ns[0], 90),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[0], "OPC Binary"),
UA_NODEID_NUMERIC(ns[0], 75),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 93)
);
}

/* DataTypeDictionaryType - ns=0;i=72 */

static UA_StatusCode function_namespace0_generated_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDictionaryType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 72),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataTypeDictionaryType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 72)
);
}

/* DataTypeDescriptionType - ns=0;i=69 */

static UA_StatusCode function_namespace0_generated_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
attr.displayName = UA_LOCALIZEDTEXT("", "DataTypeDescriptionType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[0], 69),
UA_NODEID_NUMERIC(ns[0], 63),
UA_NODEID_NUMERIC(ns[0], 45),
UA_QUALIFIEDNAME(ns[0], "DataTypeDescriptionType"),
UA_NODEID_NUMERIC(ns[0], 0),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace0_generated_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 69)
);
}

UA_StatusCode namespace0_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[1];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
bool dummy = (
!(retVal = function_namespace0_generated_0_begin(server, ns)) &&
!(retVal = function_namespace0_generated_1_begin(server, ns)) &&
!(retVal = function_namespace0_generated_2_begin(server, ns)) &&
!(retVal = function_namespace0_generated_3_begin(server, ns)) &&
!(retVal = function_namespace0_generated_4_begin(server, ns)) &&
!(retVal = function_namespace0_generated_5_begin(server, ns)) &&
!(retVal = function_namespace0_generated_6_begin(server, ns)) &&
!(retVal = function_namespace0_generated_7_begin(server, ns)) &&
!(retVal = function_namespace0_generated_8_begin(server, ns)) &&
!(retVal = function_namespace0_generated_9_begin(server, ns)) &&
!(retVal = function_namespace0_generated_10_begin(server, ns)) &&
!(retVal = function_namespace0_generated_11_begin(server, ns)) &&
!(retVal = function_namespace0_generated_12_begin(server, ns)) &&
!(retVal = function_namespace0_generated_13_begin(server, ns)) &&
!(retVal = function_namespace0_generated_14_begin(server, ns)) &&
!(retVal = function_namespace0_generated_15_begin(server, ns)) &&
!(retVal = function_namespace0_generated_16_begin(server, ns)) &&
!(retVal = function_namespace0_generated_17_begin(server, ns)) &&
!(retVal = function_namespace0_generated_18_begin(server, ns)) &&
!(retVal = function_namespace0_generated_19_begin(server, ns)) &&
!(retVal = function_namespace0_generated_20_begin(server, ns)) &&
!(retVal = function_namespace0_generated_21_begin(server, ns)) &&
!(retVal = function_namespace0_generated_22_begin(server, ns)) &&
!(retVal = function_namespace0_generated_23_begin(server, ns)) &&
!(retVal = function_namespace0_generated_24_begin(server, ns)) &&
!(retVal = function_namespace0_generated_25_begin(server, ns)) &&
!(retVal = function_namespace0_generated_26_begin(server, ns)) &&
!(retVal = function_namespace0_generated_27_begin(server, ns)) &&
!(retVal = function_namespace0_generated_28_begin(server, ns)) &&
!(retVal = function_namespace0_generated_29_begin(server, ns)) &&
!(retVal = function_namespace0_generated_30_begin(server, ns)) &&
!(retVal = function_namespace0_generated_31_begin(server, ns)) &&
!(retVal = function_namespace0_generated_32_begin(server, ns)) &&
!(retVal = function_namespace0_generated_33_begin(server, ns)) &&
!(retVal = function_namespace0_generated_34_begin(server, ns)) &&
!(retVal = function_namespace0_generated_35_begin(server, ns)) &&
!(retVal = function_namespace0_generated_36_begin(server, ns)) &&
!(retVal = function_namespace0_generated_37_begin(server, ns)) &&
!(retVal = function_namespace0_generated_38_begin(server, ns)) &&
!(retVal = function_namespace0_generated_39_begin(server, ns)) &&
!(retVal = function_namespace0_generated_40_begin(server, ns)) &&
!(retVal = function_namespace0_generated_41_begin(server, ns)) &&
!(retVal = function_namespace0_generated_42_begin(server, ns)) &&
!(retVal = function_namespace0_generated_43_begin(server, ns)) &&
!(retVal = function_namespace0_generated_44_begin(server, ns)) &&
!(retVal = function_namespace0_generated_45_begin(server, ns)) &&
!(retVal = function_namespace0_generated_46_begin(server, ns)) &&
!(retVal = function_namespace0_generated_47_begin(server, ns)) &&
!(retVal = function_namespace0_generated_48_begin(server, ns)) &&
!(retVal = function_namespace0_generated_49_begin(server, ns)) &&
!(retVal = function_namespace0_generated_50_begin(server, ns)) &&
!(retVal = function_namespace0_generated_51_begin(server, ns)) &&
!(retVal = function_namespace0_generated_52_begin(server, ns)) &&
!(retVal = function_namespace0_generated_53_begin(server, ns)) &&
!(retVal = function_namespace0_generated_54_begin(server, ns)) &&
!(retVal = function_namespace0_generated_55_begin(server, ns)) &&
!(retVal = function_namespace0_generated_56_begin(server, ns)) &&
!(retVal = function_namespace0_generated_57_begin(server, ns)) &&
!(retVal = function_namespace0_generated_58_begin(server, ns)) &&
!(retVal = function_namespace0_generated_59_begin(server, ns)) &&
!(retVal = function_namespace0_generated_60_begin(server, ns)) &&
!(retVal = function_namespace0_generated_61_begin(server, ns)) &&
!(retVal = function_namespace0_generated_62_begin(server, ns)) &&
!(retVal = function_namespace0_generated_63_begin(server, ns)) &&
!(retVal = function_namespace0_generated_64_begin(server, ns)) &&
!(retVal = function_namespace0_generated_65_begin(server, ns)) &&
!(retVal = function_namespace0_generated_66_begin(server, ns)) &&
!(retVal = function_namespace0_generated_67_begin(server, ns)) &&
!(retVal = function_namespace0_generated_68_begin(server, ns)) &&
!(retVal = function_namespace0_generated_69_begin(server, ns)) &&
!(retVal = function_namespace0_generated_70_begin(server, ns)) &&
!(retVal = function_namespace0_generated_71_begin(server, ns)) &&
!(retVal = function_namespace0_generated_72_begin(server, ns)) &&
!(retVal = function_namespace0_generated_73_begin(server, ns)) &&
!(retVal = function_namespace0_generated_74_begin(server, ns)) &&
!(retVal = function_namespace0_generated_75_begin(server, ns)) &&
!(retVal = function_namespace0_generated_76_begin(server, ns)) &&
!(retVal = function_namespace0_generated_77_begin(server, ns)) &&
!(retVal = function_namespace0_generated_78_begin(server, ns)) &&
!(retVal = function_namespace0_generated_79_begin(server, ns)) &&
!(retVal = function_namespace0_generated_80_begin(server, ns)) &&
!(retVal = function_namespace0_generated_81_begin(server, ns)) &&
!(retVal = function_namespace0_generated_82_begin(server, ns)) &&
!(retVal = function_namespace0_generated_83_begin(server, ns)) &&
!(retVal = function_namespace0_generated_84_begin(server, ns)) &&
!(retVal = function_namespace0_generated_85_begin(server, ns)) &&
!(retVal = function_namespace0_generated_86_begin(server, ns)) &&
!(retVal = function_namespace0_generated_87_begin(server, ns)) &&
!(retVal = function_namespace0_generated_88_begin(server, ns)) &&
!(retVal = function_namespace0_generated_89_begin(server, ns)) &&
!(retVal = function_namespace0_generated_90_begin(server, ns)) &&
!(retVal = function_namespace0_generated_91_begin(server, ns)) &&
!(retVal = function_namespace0_generated_92_begin(server, ns)) &&
!(retVal = function_namespace0_generated_93_begin(server, ns)) &&
!(retVal = function_namespace0_generated_94_begin(server, ns)) &&
!(retVal = function_namespace0_generated_95_begin(server, ns)) &&
!(retVal = function_namespace0_generated_96_begin(server, ns)) &&
!(retVal = function_namespace0_generated_97_begin(server, ns)) &&
!(retVal = function_namespace0_generated_98_begin(server, ns)) &&
!(retVal = function_namespace0_generated_99_begin(server, ns)) &&
!(retVal = function_namespace0_generated_100_begin(server, ns)) &&
!(retVal = function_namespace0_generated_101_begin(server, ns)) &&
!(retVal = function_namespace0_generated_102_begin(server, ns)) &&
!(retVal = function_namespace0_generated_103_begin(server, ns)) &&
!(retVal = function_namespace0_generated_104_begin(server, ns)) &&
!(retVal = function_namespace0_generated_105_begin(server, ns)) &&
!(retVal = function_namespace0_generated_106_begin(server, ns)) &&
!(retVal = function_namespace0_generated_107_begin(server, ns)) &&
!(retVal = function_namespace0_generated_108_begin(server, ns)) &&
!(retVal = function_namespace0_generated_109_begin(server, ns)) &&
!(retVal = function_namespace0_generated_110_begin(server, ns)) &&
!(retVal = function_namespace0_generated_111_begin(server, ns)) &&
!(retVal = function_namespace0_generated_112_begin(server, ns)) &&
!(retVal = function_namespace0_generated_113_begin(server, ns)) &&
!(retVal = function_namespace0_generated_114_begin(server, ns)) &&
!(retVal = function_namespace0_generated_115_begin(server, ns)) &&
!(retVal = function_namespace0_generated_116_begin(server, ns)) &&
!(retVal = function_namespace0_generated_117_begin(server, ns)) &&
!(retVal = function_namespace0_generated_118_begin(server, ns)) &&
!(retVal = function_namespace0_generated_119_begin(server, ns)) &&
!(retVal = function_namespace0_generated_120_begin(server, ns)) &&
!(retVal = function_namespace0_generated_121_begin(server, ns)) &&
!(retVal = function_namespace0_generated_122_begin(server, ns)) &&
!(retVal = function_namespace0_generated_123_begin(server, ns)) &&
!(retVal = function_namespace0_generated_124_begin(server, ns)) &&
!(retVal = function_namespace0_generated_125_begin(server, ns)) &&
!(retVal = function_namespace0_generated_126_begin(server, ns)) &&
!(retVal = function_namespace0_generated_127_begin(server, ns)) &&
!(retVal = function_namespace0_generated_128_begin(server, ns)) &&
!(retVal = function_namespace0_generated_129_begin(server, ns)) &&
!(retVal = function_namespace0_generated_130_begin(server, ns)) &&
!(retVal = function_namespace0_generated_131_begin(server, ns)) &&
!(retVal = function_namespace0_generated_132_begin(server, ns)) &&
!(retVal = function_namespace0_generated_133_begin(server, ns)) &&
!(retVal = function_namespace0_generated_134_begin(server, ns)) &&
!(retVal = function_namespace0_generated_135_begin(server, ns)) &&
!(retVal = function_namespace0_generated_136_begin(server, ns)) &&
!(retVal = function_namespace0_generated_137_begin(server, ns)) &&
!(retVal = function_namespace0_generated_138_begin(server, ns)) &&
!(retVal = function_namespace0_generated_139_begin(server, ns)) &&
!(retVal = function_namespace0_generated_140_begin(server, ns)) &&
!(retVal = function_namespace0_generated_141_begin(server, ns)) &&
!(retVal = function_namespace0_generated_142_begin(server, ns)) &&
!(retVal = function_namespace0_generated_143_begin(server, ns)) &&
!(retVal = function_namespace0_generated_144_begin(server, ns)) &&
!(retVal = function_namespace0_generated_145_begin(server, ns)) &&
!(retVal = function_namespace0_generated_146_begin(server, ns)) &&
!(retVal = function_namespace0_generated_147_begin(server, ns)) &&
!(retVal = function_namespace0_generated_148_begin(server, ns)) &&
!(retVal = function_namespace0_generated_149_begin(server, ns)) &&
!(retVal = function_namespace0_generated_150_begin(server, ns)) &&
!(retVal = function_namespace0_generated_151_begin(server, ns)) &&
!(retVal = function_namespace0_generated_152_begin(server, ns)) &&
!(retVal = function_namespace0_generated_153_begin(server, ns)) &&
!(retVal = function_namespace0_generated_154_begin(server, ns)) &&
!(retVal = function_namespace0_generated_155_begin(server, ns)) &&
!(retVal = function_namespace0_generated_156_begin(server, ns)) &&
!(retVal = function_namespace0_generated_157_begin(server, ns)) &&
!(retVal = function_namespace0_generated_158_begin(server, ns)) &&
!(retVal = function_namespace0_generated_159_begin(server, ns)) &&
!(retVal = function_namespace0_generated_160_begin(server, ns)) &&
!(retVal = function_namespace0_generated_161_begin(server, ns)) &&
!(retVal = function_namespace0_generated_162_begin(server, ns)) &&
!(retVal = function_namespace0_generated_163_begin(server, ns)) &&
!(retVal = function_namespace0_generated_164_begin(server, ns)) &&
!(retVal = function_namespace0_generated_165_begin(server, ns)) &&
!(retVal = function_namespace0_generated_166_begin(server, ns)) &&
!(retVal = function_namespace0_generated_167_begin(server, ns)) &&
!(retVal = function_namespace0_generated_168_begin(server, ns)) &&
!(retVal = function_namespace0_generated_169_begin(server, ns)) &&
!(retVal = function_namespace0_generated_170_begin(server, ns)) &&
!(retVal = function_namespace0_generated_171_begin(server, ns)) &&
!(retVal = function_namespace0_generated_172_begin(server, ns)) &&
!(retVal = function_namespace0_generated_173_begin(server, ns)) &&
!(retVal = function_namespace0_generated_174_begin(server, ns)) &&
!(retVal = function_namespace0_generated_175_begin(server, ns)) &&
!(retVal = function_namespace0_generated_176_begin(server, ns)) &&
!(retVal = function_namespace0_generated_177_begin(server, ns)) &&
!(retVal = function_namespace0_generated_178_begin(server, ns)) &&
!(retVal = function_namespace0_generated_179_begin(server, ns)) &&
!(retVal = function_namespace0_generated_180_begin(server, ns)) &&
!(retVal = function_namespace0_generated_181_begin(server, ns)) &&
!(retVal = function_namespace0_generated_182_begin(server, ns)) &&
!(retVal = function_namespace0_generated_183_begin(server, ns)) &&
!(retVal = function_namespace0_generated_184_begin(server, ns)) &&
!(retVal = function_namespace0_generated_185_begin(server, ns)) &&
!(retVal = function_namespace0_generated_186_begin(server, ns)) &&
!(retVal = function_namespace0_generated_187_begin(server, ns)) &&
!(retVal = function_namespace0_generated_188_begin(server, ns)) &&
!(retVal = function_namespace0_generated_189_begin(server, ns)) &&
!(retVal = function_namespace0_generated_190_begin(server, ns)) &&
!(retVal = function_namespace0_generated_191_begin(server, ns)) &&
!(retVal = function_namespace0_generated_192_begin(server, ns)) &&
!(retVal = function_namespace0_generated_193_begin(server, ns)) &&
!(retVal = function_namespace0_generated_194_begin(server, ns)) &&
!(retVal = function_namespace0_generated_195_begin(server, ns)) &&
!(retVal = function_namespace0_generated_196_begin(server, ns)) &&
!(retVal = function_namespace0_generated_197_begin(server, ns)) &&
!(retVal = function_namespace0_generated_198_begin(server, ns)) &&
!(retVal = function_namespace0_generated_199_begin(server, ns)) &&
!(retVal = function_namespace0_generated_200_begin(server, ns)) &&
!(retVal = function_namespace0_generated_201_begin(server, ns)) &&
!(retVal = function_namespace0_generated_202_begin(server, ns)) &&
!(retVal = function_namespace0_generated_203_begin(server, ns)) &&
!(retVal = function_namespace0_generated_204_begin(server, ns)) &&
!(retVal = function_namespace0_generated_205_begin(server, ns)) &&
!(retVal = function_namespace0_generated_206_begin(server, ns)) &&
!(retVal = function_namespace0_generated_207_begin(server, ns)) &&
!(retVal = function_namespace0_generated_208_begin(server, ns)) &&
!(retVal = function_namespace0_generated_209_begin(server, ns)) &&
!(retVal = function_namespace0_generated_210_begin(server, ns)) &&
!(retVal = function_namespace0_generated_211_begin(server, ns)) &&
!(retVal = function_namespace0_generated_212_begin(server, ns)) &&
!(retVal = function_namespace0_generated_213_begin(server, ns)) &&
!(retVal = function_namespace0_generated_214_begin(server, ns)) &&
!(retVal = function_namespace0_generated_215_begin(server, ns)) &&
!(retVal = function_namespace0_generated_216_begin(server, ns)) &&
!(retVal = function_namespace0_generated_217_begin(server, ns)) &&
!(retVal = function_namespace0_generated_218_begin(server, ns)) &&
!(retVal = function_namespace0_generated_219_begin(server, ns)) &&
!(retVal = function_namespace0_generated_220_begin(server, ns)) &&
!(retVal = function_namespace0_generated_221_begin(server, ns)) &&
!(retVal = function_namespace0_generated_222_begin(server, ns)) &&
!(retVal = function_namespace0_generated_223_begin(server, ns)) &&
!(retVal = function_namespace0_generated_224_begin(server, ns)) &&
!(retVal = function_namespace0_generated_225_begin(server, ns)) &&
!(retVal = function_namespace0_generated_226_begin(server, ns)) &&
!(retVal = function_namespace0_generated_227_begin(server, ns)) &&
!(retVal = function_namespace0_generated_228_begin(server, ns)) &&
!(retVal = function_namespace0_generated_229_begin(server, ns)) &&
!(retVal = function_namespace0_generated_230_begin(server, ns)) &&
!(retVal = function_namespace0_generated_231_begin(server, ns)) &&
!(retVal = function_namespace0_generated_232_begin(server, ns)) &&
!(retVal = function_namespace0_generated_233_begin(server, ns)) &&
!(retVal = function_namespace0_generated_233_finish(server, ns)) &&
!(retVal = function_namespace0_generated_232_finish(server, ns)) &&
!(retVal = function_namespace0_generated_231_finish(server, ns)) &&
!(retVal = function_namespace0_generated_230_finish(server, ns)) &&
!(retVal = function_namespace0_generated_229_finish(server, ns)) &&
!(retVal = function_namespace0_generated_228_finish(server, ns)) &&
!(retVal = function_namespace0_generated_227_finish(server, ns)) &&
!(retVal = function_namespace0_generated_226_finish(server, ns)) &&
!(retVal = function_namespace0_generated_225_finish(server, ns)) &&
!(retVal = function_namespace0_generated_224_finish(server, ns)) &&
!(retVal = function_namespace0_generated_223_finish(server, ns)) &&
!(retVal = function_namespace0_generated_222_finish(server, ns)) &&
!(retVal = function_namespace0_generated_221_finish(server, ns)) &&
!(retVal = function_namespace0_generated_220_finish(server, ns)) &&
!(retVal = function_namespace0_generated_219_finish(server, ns)) &&
!(retVal = function_namespace0_generated_218_finish(server, ns)) &&
!(retVal = function_namespace0_generated_217_finish(server, ns)) &&
!(retVal = function_namespace0_generated_216_finish(server, ns)) &&
!(retVal = function_namespace0_generated_215_finish(server, ns)) &&
!(retVal = function_namespace0_generated_214_finish(server, ns)) &&
!(retVal = function_namespace0_generated_213_finish(server, ns)) &&
!(retVal = function_namespace0_generated_212_finish(server, ns)) &&
!(retVal = function_namespace0_generated_211_finish(server, ns)) &&
!(retVal = function_namespace0_generated_210_finish(server, ns)) &&
!(retVal = function_namespace0_generated_209_finish(server, ns)) &&
!(retVal = function_namespace0_generated_208_finish(server, ns)) &&
!(retVal = function_namespace0_generated_207_finish(server, ns)) &&
!(retVal = function_namespace0_generated_206_finish(server, ns)) &&
!(retVal = function_namespace0_generated_205_finish(server, ns)) &&
!(retVal = function_namespace0_generated_204_finish(server, ns)) &&
!(retVal = function_namespace0_generated_203_finish(server, ns)) &&
!(retVal = function_namespace0_generated_202_finish(server, ns)) &&
!(retVal = function_namespace0_generated_201_finish(server, ns)) &&
!(retVal = function_namespace0_generated_200_finish(server, ns)) &&
!(retVal = function_namespace0_generated_199_finish(server, ns)) &&
!(retVal = function_namespace0_generated_198_finish(server, ns)) &&
!(retVal = function_namespace0_generated_197_finish(server, ns)) &&
!(retVal = function_namespace0_generated_196_finish(server, ns)) &&
!(retVal = function_namespace0_generated_195_finish(server, ns)) &&
!(retVal = function_namespace0_generated_194_finish(server, ns)) &&
!(retVal = function_namespace0_generated_193_finish(server, ns)) &&
!(retVal = function_namespace0_generated_192_finish(server, ns)) &&
!(retVal = function_namespace0_generated_191_finish(server, ns)) &&
!(retVal = function_namespace0_generated_190_finish(server, ns)) &&
!(retVal = function_namespace0_generated_189_finish(server, ns)) &&
!(retVal = function_namespace0_generated_188_finish(server, ns)) &&
!(retVal = function_namespace0_generated_187_finish(server, ns)) &&
!(retVal = function_namespace0_generated_186_finish(server, ns)) &&
!(retVal = function_namespace0_generated_185_finish(server, ns)) &&
!(retVal = function_namespace0_generated_184_finish(server, ns)) &&
!(retVal = function_namespace0_generated_183_finish(server, ns)) &&
!(retVal = function_namespace0_generated_182_finish(server, ns)) &&
!(retVal = function_namespace0_generated_181_finish(server, ns)) &&
!(retVal = function_namespace0_generated_180_finish(server, ns)) &&
!(retVal = function_namespace0_generated_179_finish(server, ns)) &&
!(retVal = function_namespace0_generated_178_finish(server, ns)) &&
!(retVal = function_namespace0_generated_177_finish(server, ns)) &&
!(retVal = function_namespace0_generated_176_finish(server, ns)) &&
!(retVal = function_namespace0_generated_175_finish(server, ns)) &&
!(retVal = function_namespace0_generated_174_finish(server, ns)) &&
!(retVal = function_namespace0_generated_173_finish(server, ns)) &&
!(retVal = function_namespace0_generated_172_finish(server, ns)) &&
!(retVal = function_namespace0_generated_171_finish(server, ns)) &&
!(retVal = function_namespace0_generated_170_finish(server, ns)) &&
!(retVal = function_namespace0_generated_169_finish(server, ns)) &&
!(retVal = function_namespace0_generated_168_finish(server, ns)) &&
!(retVal = function_namespace0_generated_167_finish(server, ns)) &&
!(retVal = function_namespace0_generated_166_finish(server, ns)) &&
!(retVal = function_namespace0_generated_165_finish(server, ns)) &&
!(retVal = function_namespace0_generated_164_finish(server, ns)) &&
!(retVal = function_namespace0_generated_163_finish(server, ns)) &&
!(retVal = function_namespace0_generated_162_finish(server, ns)) &&
!(retVal = function_namespace0_generated_161_finish(server, ns)) &&
!(retVal = function_namespace0_generated_160_finish(server, ns)) &&
!(retVal = function_namespace0_generated_159_finish(server, ns)) &&
!(retVal = function_namespace0_generated_158_finish(server, ns)) &&
!(retVal = function_namespace0_generated_157_finish(server, ns)) &&
!(retVal = function_namespace0_generated_156_finish(server, ns)) &&
!(retVal = function_namespace0_generated_155_finish(server, ns)) &&
!(retVal = function_namespace0_generated_154_finish(server, ns)) &&
!(retVal = function_namespace0_generated_153_finish(server, ns)) &&
!(retVal = function_namespace0_generated_152_finish(server, ns)) &&
!(retVal = function_namespace0_generated_151_finish(server, ns)) &&
!(retVal = function_namespace0_generated_150_finish(server, ns)) &&
!(retVal = function_namespace0_generated_149_finish(server, ns)) &&
!(retVal = function_namespace0_generated_148_finish(server, ns)) &&
!(retVal = function_namespace0_generated_147_finish(server, ns)) &&
!(retVal = function_namespace0_generated_146_finish(server, ns)) &&
!(retVal = function_namespace0_generated_145_finish(server, ns)) &&
!(retVal = function_namespace0_generated_144_finish(server, ns)) &&
!(retVal = function_namespace0_generated_143_finish(server, ns)) &&
!(retVal = function_namespace0_generated_142_finish(server, ns)) &&
!(retVal = function_namespace0_generated_141_finish(server, ns)) &&
!(retVal = function_namespace0_generated_140_finish(server, ns)) &&
!(retVal = function_namespace0_generated_139_finish(server, ns)) &&
!(retVal = function_namespace0_generated_138_finish(server, ns)) &&
!(retVal = function_namespace0_generated_137_finish(server, ns)) &&
!(retVal = function_namespace0_generated_136_finish(server, ns)) &&
!(retVal = function_namespace0_generated_135_finish(server, ns)) &&
!(retVal = function_namespace0_generated_134_finish(server, ns)) &&
!(retVal = function_namespace0_generated_133_finish(server, ns)) &&
!(retVal = function_namespace0_generated_132_finish(server, ns)) &&
!(retVal = function_namespace0_generated_131_finish(server, ns)) &&
!(retVal = function_namespace0_generated_130_finish(server, ns)) &&
!(retVal = function_namespace0_generated_129_finish(server, ns)) &&
!(retVal = function_namespace0_generated_128_finish(server, ns)) &&
!(retVal = function_namespace0_generated_127_finish(server, ns)) &&
!(retVal = function_namespace0_generated_126_finish(server, ns)) &&
!(retVal = function_namespace0_generated_125_finish(server, ns)) &&
!(retVal = function_namespace0_generated_124_finish(server, ns)) &&
!(retVal = function_namespace0_generated_123_finish(server, ns)) &&
!(retVal = function_namespace0_generated_122_finish(server, ns)) &&
!(retVal = function_namespace0_generated_121_finish(server, ns)) &&
!(retVal = function_namespace0_generated_120_finish(server, ns)) &&
!(retVal = function_namespace0_generated_119_finish(server, ns)) &&
!(retVal = function_namespace0_generated_118_finish(server, ns)) &&
!(retVal = function_namespace0_generated_117_finish(server, ns)) &&
!(retVal = function_namespace0_generated_116_finish(server, ns)) &&
!(retVal = function_namespace0_generated_115_finish(server, ns)) &&
!(retVal = function_namespace0_generated_114_finish(server, ns)) &&
!(retVal = function_namespace0_generated_113_finish(server, ns)) &&
!(retVal = function_namespace0_generated_112_finish(server, ns)) &&
!(retVal = function_namespace0_generated_111_finish(server, ns)) &&
!(retVal = function_namespace0_generated_110_finish(server, ns)) &&
!(retVal = function_namespace0_generated_109_finish(server, ns)) &&
!(retVal = function_namespace0_generated_108_finish(server, ns)) &&
!(retVal = function_namespace0_generated_107_finish(server, ns)) &&
!(retVal = function_namespace0_generated_106_finish(server, ns)) &&
!(retVal = function_namespace0_generated_105_finish(server, ns)) &&
!(retVal = function_namespace0_generated_104_finish(server, ns)) &&
!(retVal = function_namespace0_generated_103_finish(server, ns)) &&
!(retVal = function_namespace0_generated_102_finish(server, ns)) &&
!(retVal = function_namespace0_generated_101_finish(server, ns)) &&
!(retVal = function_namespace0_generated_100_finish(server, ns)) &&
!(retVal = function_namespace0_generated_99_finish(server, ns)) &&
!(retVal = function_namespace0_generated_98_finish(server, ns)) &&
!(retVal = function_namespace0_generated_97_finish(server, ns)) &&
!(retVal = function_namespace0_generated_96_finish(server, ns)) &&
!(retVal = function_namespace0_generated_95_finish(server, ns)) &&
!(retVal = function_namespace0_generated_94_finish(server, ns)) &&
!(retVal = function_namespace0_generated_93_finish(server, ns)) &&
!(retVal = function_namespace0_generated_92_finish(server, ns)) &&
!(retVal = function_namespace0_generated_91_finish(server, ns)) &&
!(retVal = function_namespace0_generated_90_finish(server, ns)) &&
!(retVal = function_namespace0_generated_89_finish(server, ns)) &&
!(retVal = function_namespace0_generated_88_finish(server, ns)) &&
!(retVal = function_namespace0_generated_87_finish(server, ns)) &&
!(retVal = function_namespace0_generated_86_finish(server, ns)) &&
!(retVal = function_namespace0_generated_85_finish(server, ns)) &&
!(retVal = function_namespace0_generated_84_finish(server, ns)) &&
!(retVal = function_namespace0_generated_83_finish(server, ns)) &&
!(retVal = function_namespace0_generated_82_finish(server, ns)) &&
!(retVal = function_namespace0_generated_81_finish(server, ns)) &&
!(retVal = function_namespace0_generated_80_finish(server, ns)) &&
!(retVal = function_namespace0_generated_79_finish(server, ns)) &&
!(retVal = function_namespace0_generated_78_finish(server, ns)) &&
!(retVal = function_namespace0_generated_77_finish(server, ns)) &&
!(retVal = function_namespace0_generated_76_finish(server, ns)) &&
!(retVal = function_namespace0_generated_75_finish(server, ns)) &&
!(retVal = function_namespace0_generated_74_finish(server, ns)) &&
!(retVal = function_namespace0_generated_73_finish(server, ns)) &&
!(retVal = function_namespace0_generated_72_finish(server, ns)) &&
!(retVal = function_namespace0_generated_71_finish(server, ns)) &&
!(retVal = function_namespace0_generated_70_finish(server, ns)) &&
!(retVal = function_namespace0_generated_69_finish(server, ns)) &&
!(retVal = function_namespace0_generated_68_finish(server, ns)) &&
!(retVal = function_namespace0_generated_67_finish(server, ns)) &&
!(retVal = function_namespace0_generated_66_finish(server, ns)) &&
!(retVal = function_namespace0_generated_65_finish(server, ns)) &&
!(retVal = function_namespace0_generated_64_finish(server, ns)) &&
!(retVal = function_namespace0_generated_63_finish(server, ns)) &&
!(retVal = function_namespace0_generated_62_finish(server, ns)) &&
!(retVal = function_namespace0_generated_61_finish(server, ns)) &&
!(retVal = function_namespace0_generated_60_finish(server, ns)) &&
!(retVal = function_namespace0_generated_59_finish(server, ns)) &&
!(retVal = function_namespace0_generated_58_finish(server, ns)) &&
!(retVal = function_namespace0_generated_57_finish(server, ns)) &&
!(retVal = function_namespace0_generated_56_finish(server, ns)) &&
!(retVal = function_namespace0_generated_55_finish(server, ns)) &&
!(retVal = function_namespace0_generated_54_finish(server, ns)) &&
!(retVal = function_namespace0_generated_53_finish(server, ns)) &&
!(retVal = function_namespace0_generated_52_finish(server, ns)) &&
!(retVal = function_namespace0_generated_51_finish(server, ns)) &&
!(retVal = function_namespace0_generated_50_finish(server, ns)) &&
!(retVal = function_namespace0_generated_49_finish(server, ns)) &&
!(retVal = function_namespace0_generated_48_finish(server, ns)) &&
!(retVal = function_namespace0_generated_47_finish(server, ns)) &&
!(retVal = function_namespace0_generated_46_finish(server, ns)) &&
!(retVal = function_namespace0_generated_45_finish(server, ns)) &&
!(retVal = function_namespace0_generated_44_finish(server, ns)) &&
!(retVal = function_namespace0_generated_43_finish(server, ns)) &&
!(retVal = function_namespace0_generated_42_finish(server, ns)) &&
!(retVal = function_namespace0_generated_41_finish(server, ns)) &&
!(retVal = function_namespace0_generated_40_finish(server, ns)) &&
!(retVal = function_namespace0_generated_39_finish(server, ns)) &&
!(retVal = function_namespace0_generated_38_finish(server, ns)) &&
!(retVal = function_namespace0_generated_37_finish(server, ns)) &&
!(retVal = function_namespace0_generated_36_finish(server, ns)) &&
!(retVal = function_namespace0_generated_35_finish(server, ns)) &&
!(retVal = function_namespace0_generated_34_finish(server, ns)) &&
!(retVal = function_namespace0_generated_33_finish(server, ns)) &&
!(retVal = function_namespace0_generated_32_finish(server, ns)) &&
!(retVal = function_namespace0_generated_31_finish(server, ns)) &&
!(retVal = function_namespace0_generated_30_finish(server, ns)) &&
!(retVal = function_namespace0_generated_29_finish(server, ns)) &&
!(retVal = function_namespace0_generated_28_finish(server, ns)) &&
!(retVal = function_namespace0_generated_27_finish(server, ns)) &&
!(retVal = function_namespace0_generated_26_finish(server, ns)) &&
!(retVal = function_namespace0_generated_25_finish(server, ns)) &&
!(retVal = function_namespace0_generated_24_finish(server, ns)) &&
!(retVal = function_namespace0_generated_23_finish(server, ns)) &&
!(retVal = function_namespace0_generated_22_finish(server, ns)) &&
!(retVal = function_namespace0_generated_21_finish(server, ns)) &&
!(retVal = function_namespace0_generated_20_finish(server, ns)) &&
!(retVal = function_namespace0_generated_19_finish(server, ns)) &&
!(retVal = function_namespace0_generated_18_finish(server, ns)) &&
!(retVal = function_namespace0_generated_17_finish(server, ns)) &&
!(retVal = function_namespace0_generated_16_finish(server, ns)) &&
!(retVal = function_namespace0_generated_15_finish(server, ns)) &&
!(retVal = function_namespace0_generated_14_finish(server, ns)) &&
!(retVal = function_namespace0_generated_13_finish(server, ns)) &&
!(retVal = function_namespace0_generated_12_finish(server, ns)) &&
!(retVal = function_namespace0_generated_11_finish(server, ns)) &&
!(retVal = function_namespace0_generated_10_finish(server, ns)) &&
!(retVal = function_namespace0_generated_9_finish(server, ns)) &&
!(retVal = function_namespace0_generated_8_finish(server, ns)) &&
!(retVal = function_namespace0_generated_7_finish(server, ns)) &&
!(retVal = function_namespace0_generated_6_finish(server, ns)) &&
!(retVal = function_namespace0_generated_5_finish(server, ns)) &&
!(retVal = function_namespace0_generated_4_finish(server, ns)) &&
!(retVal = function_namespace0_generated_3_finish(server, ns)) &&
!(retVal = function_namespace0_generated_2_finish(server, ns)) &&
!(retVal = function_namespace0_generated_1_finish(server, ns)) &&
!(retVal = function_namespace0_generated_0_finish(server, ns)) 
); (void)(dummy);
return retVal;
}

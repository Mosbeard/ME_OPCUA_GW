/* Generated from Opc.Ua.Di.Types.bsd with script ./generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-02-12 08:14:47 */

#include "TYPES_DI_generated.h"

/* DeviceHealthEnumeration */
#define DeviceHealthEnumeration_members NULL

/* FetchResultDataType */
#define FetchResultDataType_members NULL

/* TransferResultErrorDataType */
static UA_DataTypeMember TransferResultErrorDataType_members[2] = {
{
    UA_TYPENAME("Status") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Diagnostics") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_TransferResultErrorDataType, diagnostics) - offsetof(UA_TransferResultErrorDataType, status) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* ParameterResultDataType */
static UA_DataTypeMember ParameterResultDataType_members[3] = {
{
    UA_TYPENAME("NodePath") /* .memberName */
    UA_TYPES_QUALIFIEDNAME, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    true /* .isArray */
},
{
    UA_TYPENAME("StatusCode") /* .memberName */
    UA_TYPES_STATUSCODE, /* .memberTypeIndex */
    offsetof(UA_ParameterResultDataType, statusCode) - offsetof(UA_ParameterResultDataType, nodePath) - sizeof(void*), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Diagnostics") /* .memberName */
    UA_TYPES_DIAGNOSTICINFO, /* .memberTypeIndex */
    offsetof(UA_ParameterResultDataType, diagnostics) - offsetof(UA_ParameterResultDataType, statusCode) - sizeof(UA_StatusCode), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* TransferResultDataDataType */
static UA_DataTypeMember TransferResultDataDataType_members[3] = {
{
    UA_TYPENAME("SequenceNumber") /* .memberName */
    UA_TYPES_INT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("EndOfResults") /* .memberName */
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_TransferResultDataDataType, endOfResults) - offsetof(UA_TransferResultDataDataType, sequenceNumber) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ParameterDefs") /* .memberName */
    UA_TYPES_DI_PARAMETERRESULTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_TransferResultDataDataType, parameterDefsSize) - offsetof(UA_TransferResultDataDataType, endOfResults) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true /* .isArray */
},};
const UA_DataType UA_TYPES_DI[UA_TYPES_DI_COUNT] = {
/* DeviceHealthEnumeration */
{
    UA_TYPENAME("DeviceHealthEnumeration") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {6244}}, /* .typeId */
    sizeof(UA_DeviceHealthEnumeration), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    DeviceHealthEnumeration_members /* .members */
},
/* FetchResultDataType */
{
    UA_TYPENAME("FetchResultDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {6522}}, /* .typeId */
    sizeof(UA_FetchResultDataType), /* .memSize */
    UA_TYPES_DI_FETCHRESULTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    true, /* .overlayable */
    0, /* .membersSize */
    6551, /* .binaryEncodingId */
    FetchResultDataType_members /* .members */
},
/* TransferResultErrorDataType */
{
    UA_TYPENAME("TransferResultErrorDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {15888}}, /* .typeId */
    sizeof(UA_TransferResultErrorDataType), /* .memSize */
    UA_TYPES_DI_TRANSFERRESULTERRORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    15891, /* .binaryEncodingId */
    TransferResultErrorDataType_members /* .members */
},
/* ParameterResultDataType */
{
    UA_TYPENAME("ParameterResultDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {6525}}, /* .typeId */
    sizeof(UA_ParameterResultDataType), /* .memSize */
    UA_TYPES_DI_PARAMETERRESULTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    6554, /* .binaryEncodingId */
    ParameterResultDataType_members /* .members */
},
/* TransferResultDataDataType */
{
    UA_TYPENAME("TransferResultDataDataType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {15889}}, /* .typeId */
    sizeof(UA_TransferResultDataDataType), /* .memSize */
    UA_TYPES_DI_TRANSFERRESULTDATADATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    15892, /* .binaryEncodingId */
    TransferResultDataDataType_members /* .members */
},
};


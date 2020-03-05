/* Generated from TIG4WeldingMachineLight.bsd with script ..\tools\generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-03-04 10:58:40 */

#include "types_tig4_generated.h"

/* JobData */
static UA_DataTypeMember JobData_members[2] = {
{
    UA_TYPENAME("Number") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RawData") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_JobData, rawData) - offsetof(UA_JobData, number) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};

/* Tig4ErrorCode */
#define Tig4ErrorCode_members NULL
const UA_DataType UA_TYPES_TIG4[UA_TYPES_TIG4_COUNT] = {
/* JobData */
{
    UA_TYPENAME("JobData") /* .typeName */
    {1, UA_NODEIDTYPE_NUMERIC, {3002}}, /* .typeId */
    sizeof(UA_JobData), /* .memSize */
    UA_TYPES_TIG4_JOBDATA, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    5001, /* .binaryEncodingId */
    JobData_members /* .members */
},
/* Tig4ErrorCode */
{
    UA_TYPENAME("Tig4ErrorCode") /* .typeName */
    {1, UA_NODEIDTYPE_NUMERIC, {3003}}, /* .typeId */
    sizeof(UA_Tig4ErrorCode), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    0, /* .binaryEncodingId */
    Tig4ErrorCode_members /* .members */
},
};


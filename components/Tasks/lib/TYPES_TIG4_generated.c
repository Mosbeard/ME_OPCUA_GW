/* Generated from TIG4WeldingMachine.bsd with script ./generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-02-12 08:16:44 */

#include "TYPES_TIG4_generated.h"

/* JobDescriptor */
static UA_DataTypeMember JobDescriptor_members[7] = {
{
    UA_TYPENAME("Number") /* .memberName */
    UA_TYPES_INT16, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Name") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_JobDescriptor, name) - offsetof(UA_JobDescriptor, number) - sizeof(UA_Int16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("RawData") /* .memberName */
    UA_TYPES_BYTESTRING, /* .memberTypeIndex */
    offsetof(UA_JobDescriptor, rawData) - offsetof(UA_JobDescriptor, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("Process") /* .memberName */
    UA_TYPES_UINT16, /* .memberTypeIndex */
    offsetof(UA_JobDescriptor, process) - offsetof(UA_JobDescriptor, rawData) - sizeof(UA_ByteString), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("ShieldingGas") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_JobDescriptor, shieldingGas) - offsetof(UA_JobDescriptor, process) - sizeof(UA_UInt16), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("FillerMaterial") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_JobDescriptor, fillerMaterial) - offsetof(UA_JobDescriptor, shieldingGas) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},
{
    UA_TYPENAME("FillerDiameter") /* .memberName */
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_JobDescriptor, fillerDiameter) - offsetof(UA_JobDescriptor, fillerMaterial) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false /* .isArray */
},};
const UA_DataType UA_TYPES_TIG4[UA_TYPES_TIG4_COUNT] = {
/* JobDescriptor */
{
    UA_TYPENAME("JobDescriptor") /* .typeName */
    {3, UA_NODEIDTYPE_NUMERIC, {3002}}, /* .typeId */
    sizeof(UA_JobDescriptor), /* .memSize */
    UA_TYPES_TIG4_JOBDESCRIPTOR, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    5006, /* .binaryEncodingId */
    JobDescriptor_members /* .members */
},
};


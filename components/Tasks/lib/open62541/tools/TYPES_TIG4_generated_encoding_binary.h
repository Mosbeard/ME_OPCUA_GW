/* Generated from TIG4WeldingMachine.bsd with script ./generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-02-12 08:16:44 */

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "TYPES_TIG4_generated.h"
#endif



/* JobDescriptor */
static UA_INLINE size_t
UA_JobDescriptor_calcSizeBinary(const UA_JobDescriptor *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
}
static UA_INLINE UA_StatusCode
UA_JobDescriptor_encodeBinary(const UA_JobDescriptor *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_JobDescriptor_decodeBinary(const UA_ByteString *src, size_t *offset, UA_JobDescriptor *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR], NULL);
}

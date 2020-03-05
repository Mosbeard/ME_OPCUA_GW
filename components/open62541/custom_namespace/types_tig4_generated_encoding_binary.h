/* Generated from TIG4WeldingMachineLight.bsd with script ..\tools\generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-03-04 10:58:40 */

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_tig4_generated.h"
#endif



/* JobData */
static UA_INLINE size_t
UA_JobData_calcSizeBinary(const UA_JobData *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDATA]);
}
static UA_INLINE UA_StatusCode
UA_JobData_encodeBinary(const UA_JobData *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDATA], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_JobData_decodeBinary(const UA_ByteString *src, size_t *offset, UA_JobData *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDATA], NULL);
}

/* Tig4ErrorCode */
static UA_INLINE size_t
UA_Tig4ErrorCode_calcSizeBinary(const UA_Tig4ErrorCode *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_TIG4[UA_TYPES_TIG4_TIG4ERRORCODE]);
}
static UA_INLINE UA_StatusCode
UA_Tig4ErrorCode_encodeBinary(const UA_Tig4ErrorCode *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_TIG4[UA_TYPES_TIG4_TIG4ERRORCODE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_Tig4ErrorCode_decodeBinary(const UA_ByteString *src, size_t *offset, UA_Tig4ErrorCode *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_TIG4[UA_TYPES_TIG4_TIG4ERRORCODE], NULL);
}

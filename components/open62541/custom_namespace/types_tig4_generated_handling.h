/* Generated from TIG4WeldingMachineLight.bsd with script ..\tools\generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-03-04 10:58:40 */

#ifndef TYPES_TIG4_GENERATED_HANDLING_H_
#define TYPES_TIG4_GENERATED_HANDLING_H_

#include "types_tig4_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* JobData */
static UA_INLINE void
UA_JobData_init(UA_JobData *p) {
    memset(p, 0, sizeof(UA_JobData));
}

static UA_INLINE UA_JobData *
UA_JobData_new(void) {
    return (UA_JobData*)UA_new(&UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDATA]);
}

static UA_INLINE UA_StatusCode
UA_JobData_copy(const UA_JobData *src, UA_JobData *dst) {
    return UA_copy(src, dst, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDATA]);
}

static UA_INLINE void
UA_JobData_deleteMembers(UA_JobData *p) {
    UA_clear(p, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDATA]);
}

static UA_INLINE void
UA_JobData_clear(UA_JobData *p) {
    UA_clear(p, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDATA]);
}

static UA_INLINE void
UA_JobData_delete(UA_JobData *p) {
    UA_delete(p, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDATA]);
}

/* Tig4ErrorCode */
static UA_INLINE void
UA_Tig4ErrorCode_init(UA_Tig4ErrorCode *p) {
    memset(p, 0, sizeof(UA_Tig4ErrorCode));
}

static UA_INLINE UA_Tig4ErrorCode *
UA_Tig4ErrorCode_new(void) {
    return (UA_Tig4ErrorCode*)UA_new(&UA_TYPES_TIG4[UA_TYPES_TIG4_TIG4ERRORCODE]);
}

static UA_INLINE UA_StatusCode
UA_Tig4ErrorCode_copy(const UA_Tig4ErrorCode *src, UA_Tig4ErrorCode *dst) {
    return UA_copy(src, dst, &UA_TYPES_TIG4[UA_TYPES_TIG4_TIG4ERRORCODE]);
}

static UA_INLINE void
UA_Tig4ErrorCode_deleteMembers(UA_Tig4ErrorCode *p) {
    UA_clear(p, &UA_TYPES_TIG4[UA_TYPES_TIG4_TIG4ERRORCODE]);
}

static UA_INLINE void
UA_Tig4ErrorCode_clear(UA_Tig4ErrorCode *p) {
    UA_clear(p, &UA_TYPES_TIG4[UA_TYPES_TIG4_TIG4ERRORCODE]);
}

static UA_INLINE void
UA_Tig4ErrorCode_delete(UA_Tig4ErrorCode *p) {
    UA_delete(p, &UA_TYPES_TIG4[UA_TYPES_TIG4_TIG4ERRORCODE]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_TIG4_GENERATED_HANDLING_H_ */

/* Generated from TIG4WeldingMachine.bsd with script ./generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-02-12 08:16:44 */

#ifndef TYPES_TIG4_GENERATED_HANDLING_H_
#define TYPES_TIG4_GENERATED_HANDLING_H_

#include "TYPES_TIG4_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* JobDescriptor */
static UA_INLINE void
UA_JobDescriptor_init(UA_JobDescriptor *p) {
    memset(p, 0, sizeof(UA_JobDescriptor));
}

static UA_INLINE UA_JobDescriptor *
UA_JobDescriptor_new(void) {
    return (UA_JobDescriptor*)UA_new(&UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
}

static UA_INLINE UA_StatusCode
UA_JobDescriptor_copy(const UA_JobDescriptor *src, UA_JobDescriptor *dst) {
    return UA_copy(src, dst, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
}

static UA_INLINE void
UA_JobDescriptor_deleteMembers(UA_JobDescriptor *p) {
    UA_clear(p, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
}

static UA_INLINE void
UA_JobDescriptor_clear(UA_JobDescriptor *p) {
    UA_clear(p, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
}

static UA_INLINE void
UA_JobDescriptor_delete(UA_JobDescriptor *p) {
    UA_delete(p, &UA_TYPES_TIG4[UA_TYPES_TIG4_JOBDESCRIPTOR]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_TIG4_GENERATED_HANDLING_H_ */

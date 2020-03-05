/* Generated from TIG4WeldingMachineLight.bsd with script ..\tools\generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-03-04 10:58:40 */

#ifndef TYPES_TIG4_GENERATED_H_
#define TYPES_TIG4_GENERATED_H_

#ifdef UA_ENABLE_AMALGAMATION
#include "open62541.h"
#else
#include <open62541/types.h>
#include <open62541/types_generated.h>

#endif

_UA_BEGIN_DECLS


/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_TYPES_TIG4_COUNT 2
extern UA_EXPORT const UA_DataType UA_TYPES_TIG4[UA_TYPES_TIG4_COUNT];

/**
 * JobData
 * ^^^^^^^
 */
typedef struct {
    UA_UInt16 number;
    UA_ByteString rawData;
} UA_JobData;

#define UA_TYPES_TIG4_JOBDATA 0

/**
 * Tig4ErrorCode
 * ^^^^^^^^^^^^^
 */
typedef enum {
    UA_TIG4ERRORCODE_A = 1,
    UA_TIG4ERRORCODE_B = 2,
    UA_TIG4ERRORCODE_C = 4,
    UA_TIG4ERRORCODE_D = 8,
    UA_TIG4ERRORCODE_E = 16,
    UA_TIG4ERRORCODE_F = 32,
    UA_TIG4ERRORCODE_G = 64,
    UA_TIG4ERRORCODE_H = 128,
    __UA_TIG4ERRORCODE_FORCE32BIT = 0x7fffffff
} UA_Tig4ErrorCode;
UA_STATIC_ASSERT(sizeof(UA_Tig4ErrorCode) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_TIG4_TIG4ERRORCODE 1


_UA_END_DECLS

#endif /* TYPES_TIG4_GENERATED_H_ */

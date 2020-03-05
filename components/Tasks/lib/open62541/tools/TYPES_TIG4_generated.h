/* Generated from TIG4WeldingMachine.bsd with script ./generate_datatypes.py
 * on host GRAF-WIN10-PC by user Graf at 2020-02-12 08:16:44 */

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
#define UA_TYPES_TIG4_COUNT 1
extern UA_EXPORT const UA_DataType UA_TYPES_TIG4[UA_TYPES_TIG4_COUNT];

/**
 * JobDescriptor
 * ^^^^^^^^^^^^^
 */
typedef struct {
    UA_Int16 number;
    UA_String name;
    UA_ByteString rawData;
    UA_UInt16 process;
    UA_String shieldingGas;
    UA_String fillerMaterial;
    UA_String fillerDiameter;
} UA_JobDescriptor;

#define UA_TYPES_TIG4_JOBDESCRIPTOR 0


_UA_END_DECLS

#endif /* TYPES_TIG4_GENERATED_H_ */

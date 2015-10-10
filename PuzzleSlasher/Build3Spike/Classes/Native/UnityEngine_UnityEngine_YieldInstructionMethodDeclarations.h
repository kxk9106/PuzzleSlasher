#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t29;
struct YieldInstruction_t29_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m669 (YieldInstruction_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t29_marshal(const YieldInstruction_t29& unmarshaled, YieldInstruction_t29_marshaled& marshaled);
void YieldInstruction_t29_marshal_back(const YieldInstruction_t29_marshaled& marshaled, YieldInstruction_t29& unmarshaled);
void YieldInstruction_t29_marshal_cleanup(YieldInstruction_t29_marshaled& marshaled);

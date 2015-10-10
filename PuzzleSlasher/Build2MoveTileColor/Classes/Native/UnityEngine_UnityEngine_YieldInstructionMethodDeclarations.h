#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t28;
struct YieldInstruction_t28_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m666 (YieldInstruction_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t28_marshal(const YieldInstruction_t28& unmarshaled, YieldInstruction_t28_marshaled& marshaled);
void YieldInstruction_t28_marshal_back(const YieldInstruction_t28_marshaled& marshaled, YieldInstruction_t28& unmarshaled);
void YieldInstruction_t28_marshal_cleanup(YieldInstruction_t28_marshaled& marshaled);

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t935;
struct PreviousInfo_t935_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4499 (PreviousInfo_t935 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t935_marshal(const PreviousInfo_t935& unmarshaled, PreviousInfo_t935_marshaled& marshaled);
void PreviousInfo_t935_marshal_back(const PreviousInfo_t935_marshaled& marshaled, PreviousInfo_t935& unmarshaled);
void PreviousInfo_t935_marshal_cleanup(PreviousInfo_t935_marshaled& marshaled);

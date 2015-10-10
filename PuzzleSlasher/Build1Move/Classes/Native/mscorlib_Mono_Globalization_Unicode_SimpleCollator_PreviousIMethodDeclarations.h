#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t925;
struct PreviousInfo_t925_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4480 (PreviousInfo_t925 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t925_marshal(const PreviousInfo_t925& unmarshaled, PreviousInfo_t925_marshaled& marshaled);
void PreviousInfo_t925_marshal_back(const PreviousInfo_t925_marshaled& marshaled, PreviousInfo_t925& unmarshaled);
void PreviousInfo_t925_marshal_cleanup(PreviousInfo_t925_marshaled& marshaled);

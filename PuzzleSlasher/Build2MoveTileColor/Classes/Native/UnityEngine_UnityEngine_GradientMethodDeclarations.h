#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t56;
struct Gradient_t56_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m163 (Gradient_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m164 (Gradient_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m165 (Gradient_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m166 (Gradient_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t56_marshal(const Gradient_t56& unmarshaled, Gradient_t56_marshaled& marshaled);
void Gradient_t56_marshal_back(const Gradient_t56_marshaled& marshaled, Gradient_t56& unmarshaled);
void Gradient_t56_marshal_cleanup(Gradient_t56_marshaled& marshaled);

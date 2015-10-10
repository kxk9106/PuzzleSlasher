#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t57;
struct Gradient_t57_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m165 (Gradient_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m166 (Gradient_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m167 (Gradient_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m168 (Gradient_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t57_marshal(const Gradient_t57& unmarshaled, Gradient_t57_marshaled& marshaled);
void Gradient_t57_marshal_back(const Gradient_t57_marshaled& marshaled, Gradient_t57& unmarshaled);
void Gradient_t57_marshal_cleanup(Gradient_t57_marshaled& marshaled);

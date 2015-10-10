#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t31;
struct Coroutine_t31_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m54 (Coroutine_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m55 (Coroutine_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m56 (Coroutine_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t31_marshal(const Coroutine_t31& unmarshaled, Coroutine_t31_marshaled& marshaled);
void Coroutine_t31_marshal_back(const Coroutine_t31_marshaled& marshaled, Coroutine_t31& unmarshaled);
void Coroutine_t31_marshal_cleanup(Coroutine_t31_marshaled& marshaled);

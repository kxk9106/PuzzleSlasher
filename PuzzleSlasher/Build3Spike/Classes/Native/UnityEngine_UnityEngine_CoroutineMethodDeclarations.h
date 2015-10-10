#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t32;
struct Coroutine_t32_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m56 (Coroutine_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m57 (Coroutine_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m58 (Coroutine_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t32_marshal(const Coroutine_t32& unmarshaled, Coroutine_t32_marshaled& marshaled);
void Coroutine_t32_marshal_back(const Coroutine_t32_marshaled& marshaled, Coroutine_t32& unmarshaled);
void Coroutine_t32_marshal_cleanup(Coroutine_t32_marshaled& marshaled);

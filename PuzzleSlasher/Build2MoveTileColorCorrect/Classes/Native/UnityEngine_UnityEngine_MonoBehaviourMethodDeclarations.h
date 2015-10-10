#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4;
// UnityEngine.Coroutine
struct Coroutine_t31;
struct Coroutine_t31_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t295;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m7 (MonoBehaviour_t4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t31 * MonoBehaviour_StartCoroutine_m635 (MonoBehaviour_t4 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t31 * MonoBehaviour_StartCoroutine_Auto_m636 (MonoBehaviour_t4 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;

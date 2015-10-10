#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t21;
struct AsyncOperation_t21_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m570 (AsyncOperation_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m571 (AsyncOperation_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m572 (AsyncOperation_t21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t21_marshal(const AsyncOperation_t21& unmarshaled, AsyncOperation_t21_marshaled& marshaled);
void AsyncOperation_t21_marshal_back(const AsyncOperation_t21_marshaled& marshaled, AsyncOperation_t21& unmarshaled);
void AsyncOperation_t21_marshal_cleanup(AsyncOperation_t21_marshaled& marshaled);

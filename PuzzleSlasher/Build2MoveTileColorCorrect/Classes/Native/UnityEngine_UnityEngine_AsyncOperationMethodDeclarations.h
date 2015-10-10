#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t20;
struct AsyncOperation_t20_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m568 (AsyncOperation_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m569 (AsyncOperation_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m570 (AsyncOperation_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t20_marshal(const AsyncOperation_t20& unmarshaled, AsyncOperation_t20_marshaled& marshaled);
void AsyncOperation_t20_marshal_back(const AsyncOperation_t20_marshaled& marshaled, AsyncOperation_t20& unmarshaled);
void AsyncOperation_t20_marshal_cleanup(AsyncOperation_t20_marshaled& marshaled);

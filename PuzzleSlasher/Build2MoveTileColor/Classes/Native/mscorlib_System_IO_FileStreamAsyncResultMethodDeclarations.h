﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1050;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t869;
// System.AsyncCallback
struct AsyncCallback_t61;
// System.IAsyncResult
struct IAsyncResult_t60;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m5476 (FileStreamAsyncResult_t1050 * __this, AsyncCallback_t61 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m5477 (Object_t * __this /* static, unused */, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m5478 (FileStreamAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t869 * FileStreamAsyncResult_get_AsyncWaitHandle_m5479 (FileStreamAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m5480 (FileStreamAsyncResult_t1050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

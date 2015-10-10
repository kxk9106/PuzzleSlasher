﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
struct Transform_1_t2190;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11891_gshared (Transform_1_t2190 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11891(__this, ___object, ___method, method) (( void (*) (Transform_1_t2190 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11891_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m11892_gshared (Transform_1_t2190 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11892(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t2190 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m11892_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11893_gshared (Transform_1_t2190 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11893(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2190 *, Object_t *, uint8_t, AsyncCallback_t54 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11893_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m11894_gshared (Transform_1_t2190 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11894(__this, ___result, method) (( uint8_t (*) (Transform_1_t2190 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11894_gshared)(__this, ___result, method)

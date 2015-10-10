﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Transform_1_t2080;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t61;
// System.AsyncCallback
struct AsyncCallback_t62;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10423_gshared (Transform_1_t2080 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m10423(__this, ___object, ___method, method) (( void (*) (Transform_1_t2080 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m10423_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2070  Transform_1_Invoke_m10424_gshared (Transform_1_t2080 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m10424(__this, ___key, ___value, method) (( KeyValuePair_2_t2070  (*) (Transform_1_t2080 *, Object_t *, int64_t, const MethodInfo*))Transform_1_Invoke_m10424_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m10425_gshared (Transform_1_t2080 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t62 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m10425(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2080 *, Object_t *, int64_t, AsyncCallback_t62 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m10425_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2070  Transform_1_EndInvoke_m10426_gshared (Transform_1_t2080 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m10426(__this, ___result, method) (( KeyValuePair_2_t2070  (*) (Transform_1_t2080 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m10426_gshared)(__this, ___result, method)

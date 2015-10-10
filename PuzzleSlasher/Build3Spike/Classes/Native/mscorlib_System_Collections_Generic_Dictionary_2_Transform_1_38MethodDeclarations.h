﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Transform_1_t2204;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t61;
// System.AsyncCallback
struct AsyncCallback_t62;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11964_gshared (Transform_1_t2204 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11964(__this, ___object, ___method, method) (( void (*) (Transform_1_t2204 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11964_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2195  Transform_1_Invoke_m11965_gshared (Transform_1_t2204 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11965(__this, ___key, ___value, method) (( KeyValuePair_2_t2195  (*) (Transform_1_t2204 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m11965_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11966_gshared (Transform_1_t2204 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t62 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11966(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2204 *, Object_t *, uint8_t, AsyncCallback_t62 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11966_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2195  Transform_1_EndInvoke_m11967_gshared (Transform_1_t2204 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11967(__this, ___result, method) (( KeyValuePair_2_t2195  (*) (Transform_1_t2204 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11967_gshared)(__this, ___result, method)

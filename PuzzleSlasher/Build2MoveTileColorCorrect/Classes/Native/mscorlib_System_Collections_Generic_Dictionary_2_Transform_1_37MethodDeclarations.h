﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
struct Transform_1_t2193;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t60;
// System.AsyncCallback
struct AsyncCallback_t61;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11957_gshared (Transform_1_t2193 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11957(__this, ___object, ___method, method) (( void (*) (Transform_1_t2193 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11957_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t668  Transform_1_Invoke_m11958_gshared (Transform_1_t2193 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11958(__this, ___key, ___value, method) (( DictionaryEntry_t668  (*) (Transform_1_t2193 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m11958_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11959_gshared (Transform_1_t2193 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t61 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11959(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2193 *, Object_t *, uint8_t, AsyncCallback_t61 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11959_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t668  Transform_1_EndInvoke_m11960_gshared (Transform_1_t2193 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11960(__this, ___result, method) (( DictionaryEntry_t668  (*) (Transform_1_t2193 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11960_gshared)(__this, ___result, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct Transform_1_t2226;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t60;
// System.AsyncCallback
struct AsyncCallback_t61;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12166_gshared (Transform_1_t2226 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12166(__this, ___object, ___method, method) (( void (*) (Transform_1_t2226 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12166_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2218  Transform_1_Invoke_m12167_gshared (Transform_1_t2226 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12167(__this, ___key, ___value, method) (( KeyValuePair_2_t2218  (*) (Transform_1_t2226 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m12167_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12168_gshared (Transform_1_t2226 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t61 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12168(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2226 *, int32_t, int32_t, AsyncCallback_t61 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12168_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2218  Transform_1_EndInvoke_m12169_gshared (Transform_1_t2226 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12169(__this, ___result, method) (( KeyValuePair_2_t2218  (*) (Transform_1_t2226 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12169_gshared)(__this, ___result, method)

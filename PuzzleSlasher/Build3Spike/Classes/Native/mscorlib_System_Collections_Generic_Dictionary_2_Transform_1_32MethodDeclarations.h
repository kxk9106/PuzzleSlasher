#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct Transform_1_t2155;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t61;
// System.AsyncCallback
struct AsyncCallback_t62;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11446_gshared (Transform_1_t2155 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11446(__this, ___object, ___method, method) (( void (*) (Transform_1_t2155 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11446_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2121  Transform_1_Invoke_m11447_gshared (Transform_1_t2155 * __this, Object_t * ___key, KeyValuePair_2_t2010  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11447(__this, ___key, ___value, method) (( KeyValuePair_2_t2121  (*) (Transform_1_t2155 *, Object_t *, KeyValuePair_2_t2010 , const MethodInfo*))Transform_1_Invoke_m11447_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11448_gshared (Transform_1_t2155 * __this, Object_t * ___key, KeyValuePair_2_t2010  ___value, AsyncCallback_t62 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11448(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2155 *, Object_t *, KeyValuePair_2_t2010 , AsyncCallback_t62 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11448_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2121  Transform_1_EndInvoke_m11449_gshared (Transform_1_t2155 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11449(__this, ___result, method) (( KeyValuePair_2_t2121  (*) (Transform_1_t2155 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11449_gshared)(__this, ___result, method)

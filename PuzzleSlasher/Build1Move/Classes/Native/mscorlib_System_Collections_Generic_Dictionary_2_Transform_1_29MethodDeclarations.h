#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Transform_1_t2138;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t53;
// System.AsyncCallback
struct AsyncCallback_t54;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11351_gshared (Transform_1_t2138 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11351(__this, ___object, ___method, method) (( void (*) (Transform_1_t2138 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11351_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m11352_gshared (Transform_1_t2138 * __this, Object_t * ___key, KeyValuePair_2_t1998  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11352(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2138 *, Object_t *, KeyValuePair_2_t1998 , const MethodInfo*))Transform_1_Invoke_m11352_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11353_gshared (Transform_1_t2138 * __this, Object_t * ___key, KeyValuePair_2_t1998  ___value, AsyncCallback_t54 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11353(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2138 *, Object_t *, KeyValuePair_2_t1998 , AsyncCallback_t54 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11353_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m11354_gshared (Transform_1_t2138 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11354(__this, ___result, method) (( Object_t * (*) (Transform_1_t2138 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11354_gshared)(__this, ___result, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2112;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2110;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2305;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m10886_gshared (ThreadSafeDictionary_2_t2112 * __this, ThreadSafeDictionaryValueFactory_2_t2110 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10886(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2112 *, ThreadSafeDictionaryValueFactory_2_t2110 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10886_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10888_gshared (ThreadSafeDictionary_2_t2112 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10888(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2112 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10888_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10890_gshared (ThreadSafeDictionary_2_t2112 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10890(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2112 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10890_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10892_gshared (ThreadSafeDictionary_2_t2112 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10892(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2112 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10892_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10894_gshared (ThreadSafeDictionary_2_t2112 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10894(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2112 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10894_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10896_gshared (ThreadSafeDictionary_2_t2112 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10896(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2112 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10896_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m10898_gshared (ThreadSafeDictionary_2_t2112 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10898(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2112 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m10898_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10900_gshared (ThreadSafeDictionary_2_t2112 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10900(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2112 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10900_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10902_gshared (ThreadSafeDictionary_2_t2112 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10902(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2112 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10902_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10904_gshared (ThreadSafeDictionary_2_t2112 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10904(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2112 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10904_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10906_gshared (ThreadSafeDictionary_2_t2112 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10906(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2112 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10906_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m10908_gshared (ThreadSafeDictionary_2_t2112 * __this, KeyValuePair_2_t1998  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10908(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2112 *, KeyValuePair_2_t1998 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10908_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m10910_gshared (ThreadSafeDictionary_2_t2112 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m10910(__this, method) (( void (*) (ThreadSafeDictionary_2_t2112 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10910_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m10912_gshared (ThreadSafeDictionary_2_t2112 * __this, KeyValuePair_2_t1998  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m10912(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2112 *, KeyValuePair_2_t1998 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10912_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m10914_gshared (ThreadSafeDictionary_2_t2112 * __this, KeyValuePair_2U5BU5D_t2132* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m10914(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2112 *, KeyValuePair_2U5BU5D_t2132*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10914_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m10916_gshared (ThreadSafeDictionary_2_t2112 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m10916(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2112 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10916_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m10918_gshared (ThreadSafeDictionary_2_t2112 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m10918(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2112 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10918_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m10920_gshared (ThreadSafeDictionary_2_t2112 * __this, KeyValuePair_2_t1998  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10920(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2112 *, KeyValuePair_2_t1998 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10920_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m10922_gshared (ThreadSafeDictionary_2_t2112 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m10922(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2112 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10922_gshared)(__this, method)

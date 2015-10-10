#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2125;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t312;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2123;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2319;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m10951_gshared (ThreadSafeDictionary_2_t2125 * __this, ThreadSafeDictionaryValueFactory_2_t2123 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10951(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, ThreadSafeDictionaryValueFactory_2_t2123 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10951_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10953_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10953(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10953_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10955_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10955(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10955_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10957_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10957(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10957_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10959_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10959(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10959_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10961_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10961(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10961_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m10963_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10963(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m10963_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10965_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10965(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10965_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10967_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10967(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10967_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10969_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10969(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10969_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10971_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10971(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10971_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m10973_gshared (ThreadSafeDictionary_2_t2125 * __this, KeyValuePair_2_t2010  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10973(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, KeyValuePair_2_t2010 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10973_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m10975_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m10975(__this, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10975_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m10977_gshared (ThreadSafeDictionary_2_t2125 * __this, KeyValuePair_2_t2010  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m10977(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, KeyValuePair_2_t2010 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10977_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m10979_gshared (ThreadSafeDictionary_2_t2125 * __this, KeyValuePair_2U5BU5D_t2145* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m10979(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, KeyValuePair_2U5BU5D_t2145*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10979_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m10981_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m10981(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10981_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m10983_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m10983(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10983_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m10985_gshared (ThreadSafeDictionary_2_t2125 * __this, KeyValuePair_2_t2010  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10985(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, KeyValuePair_2_t2010 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10985_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m10987_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m10987(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10987_gshared)(__this, method)

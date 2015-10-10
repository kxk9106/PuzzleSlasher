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
extern "C" void ThreadSafeDictionary_2__ctor_m10948_gshared (ThreadSafeDictionary_2_t2125 * __this, ThreadSafeDictionaryValueFactory_2_t2123 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10948(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, ThreadSafeDictionaryValueFactory_2_t2123 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10948_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10950_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10950(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10950_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10952_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10952(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10952_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10954_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10954(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10954_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10956_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10956(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10956_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10958_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10958(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10958_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m10960_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10960(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m10960_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10962_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10962(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10962_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10964_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10964(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10964_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10966_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10966(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10966_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10968_gshared (ThreadSafeDictionary_2_t2125 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10968(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10968_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m10970_gshared (ThreadSafeDictionary_2_t2125 * __this, KeyValuePair_2_t2010  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10970(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, KeyValuePair_2_t2010 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10970_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m10972_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m10972(__this, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10972_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m10974_gshared (ThreadSafeDictionary_2_t2125 * __this, KeyValuePair_2_t2010  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m10974(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, KeyValuePair_2_t2010 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10974_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m10976_gshared (ThreadSafeDictionary_2_t2125 * __this, KeyValuePair_2U5BU5D_t2145* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m10976(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2125 *, KeyValuePair_2U5BU5D_t2145*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10976_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m10978_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m10978(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10978_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m10980_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m10980(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10980_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m10982_gshared (ThreadSafeDictionary_2_t2125 * __this, KeyValuePair_2_t2010  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10982(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2125 *, KeyValuePair_2_t2010 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10982_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m10984_gshared (ThreadSafeDictionary_2_t2125 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m10984(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2125 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10984_gshared)(__this, method)

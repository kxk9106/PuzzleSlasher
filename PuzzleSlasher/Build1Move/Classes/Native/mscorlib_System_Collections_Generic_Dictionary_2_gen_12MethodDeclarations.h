﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2056;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2325;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2060;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2064;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1995;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2329;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2330;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2331;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t657;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m10185_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10185(__this, method) (( void (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2__ctor_m10185_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10187_gshared (Dictionary_2_t2056 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10187(__this, ___comparer, method) (( void (*) (Dictionary_2_t2056 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10187_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10189_gshared (Dictionary_2_t2056 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10189(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2056 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10189_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10191_gshared (Dictionary_2_t2056 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10191(__this, ___capacity, method) (( void (*) (Dictionary_2_t2056 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10191_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10193_gshared (Dictionary_2_t2056 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10193(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2056 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10193_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10195_gshared (Dictionary_2_t2056 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10195(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2056 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m10195_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10197_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10197(__this, method) (( Object_t* (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10197_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10199_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10199(__this, method) (( Object_t* (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10199_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10201_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10201(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2056 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10201_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10203_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10203(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2056 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10203_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10205_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10205(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2056 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10205_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10207_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10207(__this, ___key, method) (( bool (*) (Dictionary_2_t2056 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10207_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10209_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10209(__this, ___key, method) (( void (*) (Dictionary_2_t2056 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10209_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10211_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10211(__this, method) (( Object_t * (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10211_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10213_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10213(__this, method) (( bool (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10213_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10215_gshared (Dictionary_2_t2056 * __this, KeyValuePair_2_t2057  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10215(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2056 *, KeyValuePair_2_t2057 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10215_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10217_gshared (Dictionary_2_t2056 * __this, KeyValuePair_2_t2057  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10217(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2056 *, KeyValuePair_2_t2057 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10217_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10219_gshared (Dictionary_2_t2056 * __this, KeyValuePair_2U5BU5D_t2330* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10219(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2056 *, KeyValuePair_2U5BU5D_t2330*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10219_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10221_gshared (Dictionary_2_t2056 * __this, KeyValuePair_2_t2057  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10221(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2056 *, KeyValuePair_2_t2057 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10221_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10223_gshared (Dictionary_2_t2056 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10223(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2056 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10223_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10225_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10225(__this, method) (( Object_t * (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10225_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10227_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10227(__this, method) (( Object_t* (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10227_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10229_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10229(__this, method) (( Object_t * (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10229_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10231_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10231(__this, method) (( int32_t (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_get_Count_m10231_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m10233_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10233(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2056 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10233_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10235_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10235(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2056 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m10235_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10237_gshared (Dictionary_2_t2056 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10237(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2056 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10237_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10239_gshared (Dictionary_2_t2056 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10239(__this, ___size, method) (( void (*) (Dictionary_2_t2056 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10239_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10241_gshared (Dictionary_2_t2056 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10241(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2056 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10241_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2057  Dictionary_2_make_pair_m10243_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10243(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2057  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m10243_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m10245_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10245(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m10245_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m10247_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10247(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m10247_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10249_gshared (Dictionary_2_t2056 * __this, KeyValuePair_2U5BU5D_t2330* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10249(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2056 *, KeyValuePair_2U5BU5D_t2330*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10249_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m10251_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10251(__this, method) (( void (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_Resize_m10251_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10253_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10253(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2056 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m10253_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m10255_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10255(__this, method) (( void (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_Clear_m10255_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10257_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10257(__this, ___key, method) (( bool (*) (Dictionary_2_t2056 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10257_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10259_gshared (Dictionary_2_t2056 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10259(__this, ___value, method) (( bool (*) (Dictionary_2_t2056 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m10259_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10261_gshared (Dictionary_2_t2056 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10261(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2056 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m10261_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10263_gshared (Dictionary_2_t2056 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10263(__this, ___sender, method) (( void (*) (Dictionary_2_t2056 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10263_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10265_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10265(__this, ___key, method) (( bool (*) (Dictionary_2_t2056 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10265_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10267_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10267(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2056 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m10267_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2060 * Dictionary_2_get_Keys_m10269_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10269(__this, method) (( KeyCollection_t2060 * (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_get_Keys_m10269_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2064 * Dictionary_2_get_Values_m10271_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10271(__this, method) (( ValueCollection_t2064 * (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_get_Values_m10271_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10273_gshared (Dictionary_2_t2056 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10273(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2056 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10273_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m10275_gshared (Dictionary_2_t2056 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10275(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2056 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10275_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10277_gshared (Dictionary_2_t2056 * __this, KeyValuePair_2_t2057  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10277(__this, ___pair, method) (( bool (*) (Dictionary_2_t2056 *, KeyValuePair_2_t2057 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10277_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2062  Dictionary_2_GetEnumerator_m10279_gshared (Dictionary_2_t2056 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10279(__this, method) (( Enumerator_t2062  (*) (Dictionary_2_t2056 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10279_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t658  Dictionary_2_U3CCopyToU3Em__0_m10281_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10281(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t658  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10281_gshared)(__this /* static, unused */, ___key, ___value, method)

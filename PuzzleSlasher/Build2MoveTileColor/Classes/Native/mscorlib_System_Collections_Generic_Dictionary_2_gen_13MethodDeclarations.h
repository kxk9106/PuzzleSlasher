﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2099;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t2356;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t312;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t2103;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t2107;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t2097;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t2357;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t326;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t2358;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t2359;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t667;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10567_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10567(__this, method) (( void (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2__ctor_m10567_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10569_gshared (Dictionary_2_t2099 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10569(__this, ___comparer, method) (( void (*) (Dictionary_2_t2099 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10569_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10571_gshared (Dictionary_2_t2099 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10571(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2099 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10571_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10573_gshared (Dictionary_2_t2099 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10573(__this, ___capacity, method) (( void (*) (Dictionary_2_t2099 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10573_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10575_gshared (Dictionary_2_t2099 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10575(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2099 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10575_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10577_gshared (Dictionary_2_t2099 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10577(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2099 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2__ctor_m10577_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10579_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10579(__this, method) (( Object_t* (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10579_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10581_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10581(__this, method) (( Object_t* (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10581_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10583_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10583(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10583_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10585_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10585(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10585_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10587_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10587(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10587_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10589_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10589(__this, ___key, method) (( bool (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10589_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10591_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10591(__this, ___key, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10591_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10593_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10593(__this, method) (( Object_t * (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10595_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10595(__this, method) (( bool (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10595_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10597_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2_t2100  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10597(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2099 *, KeyValuePair_2_t2100 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10597_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10599_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2_t2100  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10599(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2099 *, KeyValuePair_2_t2100 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10599_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10601_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2U5BU5D_t2358* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10601(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2099 *, KeyValuePair_2U5BU5D_t2358*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10601_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10603_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2_t2100  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10603(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2099 *, KeyValuePair_2_t2100 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10603_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10605_gshared (Dictionary_2_t2099 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10605(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2099 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10605_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10607_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10607(__this, method) (( Object_t * (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10607_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10609_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10609(__this, method) (( Object_t* (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10609_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10611_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10611(__this, method) (( Object_t * (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10611_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10613_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10613(__this, method) (( int32_t (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_get_Count_m10613_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m10615_gshared (Dictionary_2_t2099 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10615(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2099 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m10615_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10617_gshared (Dictionary_2_t2099 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10617(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2099 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m10617_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10619_gshared (Dictionary_2_t2099 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10619(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2099 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10619_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10621_gshared (Dictionary_2_t2099 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10621(__this, ___size, method) (( void (*) (Dictionary_2_t2099 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10621_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10623_gshared (Dictionary_2_t2099 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10623(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2099 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10623_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2100  Dictionary_2_make_pair_m10625_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10625(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2100  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m10625_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m10627_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10627(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m10627_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10629_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10629(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m10629_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10631_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2U5BU5D_t2358* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10631(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2099 *, KeyValuePair_2U5BU5D_t2358*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10631_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m10633_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10633(__this, method) (( void (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_Resize_m10633_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10635_gshared (Dictionary_2_t2099 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10635(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2099 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m10635_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10637_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10637(__this, method) (( void (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_Clear_m10637_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10639_gshared (Dictionary_2_t2099 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10639(__this, ___key, method) (( bool (*) (Dictionary_2_t2099 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m10639_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10641_gshared (Dictionary_2_t2099 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10641(__this, ___value, method) (( bool (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m10641_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10643_gshared (Dictionary_2_t2099 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10643(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2099 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2_GetObjectData_m10643_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10645_gshared (Dictionary_2_t2099 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10645(__this, ___sender, method) (( void (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10645_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10647_gshared (Dictionary_2_t2099 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10647(__this, ___key, method) (( bool (*) (Dictionary_2_t2099 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m10647_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10649_gshared (Dictionary_2_t2099 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10649(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2099 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10649_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t2103 * Dictionary_2_get_Keys_m10651_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10651(__this, method) (( KeyCollection_t2103 * (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_get_Keys_m10651_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t2107 * Dictionary_2_get_Values_m10653_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10653(__this, method) (( ValueCollection_t2107 * (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_get_Values_m10653_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m10655_gshared (Dictionary_2_t2099 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10655(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10655_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10657_gshared (Dictionary_2_t2099 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10657(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2099 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10657_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10659_gshared (Dictionary_2_t2099 * __this, KeyValuePair_2_t2100  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10659(__this, ___pair, method) (( bool (*) (Dictionary_2_t2099 *, KeyValuePair_2_t2100 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10659_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t2105  Dictionary_2_GetEnumerator_m10661_gshared (Dictionary_2_t2099 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10661(__this, method) (( Enumerator_t2105  (*) (Dictionary_2_t2099 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10661_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t668  Dictionary_2_U3CCopyToU3Em__0_m10663_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10663(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t668  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10663_gshared)(__this /* static, unused */, ___key, ___value, method)

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2181;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t2403;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t2184;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2188;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1995;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t2404;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2405;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t2406;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t657;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m11732_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11732(__this, method) (( void (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2__ctor_m11732_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11733_gshared (Dictionary_2_t2181 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11733(__this, ___comparer, method) (( void (*) (Dictionary_2_t2181 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11733_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11735_gshared (Dictionary_2_t2181 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11735(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2181 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11735_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11737_gshared (Dictionary_2_t2181 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11737(__this, ___capacity, method) (( void (*) (Dictionary_2_t2181 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11737_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11739_gshared (Dictionary_2_t2181 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11739(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2181 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11739_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11741_gshared (Dictionary_2_t2181 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11741(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2181 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m11741_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11743_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11743(__this, method) (( Object_t* (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11743_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11745_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11745(__this, method) (( Object_t* (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11745_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11747_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11747(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11747_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11749_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11749(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11749_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11751_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11751(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11751_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11753_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11753(__this, ___key, method) (( bool (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11753_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11755_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11755(__this, ___key, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11755_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11757_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11757(__this, method) (( Object_t * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11757_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11759_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11759(__this, method) (( bool (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11759_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11761_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2_t2182  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11761(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2181 *, KeyValuePair_2_t2182 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11761_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11763_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2_t2182  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11763(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2181 *, KeyValuePair_2_t2182 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11763_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11765_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2U5BU5D_t2405* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11765(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2181 *, KeyValuePair_2U5BU5D_t2405*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11765_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11767_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2_t2182  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11767(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2181 *, KeyValuePair_2_t2182 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11767_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11769_gshared (Dictionary_2_t2181 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11769(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2181 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11769_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11771_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11771(__this, method) (( Object_t * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11771_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11773_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11773(__this, method) (( Object_t* (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11773_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11775_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11775(__this, method) (( Object_t * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11775_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11777_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11777(__this, method) (( int32_t (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_get_Count_m11777_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m11779_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11779(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11779_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11781_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11781(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m11781_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11783_gshared (Dictionary_2_t2181 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11783(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2181 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11783_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11785_gshared (Dictionary_2_t2181 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11785(__this, ___size, method) (( void (*) (Dictionary_2_t2181 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11785_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11787_gshared (Dictionary_2_t2181 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11787(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2181 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11787_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2182  Dictionary_2_make_pair_m11789_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11789(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2182  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m11789_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11791_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11791(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m11791_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m11793_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11793(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m11793_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11795_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2U5BU5D_t2405* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11795(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2181 *, KeyValuePair_2U5BU5D_t2405*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11795_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m11797_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11797(__this, method) (( void (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_Resize_m11797_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11799_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11799(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m11799_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m11801_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11801(__this, method) (( void (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_Clear_m11801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11803_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11803(__this, ___key, method) (( bool (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11803_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11805_gshared (Dictionary_2_t2181 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11805(__this, ___value, method) (( bool (*) (Dictionary_2_t2181 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m11805_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11807_gshared (Dictionary_2_t2181 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11807(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2181 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m11807_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11809_gshared (Dictionary_2_t2181 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11809(__this, ___sender, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11809_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11811_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11811(__this, ___key, method) (( bool (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11811_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11813_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11813(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2181 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11813_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t2184 * Dictionary_2_get_Keys_m11815_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11815(__this, method) (( KeyCollection_t2184 * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_get_Keys_m11815_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t2188 * Dictionary_2_get_Values_m11817_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11817(__this, method) (( ValueCollection_t2188 * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_get_Values_m11817_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11819_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11819(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11819_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m11821_gshared (Dictionary_2_t2181 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11821(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11821_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11823_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2_t2182  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11823(__this, ___pair, method) (( bool (*) (Dictionary_2_t2181 *, KeyValuePair_2_t2182 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11823_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2186  Dictionary_2_GetEnumerator_m11825_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11825(__this, method) (( Enumerator_t2186  (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11825_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t658  Dictionary_2_U3CCopyToU3Em__0_m11827_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11827(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t658  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11827_gshared)(__this /* static, unused */, ___key, ___value, method)

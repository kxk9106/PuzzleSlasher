﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2147;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t312;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2394;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t2148;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t2152;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2007;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t2395;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t326;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t2396;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t2397;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t667;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m11289_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11289(__this, method) (( void (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2__ctor_m11289_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11291_gshared (Dictionary_2_t2147 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11291(__this, ___comparer, method) (( void (*) (Dictionary_2_t2147 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11291_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11293_gshared (Dictionary_2_t2147 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11293(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2147 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11293_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11295_gshared (Dictionary_2_t2147 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11295(__this, ___capacity, method) (( void (*) (Dictionary_2_t2147 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11297_gshared (Dictionary_2_t2147 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11297(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2147 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11297_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11299_gshared (Dictionary_2_t2147 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11299(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2147 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2__ctor_m11299_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11301_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11301(__this, method) (( Object_t* (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11301_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11303_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11303(__this, method) (( Object_t* (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11303_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11305_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11305(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11305_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11307_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11307(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11307_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11309_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11309(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11309_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11311_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11311(__this, ___key, method) (( bool (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11311_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11313_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11313(__this, ___key, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11313_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11315_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11315(__this, method) (( Object_t * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11315_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11317_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11317(__this, method) (( bool (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11319_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2_t2121  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11319(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2147 *, KeyValuePair_2_t2121 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11319_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11321_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2_t2121  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11321(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2147 *, KeyValuePair_2_t2121 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11321_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11323_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2U5BU5D_t2396* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11323(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2147 *, KeyValuePair_2U5BU5D_t2396*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11323_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11325_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2_t2121  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11325(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2147 *, KeyValuePair_2_t2121 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11325_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11327_gshared (Dictionary_2_t2147 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11327(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2147 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11327_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11329_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11329(__this, method) (( Object_t * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11329_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11331_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11331(__this, method) (( Object_t* (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11331_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11333_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11333(__this, method) (( Object_t * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11333_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11335_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11335(__this, method) (( int32_t (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_get_Count_m11335_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t2010  Dictionary_2_get_Item_m11337_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11337(__this, ___key, method) (( KeyValuePair_2_t2010  (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11337_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11339_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, KeyValuePair_2_t2010  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11339(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_set_Item_m11339_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11341_gshared (Dictionary_2_t2147 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11341(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2147 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11341_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11343_gshared (Dictionary_2_t2147 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11343(__this, ___size, method) (( void (*) (Dictionary_2_t2147 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11343_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11345_gshared (Dictionary_2_t2147 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11345(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2147 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11345_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2121  Dictionary_2_make_pair_m11347_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2010  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11347(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2121  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_make_pair_m11347_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11349_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2010  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11349(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_pick_key_m11349_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2010  Dictionary_2_pick_value_m11351_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2010  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11351(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2010  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_pick_value_m11351_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11353_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2U5BU5D_t2396* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11353(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2147 *, KeyValuePair_2U5BU5D_t2396*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11353_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m11355_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11355(__this, method) (( void (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_Resize_m11355_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11357_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, KeyValuePair_2_t2010  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11357(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_Add_m11357_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m11359_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11359(__this, method) (( void (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_Clear_m11359_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11361_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11361(__this, ___key, method) (( bool (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11361_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11363_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2_t2010  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11363(__this, ___value, method) (( bool (*) (Dictionary_2_t2147 *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_ContainsValue_m11363_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11365_gshared (Dictionary_2_t2147 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11365(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2147 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2_GetObjectData_m11365_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11367_gshared (Dictionary_2_t2147 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11367(__this, ___sender, method) (( void (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11367_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11369_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11369(__this, ___key, method) (( bool (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11369_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11371_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, KeyValuePair_2_t2010 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11371(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2147 *, Object_t *, KeyValuePair_2_t2010 *, const MethodInfo*))Dictionary_2_TryGetValue_m11371_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t2148 * Dictionary_2_get_Keys_m11373_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11373(__this, method) (( KeyCollection_t2148 * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_get_Keys_m11373_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t2152 * Dictionary_2_get_Values_m11375_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11375(__this, method) (( ValueCollection_t2152 * (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_get_Values_m11375_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11377_gshared (Dictionary_2_t2147 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11377(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11377_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t2010  Dictionary_2_ToTValue_m11379_gshared (Dictionary_2_t2147 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11379(__this, ___value, method) (( KeyValuePair_2_t2010  (*) (Dictionary_2_t2147 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11379_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11381_gshared (Dictionary_2_t2147 * __this, KeyValuePair_2_t2121  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11381(__this, ___pair, method) (( bool (*) (Dictionary_2_t2147 *, KeyValuePair_2_t2121 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11381_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2150  Dictionary_2_GetEnumerator_m11383_gshared (Dictionary_2_t2147 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11383(__this, method) (( Enumerator_t2150  (*) (Dictionary_2_t2147 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11383_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t668  Dictionary_2_U3CCopyToU3Em__0_m11385_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2010  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11385(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t668  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11385_gshared)(__this /* static, unused */, ___key, ___value, method)

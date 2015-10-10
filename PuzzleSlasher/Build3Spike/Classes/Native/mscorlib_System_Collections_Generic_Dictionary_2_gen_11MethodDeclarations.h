﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2025;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t312;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2301;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2028;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2032;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2007;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2326;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t326;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2327;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2328;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t667;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9656_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9656(__this, method) (( void (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2__ctor_m9656_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9658_gshared (Dictionary_2_t2025 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9658(__this, ___comparer, method) (( void (*) (Dictionary_2_t2025 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9660_gshared (Dictionary_2_t2025 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9660(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2025 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9660_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9661_gshared (Dictionary_2_t2025 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9661(__this, ___capacity, method) (( void (*) (Dictionary_2_t2025 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9661_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9663_gshared (Dictionary_2_t2025 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9663(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2025 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9663_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9665_gshared (Dictionary_2_t2025 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9665(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2025 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2__ctor_m9665_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9667_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9667(__this, method) (( Object_t* (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9667_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9669_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9669(__this, method) (( Object_t* (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9669_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9671_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9671(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2025 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9671_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9673_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9673(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2025 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9673_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9675_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9675(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2025 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9675_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9677_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9677(__this, ___key, method) (( bool (*) (Dictionary_2_t2025 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9677_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9679_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9679(__this, ___key, method) (( void (*) (Dictionary_2_t2025 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9679_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9681_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9681(__this, method) (( Object_t * (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9681_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9683_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9683(__this, method) (( bool (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9685_gshared (Dictionary_2_t2025 * __this, KeyValuePair_2_t2026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9685(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2025 *, KeyValuePair_2_t2026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9685_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9687_gshared (Dictionary_2_t2025 * __this, KeyValuePair_2_t2026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9687(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2025 *, KeyValuePair_2_t2026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9687_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9689_gshared (Dictionary_2_t2025 * __this, KeyValuePair_2U5BU5D_t2327* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9689(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2025 *, KeyValuePair_2U5BU5D_t2327*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9689_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9691_gshared (Dictionary_2_t2025 * __this, KeyValuePair_2_t2026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9691(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2025 *, KeyValuePair_2_t2026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9691_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9693_gshared (Dictionary_2_t2025 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9693(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2025 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9693_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9695_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9695(__this, method) (( Object_t * (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9695_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9697_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9697(__this, method) (( Object_t* (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9697_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9699_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9699(__this, method) (( Object_t * (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9701_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9701(__this, method) (( int32_t (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_get_Count_m9701_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9703_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9703(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2025 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9703_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9705_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9705(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2025 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9705_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9707_gshared (Dictionary_2_t2025 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9707(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2025 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9707_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9709_gshared (Dictionary_2_t2025 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9709(__this, ___size, method) (( void (*) (Dictionary_2_t2025 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9709_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9711_gshared (Dictionary_2_t2025 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9711(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2025 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9711_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2026  Dictionary_2_make_pair_m9713_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9713(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2026  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9713_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9715_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9715(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9715_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9717_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9717(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9717_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9719_gshared (Dictionary_2_t2025 * __this, KeyValuePair_2U5BU5D_t2327* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9719(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2025 *, KeyValuePair_2U5BU5D_t2327*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9719_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9721_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9721(__this, method) (( void (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_Resize_m9721_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9723_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9723(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2025 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9723_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9725_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9725(__this, method) (( void (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_Clear_m9725_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9727_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9727(__this, ___key, method) (( bool (*) (Dictionary_2_t2025 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9727_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9729_gshared (Dictionary_2_t2025 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9729(__this, ___value, method) (( bool (*) (Dictionary_2_t2025 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9729_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9731_gshared (Dictionary_2_t2025 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9731(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2025 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2_GetObjectData_m9731_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9733_gshared (Dictionary_2_t2025 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9733(__this, ___sender, method) (( void (*) (Dictionary_2_t2025 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9733_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9735_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9735(__this, ___key, method) (( bool (*) (Dictionary_2_t2025 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9735_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9737_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9737(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2025 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9737_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2028 * Dictionary_2_get_Keys_m9739_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9739(__this, method) (( KeyCollection_t2028 * (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_get_Keys_m9739_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2032 * Dictionary_2_get_Values_m9741_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9741(__this, method) (( ValueCollection_t2032 * (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_get_Values_m9741_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9743_gshared (Dictionary_2_t2025 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9743(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2025 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9743_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9745_gshared (Dictionary_2_t2025 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9745(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2025 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9745_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9747_gshared (Dictionary_2_t2025 * __this, KeyValuePair_2_t2026  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9747(__this, ___pair, method) (( bool (*) (Dictionary_2_t2025 *, KeyValuePair_2_t2026 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9747_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2030  Dictionary_2_GetEnumerator_m9749_gshared (Dictionary_2_t2025 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9749(__this, method) (( Enumerator_t2030  (*) (Dictionary_2_t2025 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9749_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t668  Dictionary_2_U3CCopyToU3Em__0_m9751_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9751(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t668  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9751_gshared)(__this /* static, unused */, ___key, ___value, method)

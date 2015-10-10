﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct Dictionary_2_t2121;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t2353;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct ICollection_1_t2366;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t311;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct KeyCollection_t2369;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct ValueCollection_t2370;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2114;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct IDictionary_2_t202;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>[]
struct KeyValuePair_2U5BU5D_t2367;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>>
struct IEnumerator_1_t2368;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t657;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__20.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m11075(__this, method) (( void (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2__ctor_m9371_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m11076(__this, ___comparer, method) (( void (*) (Dictionary_2_t2121 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9372_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m11077(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2121 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9374_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m11078(__this, ___capacity, method) (( void (*) (Dictionary_2_t2121 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9376_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m11079(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2121 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9378_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m11080(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2121 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m9380_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11081(__this, method) (( Object_t* (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9382_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11082(__this, method) (( Object_t* (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9384_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11083(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2121 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9386_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11084(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2121 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9388_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m11085(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2121 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9390_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m11086(__this, ___key, method) (( bool (*) (Dictionary_2_t2121 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9392_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m11087(__this, ___key, method) (( void (*) (Dictionary_2_t2121 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9394_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11088(__this, method) (( Object_t * (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9396_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11089(__this, method) (( bool (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9398_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11090(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2121 *, KeyValuePair_2_t2124 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9400_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11091(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2121 *, KeyValuePair_2_t2124 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9402_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11092(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2121 *, KeyValuePair_2U5BU5D_t2367*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9404_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11093(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2121 *, KeyValuePair_2_t2124 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9406_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11094(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2121 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9408_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11095(__this, method) (( Object_t * (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9410_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11096(__this, method) (( Object_t* (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9412_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11097(__this, method) (( Object_t * (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9414_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_Count()
#define Dictionary_2_get_Count_m11098(__this, method) (( int32_t (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_get_Count_m9416_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_Item(TKey)
#define Dictionary_2_get_Item_m11099(__this, ___key, method) (( Object_t* (*) (Dictionary_2_t2121 *, Type_t *, const MethodInfo*))Dictionary_2_get_Item_m9418_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m11100(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2121 *, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_set_Item_m9420_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m11101(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2121 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9422_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m11102(__this, ___size, method) (( void (*) (Dictionary_2_t2121 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9424_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m11103(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2121 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9426_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m11104(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2124  (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_make_pair_m9428_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m11105(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_pick_key_m9430_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m11106(__this /* static, unused */, ___key, ___value, method) (( Object_t* (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_pick_value_m9432_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m11107(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2121 *, KeyValuePair_2U5BU5D_t2367*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9434_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::Resize()
#define Dictionary_2_Resize_m11108(__this, method) (( void (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_Resize_m9436_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::Add(TKey,TValue)
#define Dictionary_2_Add_m11109(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2121 *, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_Add_m9438_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::Clear()
#define Dictionary_2_Clear_m11110(__this, method) (( void (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_Clear_m9440_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m11111(__this, ___key, method) (( bool (*) (Dictionary_2_t2121 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9442_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m11112(__this, ___value, method) (( bool (*) (Dictionary_2_t2121 *, Object_t*, const MethodInfo*))Dictionary_2_ContainsValue_m9444_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m11113(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2121 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m9446_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m11114(__this, ___sender, method) (( void (*) (Dictionary_2_t2121 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9448_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::Remove(TKey)
#define Dictionary_2_Remove_m11115(__this, ___key, method) (( bool (*) (Dictionary_2_t2121 *, Type_t *, const MethodInfo*))Dictionary_2_Remove_m9450_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m11116(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2121 *, Type_t *, Object_t**, const MethodInfo*))Dictionary_2_TryGetValue_m9452_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_Keys()
#define Dictionary_2_get_Keys_m11117(__this, method) (( KeyCollection_t2369 * (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_get_Keys_m9454_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::get_Values()
#define Dictionary_2_get_Values_m11118(__this, method) (( ValueCollection_t2370 * (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_get_Values_m9455_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m11119(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t2121 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9457_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m11120(__this, ___value, method) (( Object_t* (*) (Dictionary_2_t2121 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9459_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m11121(__this, ___pair, method) (( bool (*) (Dictionary_2_t2121 *, KeyValuePair_2_t2124 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9461_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m11122(__this, method) (( Enumerator_t2371  (*) (Dictionary_2_t2121 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9463_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m11123(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t658  (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9465_gshared)(__this /* static, unused */, ___key, ___value, method)

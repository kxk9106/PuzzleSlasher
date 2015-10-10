#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1997;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2000;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2004;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1995;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2304;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2132;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2305;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t657;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9371_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9371(__this, method) (( void (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2__ctor_m9371_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9372_gshared (Dictionary_2_t1997 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9372(__this, ___comparer, method) (( void (*) (Dictionary_2_t1997 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9372_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9374_gshared (Dictionary_2_t1997 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9374(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1997 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9374_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9376_gshared (Dictionary_2_t1997 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9376(__this, ___capacity, method) (( void (*) (Dictionary_2_t1997 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9376_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9378_gshared (Dictionary_2_t1997 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9378(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1997 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9378_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9380_gshared (Dictionary_2_t1997 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9380(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1997 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m9380_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9382_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9382(__this, method) (( Object_t* (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9382_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9384_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9384(__this, method) (( Object_t* (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9384_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9386_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9386(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9386_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9388_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9388(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1997 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9388_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9390_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9390(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1997 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9390_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9392_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9392(__this, ___key, method) (( bool (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9392_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9394_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9394(__this, ___key, method) (( void (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9394_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9396_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9396(__this, method) (( Object_t * (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9396_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9398_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9398(__this, method) (( bool (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9398_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9400_gshared (Dictionary_2_t1997 * __this, KeyValuePair_2_t1998  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9400(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1997 *, KeyValuePair_2_t1998 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9400_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9402_gshared (Dictionary_2_t1997 * __this, KeyValuePair_2_t1998  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9402(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1997 *, KeyValuePair_2_t1998 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9402_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9404_gshared (Dictionary_2_t1997 * __this, KeyValuePair_2U5BU5D_t2132* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9404(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1997 *, KeyValuePair_2U5BU5D_t2132*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9404_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9406_gshared (Dictionary_2_t1997 * __this, KeyValuePair_2_t1998  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9406(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1997 *, KeyValuePair_2_t1998 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9406_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9408_gshared (Dictionary_2_t1997 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9408(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1997 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9408_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9410_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9410(__this, method) (( Object_t * (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9410_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9412_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9412(__this, method) (( Object_t* (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9412_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9414_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9414(__this, method) (( Object_t * (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9414_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9416_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9416(__this, method) (( int32_t (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_get_Count_m9416_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9418_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9418(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9418_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9420_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9420(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1997 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9420_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9422_gshared (Dictionary_2_t1997 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9422(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1997 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9422_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9424_gshared (Dictionary_2_t1997 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9424(__this, ___size, method) (( void (*) (Dictionary_2_t1997 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9424_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9426_gshared (Dictionary_2_t1997 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9426(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1997 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9426_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1998  Dictionary_2_make_pair_m9428_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9428(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1998  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9428_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9430_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9430(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9430_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9432_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9432(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9432_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9434_gshared (Dictionary_2_t1997 * __this, KeyValuePair_2U5BU5D_t2132* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9434(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1997 *, KeyValuePair_2U5BU5D_t2132*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9434_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9436_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9436(__this, method) (( void (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_Resize_m9436_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9438_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9438(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1997 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m9438_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9440_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9440(__this, method) (( void (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_Clear_m9440_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9442_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9442(__this, ___key, method) (( bool (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9442_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9444_gshared (Dictionary_2_t1997 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9444(__this, ___value, method) (( bool (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9444_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9446_gshared (Dictionary_2_t1997 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9446(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1997 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m9446_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9448_gshared (Dictionary_2_t1997 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9448(__this, ___sender, method) (( void (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9448_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9450_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9450(__this, ___key, method) (( bool (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9450_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9452_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9452(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1997 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9452_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2000 * Dictionary_2_get_Keys_m9454_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9454(__this, method) (( KeyCollection_t2000 * (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_get_Keys_m9454_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2004 * Dictionary_2_get_Values_m9455_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9455(__this, method) (( ValueCollection_t2004 * (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_get_Values_m9455_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9457_gshared (Dictionary_2_t1997 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9457(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9457_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9459_gshared (Dictionary_2_t1997 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9459(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1997 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9459_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9461_gshared (Dictionary_2_t1997 * __this, KeyValuePair_2_t1998  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9461(__this, ___pair, method) (( bool (*) (Dictionary_2_t1997 *, KeyValuePair_2_t1998 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9461_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2002  Dictionary_2_GetEnumerator_m9463_gshared (Dictionary_2_t1997 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9463(__this, method) (( Enumerator_t2002  (*) (Dictionary_2_t1997 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9463_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t658  Dictionary_2_U3CCopyToU3Em__0_m9465_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9465(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t658  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9465_gshared)(__this /* static, unused */, ___key, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1982;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2301;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t312;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1987;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1991;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1979;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t2306;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t326;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2307;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2308;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t667;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9138_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9138(__this, method) (( void (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2__ctor_m9138_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9140_gshared (Dictionary_2_t1982 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9140(__this, ___comparer, method) (( void (*) (Dictionary_2_t1982 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9140_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9142_gshared (Dictionary_2_t1982 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9142(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1982 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9142_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9144_gshared (Dictionary_2_t1982 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9144(__this, ___capacity, method) (( void (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9144_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9146_gshared (Dictionary_2_t1982 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9146(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1982 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9146_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9148_gshared (Dictionary_2_t1982 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9148(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1982 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2__ctor_m9148_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9150_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9150(__this, method) (( Object_t* (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9150_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9152_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9152(__this, method) (( Object_t* (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9152_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9154_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9154(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9154_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9156_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9156(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9156_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9158_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9158(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9158_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9160_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9160(__this, ___key, method) (( bool (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9160_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9162_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9162(__this, ___key, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9162_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9164_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9164(__this, method) (( Object_t * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9164_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9166_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9166(__this, method) (( bool (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9166_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9168_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1983  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9168(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1983 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9168_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9170_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1983  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9170(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1983 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9170_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9172_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2U5BU5D_t2307* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9172(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, KeyValuePair_2U5BU5D_t2307*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9172_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9174_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1983  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9174(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1983 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9174_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9176_gshared (Dictionary_2_t1982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9176(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9176_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9178_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9178(__this, method) (( Object_t * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9178_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9180_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9180(__this, method) (( Object_t* (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9180_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9182_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9182(__this, method) (( Object_t * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9182_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9184_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9184(__this, method) (( int32_t (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_get_Count_m9184_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9186_gshared (Dictionary_2_t1982 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9186(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m9186_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9188_gshared (Dictionary_2_t1982 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9188(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9188_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9190_gshared (Dictionary_2_t1982 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9190(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1982 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9190_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9192_gshared (Dictionary_2_t1982 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9192(__this, ___size, method) (( void (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9192_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9194_gshared (Dictionary_2_t1982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9194(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9194_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1983  Dictionary_2_make_pair_m9196_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9196(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1983  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9196_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m9198_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9198(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9198_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9200_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9200(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9200_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9202_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2U5BU5D_t2307* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9202(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, KeyValuePair_2U5BU5D_t2307*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9202_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9204_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9204(__this, method) (( void (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_Resize_m9204_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9206_gshared (Dictionary_2_t1982 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9206(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9206_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9208_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9208(__this, method) (( void (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_Clear_m9208_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9210_gshared (Dictionary_2_t1982 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9210(__this, ___key, method) (( bool (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m9210_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9212_gshared (Dictionary_2_t1982 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9212(__this, ___value, method) (( bool (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9212_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9214_gshared (Dictionary_2_t1982 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9214(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1982 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2_GetObjectData_m9214_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9216_gshared (Dictionary_2_t1982 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9216(__this, ___sender, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9216_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9218_gshared (Dictionary_2_t1982 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9218(__this, ___key, method) (( bool (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m9218_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9220_gshared (Dictionary_2_t1982 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9220(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1982 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9220_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1987 * Dictionary_2_get_Keys_m9222_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9222(__this, method) (( KeyCollection_t1987 * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_get_Keys_m9222_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1991 * Dictionary_2_get_Values_m9224_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9224(__this, method) (( ValueCollection_t1991 * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_get_Values_m9224_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m9226_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9226(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9226_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9228_gshared (Dictionary_2_t1982 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9228(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9228_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9230_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1983  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9230(__this, ___pair, method) (( bool (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1983 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9230_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1989  Dictionary_2_GetEnumerator_m9232_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9232(__this, method) (( Enumerator_t1989  (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9232_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t668  Dictionary_2_U3CCopyToU3Em__0_m9234_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9234(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t668  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9234_gshared)(__this /* static, unused */, ___key, ___value, method)

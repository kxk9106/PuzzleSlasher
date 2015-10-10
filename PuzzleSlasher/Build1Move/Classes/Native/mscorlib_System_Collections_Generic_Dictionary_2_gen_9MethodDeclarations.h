#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1970;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2287;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1975;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1979;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1967;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t2292;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2293;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2294;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t657;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9078_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9078(__this, method) (( void (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2__ctor_m9078_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9080_gshared (Dictionary_2_t1970 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9080(__this, ___comparer, method) (( void (*) (Dictionary_2_t1970 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9080_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9082_gshared (Dictionary_2_t1970 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9082(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1970 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9082_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9084_gshared (Dictionary_2_t1970 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9084(__this, ___capacity, method) (( void (*) (Dictionary_2_t1970 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9084_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9086_gshared (Dictionary_2_t1970 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9086(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1970 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9086_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9088_gshared (Dictionary_2_t1970 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9088(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1970 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m9088_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9090_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9090(__this, method) (( Object_t* (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9090_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9092_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9092(__this, method) (( Object_t* (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9092_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9094_gshared (Dictionary_2_t1970 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9094(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1970 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9094_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9096_gshared (Dictionary_2_t1970 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9096(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1970 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9096_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9098_gshared (Dictionary_2_t1970 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9098(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1970 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9098_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9100_gshared (Dictionary_2_t1970 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9100(__this, ___key, method) (( bool (*) (Dictionary_2_t1970 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9100_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9102_gshared (Dictionary_2_t1970 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9102(__this, ___key, method) (( void (*) (Dictionary_2_t1970 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9102_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9104_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9104(__this, method) (( Object_t * (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9104_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9106_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9106(__this, method) (( bool (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9106_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9108_gshared (Dictionary_2_t1970 * __this, KeyValuePair_2_t1971  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9108(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1970 *, KeyValuePair_2_t1971 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9108_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9110_gshared (Dictionary_2_t1970 * __this, KeyValuePair_2_t1971  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9110(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1970 *, KeyValuePair_2_t1971 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9110_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9112_gshared (Dictionary_2_t1970 * __this, KeyValuePair_2U5BU5D_t2293* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9112(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1970 *, KeyValuePair_2U5BU5D_t2293*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9112_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9114_gshared (Dictionary_2_t1970 * __this, KeyValuePair_2_t1971  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9114(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1970 *, KeyValuePair_2_t1971 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9114_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9116_gshared (Dictionary_2_t1970 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9116(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1970 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9116_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9118_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9118(__this, method) (( Object_t * (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9118_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9120_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9120(__this, method) (( Object_t* (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9120_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9122_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9122(__this, method) (( Object_t * (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9122_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9124_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9124(__this, method) (( int32_t (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_get_Count_m9124_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9126_gshared (Dictionary_2_t1970 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9126(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1970 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m9126_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9128_gshared (Dictionary_2_t1970 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9128(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1970 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9128_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9130_gshared (Dictionary_2_t1970 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9130(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1970 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9130_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9132_gshared (Dictionary_2_t1970 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9132(__this, ___size, method) (( void (*) (Dictionary_2_t1970 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9132_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9134_gshared (Dictionary_2_t1970 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9134(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1970 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9134_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1971  Dictionary_2_make_pair_m9136_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9136(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1971  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9136_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m9138_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9138(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9138_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9140_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9140(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9140_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9142_gshared (Dictionary_2_t1970 * __this, KeyValuePair_2U5BU5D_t2293* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9142(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1970 *, KeyValuePair_2U5BU5D_t2293*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9142_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9144_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9144(__this, method) (( void (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_Resize_m9144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9146_gshared (Dictionary_2_t1970 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9146(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1970 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9146_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9148_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9148(__this, method) (( void (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_Clear_m9148_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9150_gshared (Dictionary_2_t1970 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9150(__this, ___key, method) (( bool (*) (Dictionary_2_t1970 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m9150_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9152_gshared (Dictionary_2_t1970 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9152(__this, ___value, method) (( bool (*) (Dictionary_2_t1970 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9152_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9154_gshared (Dictionary_2_t1970 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9154(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1970 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m9154_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9156_gshared (Dictionary_2_t1970 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9156(__this, ___sender, method) (( void (*) (Dictionary_2_t1970 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9156_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9158_gshared (Dictionary_2_t1970 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9158(__this, ___key, method) (( bool (*) (Dictionary_2_t1970 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m9158_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9160_gshared (Dictionary_2_t1970 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9160(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1970 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9160_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1975 * Dictionary_2_get_Keys_m9162_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9162(__this, method) (( KeyCollection_t1975 * (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_get_Keys_m9162_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1979 * Dictionary_2_get_Values_m9164_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9164(__this, method) (( ValueCollection_t1979 * (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_get_Values_m9164_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m9166_gshared (Dictionary_2_t1970 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9166(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1970 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9166_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9168_gshared (Dictionary_2_t1970 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9168(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1970 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9168_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9170_gshared (Dictionary_2_t1970 * __this, KeyValuePair_2_t1971  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9170(__this, ___pair, method) (( bool (*) (Dictionary_2_t1970 *, KeyValuePair_2_t1971 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9170_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1977  Dictionary_2_GetEnumerator_m9172_gshared (Dictionary_2_t1970 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9172(__this, method) (( Enumerator_t1977  (*) (Dictionary_2_t1970 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9172_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t658  Dictionary_2_U3CCopyToU3Em__0_m9174_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9174(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t658  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9174_gshared)(__this /* static, unused */, ___key, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t604;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2301;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2220;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2224;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1979;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t2425;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t326;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2426;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2427;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t667;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12053_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12053(__this, method) (( void (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2__ctor_m12053_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12054_gshared (Dictionary_2_t604 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12054(__this, ___comparer, method) (( void (*) (Dictionary_2_t604 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12054_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12055_gshared (Dictionary_2_t604 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m12055(__this, ___dictionary, method) (( void (*) (Dictionary_2_t604 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12055_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12056_gshared (Dictionary_2_t604 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12056(__this, ___capacity, method) (( void (*) (Dictionary_2_t604 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12056_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12057_gshared (Dictionary_2_t604 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12057(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t604 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12057_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12058_gshared (Dictionary_2_t604 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12058(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t604 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2__ctor_m12058_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12059_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12059(__this, method) (( Object_t* (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12059_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12060_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12060(__this, method) (( Object_t* (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12061_gshared (Dictionary_2_t604 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12061(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t604 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12061_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12062_gshared (Dictionary_2_t604 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12062(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t604 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12062_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12063_gshared (Dictionary_2_t604 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12063(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t604 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12063_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12064_gshared (Dictionary_2_t604 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12064(__this, ___key, method) (( bool (*) (Dictionary_2_t604 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12064_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12065_gshared (Dictionary_2_t604 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12065(__this, ___key, method) (( void (*) (Dictionary_2_t604 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12065_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12066_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12066(__this, method) (( Object_t * (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12066_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12067_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12067(__this, method) (( bool (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12067_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12068_gshared (Dictionary_2_t604 * __this, KeyValuePair_2_t2218  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12068(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t604 *, KeyValuePair_2_t2218 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12068_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12069_gshared (Dictionary_2_t604 * __this, KeyValuePair_2_t2218  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12069(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t604 *, KeyValuePair_2_t2218 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12069_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12070_gshared (Dictionary_2_t604 * __this, KeyValuePair_2U5BU5D_t2426* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12070(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t604 *, KeyValuePair_2U5BU5D_t2426*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12070_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12071_gshared (Dictionary_2_t604 * __this, KeyValuePair_2_t2218  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12071(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t604 *, KeyValuePair_2_t2218 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12071_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12072_gshared (Dictionary_2_t604 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12072(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t604 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12072_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12073_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12073(__this, method) (( Object_t * (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12073_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12074_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12074(__this, method) (( Object_t* (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12074_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12075_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12075(__this, method) (( Object_t * (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12075_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12076_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12076(__this, method) (( int32_t (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_get_Count_m12076_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12077_gshared (Dictionary_2_t604 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12077(__this, ___key, method) (( int32_t (*) (Dictionary_2_t604 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12077_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12078_gshared (Dictionary_2_t604 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12078(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t604 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12078_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12079_gshared (Dictionary_2_t604 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12079(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t604 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12079_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12080_gshared (Dictionary_2_t604 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12080(__this, ___size, method) (( void (*) (Dictionary_2_t604 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12080_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12081_gshared (Dictionary_2_t604 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12081(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t604 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12081_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2218  Dictionary_2_make_pair_m12082_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12082(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2218  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12082_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m12083_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12083(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m12083_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12084_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12084(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12084_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12085_gshared (Dictionary_2_t604 * __this, KeyValuePair_2U5BU5D_t2426* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12085(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t604 *, KeyValuePair_2U5BU5D_t2426*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12085_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12086_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12086(__this, method) (( void (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_Resize_m12086_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12087_gshared (Dictionary_2_t604 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12087(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t604 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m12087_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12088_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12088(__this, method) (( void (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_Clear_m12088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12089_gshared (Dictionary_2_t604 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12089(__this, ___key, method) (( bool (*) (Dictionary_2_t604 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12089_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12090_gshared (Dictionary_2_t604 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12090(__this, ___value, method) (( bool (*) (Dictionary_2_t604 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12090_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12091_gshared (Dictionary_2_t604 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12091(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t604 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2_GetObjectData_m12091_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12092_gshared (Dictionary_2_t604 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12092(__this, ___sender, method) (( void (*) (Dictionary_2_t604 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12092_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12093_gshared (Dictionary_2_t604 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12093(__this, ___key, method) (( bool (*) (Dictionary_2_t604 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12093_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12094_gshared (Dictionary_2_t604 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12094(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t604 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12094_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t2220 * Dictionary_2_get_Keys_m12095_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12095(__this, method) (( KeyCollection_t2220 * (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_get_Keys_m12095_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2224 * Dictionary_2_get_Values_m12096_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12096(__this, method) (( ValueCollection_t2224 * (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_get_Values_m12096_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12097_gshared (Dictionary_2_t604 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12097(__this, ___key, method) (( int32_t (*) (Dictionary_2_t604 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12097_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12098_gshared (Dictionary_2_t604 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12098(__this, ___value, method) (( int32_t (*) (Dictionary_2_t604 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12098_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12099_gshared (Dictionary_2_t604 * __this, KeyValuePair_2_t2218  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12099(__this, ___pair, method) (( bool (*) (Dictionary_2_t604 *, KeyValuePair_2_t2218 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12099_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2222  Dictionary_2_GetEnumerator_m12100_gshared (Dictionary_2_t604 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12100(__this, method) (( Enumerator_t2222  (*) (Dictionary_2_t604 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12100_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t668  Dictionary_2_U3CCopyToU3Em__0_m12101_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12101(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t668  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12101_gshared)(__this /* static, unused */, ___key, ___value, method)

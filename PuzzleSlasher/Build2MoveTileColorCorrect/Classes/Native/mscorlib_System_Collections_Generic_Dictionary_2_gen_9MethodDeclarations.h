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
extern "C" void Dictionary_2__ctor_m9135_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9135(__this, method) (( void (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2__ctor_m9135_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9137_gshared (Dictionary_2_t1982 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9137(__this, ___comparer, method) (( void (*) (Dictionary_2_t1982 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9137_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9139_gshared (Dictionary_2_t1982 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9139(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1982 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9139_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9141_gshared (Dictionary_2_t1982 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9141(__this, ___capacity, method) (( void (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9143_gshared (Dictionary_2_t1982 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9143(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1982 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9143_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9145_gshared (Dictionary_2_t1982 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9145(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1982 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2__ctor_m9145_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9147_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9147(__this, method) (( Object_t* (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9147_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9149_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9149(__this, method) (( Object_t* (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9149_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9151_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9151(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9151_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9153_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9153(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9153_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9155_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9155(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9155_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9157_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9157(__this, ___key, method) (( bool (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9157_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9159_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9159(__this, ___key, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9159_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9161_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9161(__this, method) (( Object_t * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9161_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9163_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9163(__this, method) (( bool (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9165_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1983  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9165(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1983 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9165_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9167_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1983  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9167(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1983 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9167_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9169_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2U5BU5D_t2307* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9169(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, KeyValuePair_2U5BU5D_t2307*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9169_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9171_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1983  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9171(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1983 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9171_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9173_gshared (Dictionary_2_t1982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9173(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9173_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9175_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9175(__this, method) (( Object_t * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9175_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9177_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9177(__this, method) (( Object_t* (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9177_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9179_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9179(__this, method) (( Object_t * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9179_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9181_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9181(__this, method) (( int32_t (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_get_Count_m9181_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9183_gshared (Dictionary_2_t1982 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9183(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m9183_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9185_gshared (Dictionary_2_t1982 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9185(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9185_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9187_gshared (Dictionary_2_t1982 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9187(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1982 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9187_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9189_gshared (Dictionary_2_t1982 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9189(__this, ___size, method) (( void (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9189_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9191_gshared (Dictionary_2_t1982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9191(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9191_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1983  Dictionary_2_make_pair_m9193_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9193(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1983  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9193_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m9195_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9195(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9195_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9197_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9197(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9197_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9199_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2U5BU5D_t2307* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9199(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, KeyValuePair_2U5BU5D_t2307*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9199_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9201_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9201(__this, method) (( void (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_Resize_m9201_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9203_gshared (Dictionary_2_t1982 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9203(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9203_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9205_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9205(__this, method) (( void (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_Clear_m9205_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9207_gshared (Dictionary_2_t1982 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9207(__this, ___key, method) (( bool (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m9207_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9209_gshared (Dictionary_2_t1982 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9209(__this, ___value, method) (( bool (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9209_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9211_gshared (Dictionary_2_t1982 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9211(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1982 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2_GetObjectData_m9211_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9213_gshared (Dictionary_2_t1982 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9213(__this, ___sender, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9213_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9215_gshared (Dictionary_2_t1982 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9215(__this, ___key, method) (( bool (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m9215_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9217_gshared (Dictionary_2_t1982 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9217(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1982 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9217_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1987 * Dictionary_2_get_Keys_m9219_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9219(__this, method) (( KeyCollection_t1987 * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_get_Keys_m9219_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1991 * Dictionary_2_get_Values_m9221_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9221(__this, method) (( ValueCollection_t1991 * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_get_Values_m9221_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m9223_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9223(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9223_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9225_gshared (Dictionary_2_t1982 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9225(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9225_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9227_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1983  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9227(__this, ___pair, method) (( bool (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1983 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9227_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1989  Dictionary_2_GetEnumerator_m9229_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9229(__this, method) (( Enumerator_t1989  (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9229_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t668  Dictionary_2_U3CCopyToU3Em__0_m9231_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9231(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t668  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9231_gshared)(__this /* static, unused */, ___key, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2009;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t312;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2012;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2016;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2007;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2318;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t326;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2145;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2319;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t667;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9428_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9428(__this, method) (( void (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2__ctor_m9428_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9429_gshared (Dictionary_2_t2009 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9429(__this, ___comparer, method) (( void (*) (Dictionary_2_t2009 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9429_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9431_gshared (Dictionary_2_t2009 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9431(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2009 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9431_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9433_gshared (Dictionary_2_t2009 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9433(__this, ___capacity, method) (( void (*) (Dictionary_2_t2009 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9433_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9435_gshared (Dictionary_2_t2009 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9435(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2009 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9435_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9437_gshared (Dictionary_2_t2009 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9437(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2009 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2__ctor_m9437_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9439_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9439(__this, method) (( Object_t* (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9439_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9441_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9441(__this, method) (( Object_t* (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9441_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9443_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9443(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9443_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9445_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9445(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2009 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9445_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9447_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9447(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2009 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9447_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9449_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9449(__this, ___key, method) (( bool (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9449_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9451_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9451(__this, ___key, method) (( void (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9451_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9453_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9453(__this, method) (( Object_t * (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9453_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9455_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9455(__this, method) (( bool (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9455_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9457_gshared (Dictionary_2_t2009 * __this, KeyValuePair_2_t2010  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9457(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2009 *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9457_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9459_gshared (Dictionary_2_t2009 * __this, KeyValuePair_2_t2010  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9459(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2009 *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9459_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9461_gshared (Dictionary_2_t2009 * __this, KeyValuePair_2U5BU5D_t2145* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9461(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2009 *, KeyValuePair_2U5BU5D_t2145*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9461_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9463_gshared (Dictionary_2_t2009 * __this, KeyValuePair_2_t2010  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9463(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2009 *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9463_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9465_gshared (Dictionary_2_t2009 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9465(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2009 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9465_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9467_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9467(__this, method) (( Object_t * (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9467_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9469_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9469(__this, method) (( Object_t* (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9469_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9471_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9471(__this, method) (( Object_t * (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9471_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9473_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9473(__this, method) (( int32_t (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_get_Count_m9473_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9475_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9475(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9475_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9477_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9477(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2009 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9477_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9479_gshared (Dictionary_2_t2009 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9479(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2009 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9479_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9481_gshared (Dictionary_2_t2009 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9481(__this, ___size, method) (( void (*) (Dictionary_2_t2009 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9481_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9483_gshared (Dictionary_2_t2009 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9483(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2009 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9483_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2010  Dictionary_2_make_pair_m9485_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9485(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2010  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9485_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9487_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9487(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9487_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9489_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9489(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9489_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9491_gshared (Dictionary_2_t2009 * __this, KeyValuePair_2U5BU5D_t2145* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9491(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2009 *, KeyValuePair_2U5BU5D_t2145*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9491_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9493_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9493(__this, method) (( void (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_Resize_m9493_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9495_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9495(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2009 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m9495_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9497_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9497(__this, method) (( void (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_Clear_m9497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9499_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9499(__this, ___key, method) (( bool (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9499_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9501_gshared (Dictionary_2_t2009 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9501(__this, ___value, method) (( bool (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9501_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9503_gshared (Dictionary_2_t2009 * __this, SerializationInfo_t326 * ___info, StreamingContext_t327  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9503(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2009 *, SerializationInfo_t326 *, StreamingContext_t327 , const MethodInfo*))Dictionary_2_GetObjectData_m9503_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9505_gshared (Dictionary_2_t2009 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9505(__this, ___sender, method) (( void (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9505_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9507_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9507(__this, ___key, method) (( bool (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9507_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9509_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9509(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2009 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9509_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2012 * Dictionary_2_get_Keys_m9511_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9511(__this, method) (( KeyCollection_t2012 * (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_get_Keys_m9511_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2016 * Dictionary_2_get_Values_m9512_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9512(__this, method) (( ValueCollection_t2016 * (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_get_Values_m9512_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9514_gshared (Dictionary_2_t2009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9514(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9514_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9516_gshared (Dictionary_2_t2009 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9516(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2009 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9516_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9518_gshared (Dictionary_2_t2009 * __this, KeyValuePair_2_t2010  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9518(__this, ___pair, method) (( bool (*) (Dictionary_2_t2009 *, KeyValuePair_2_t2010 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9518_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2014  Dictionary_2_GetEnumerator_m9520_gshared (Dictionary_2_t2009 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9520(__this, method) (( Enumerator_t2014  (*) (Dictionary_2_t2009 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9520_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t668  Dictionary_2_U3CCopyToU3Em__0_m9522_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9522(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t668  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9522_gshared)(__this /* static, unused */, ___key, ___value, method)

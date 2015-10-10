#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2086;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t2342;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t303;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t2090;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t2094;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t2084;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t2343;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t317;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t2344;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t2345;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t657;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10505_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10505(__this, method) (( void (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2__ctor_m10505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10507_gshared (Dictionary_2_t2086 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10507(__this, ___comparer, method) (( void (*) (Dictionary_2_t2086 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10507_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10509_gshared (Dictionary_2_t2086 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10509(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2086 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10509_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10511_gshared (Dictionary_2_t2086 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10511(__this, ___capacity, method) (( void (*) (Dictionary_2_t2086 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10511_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10513_gshared (Dictionary_2_t2086 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10513(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2086 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10513_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10515_gshared (Dictionary_2_t2086 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10515(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2086 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2__ctor_m10515_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10517_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10517(__this, method) (( Object_t* (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10517_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10519_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10519(__this, method) (( Object_t* (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10519_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10521_gshared (Dictionary_2_t2086 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10521(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2086 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10521_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10523_gshared (Dictionary_2_t2086 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10523(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2086 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10523_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10525_gshared (Dictionary_2_t2086 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10525(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2086 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10525_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10527_gshared (Dictionary_2_t2086 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10527(__this, ___key, method) (( bool (*) (Dictionary_2_t2086 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10527_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10529_gshared (Dictionary_2_t2086 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10529(__this, ___key, method) (( void (*) (Dictionary_2_t2086 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10529_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10531_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10531(__this, method) (( Object_t * (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10531_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10533_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10533(__this, method) (( bool (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10533_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10535_gshared (Dictionary_2_t2086 * __this, KeyValuePair_2_t2087  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10535(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2086 *, KeyValuePair_2_t2087 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10535_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10537_gshared (Dictionary_2_t2086 * __this, KeyValuePair_2_t2087  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10537(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2086 *, KeyValuePair_2_t2087 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10537_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10539_gshared (Dictionary_2_t2086 * __this, KeyValuePair_2U5BU5D_t2344* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10539(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2086 *, KeyValuePair_2U5BU5D_t2344*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10539_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10541_gshared (Dictionary_2_t2086 * __this, KeyValuePair_2_t2087  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10541(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2086 *, KeyValuePair_2_t2087 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10541_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10543_gshared (Dictionary_2_t2086 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10543(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2086 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10543_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10545_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10545(__this, method) (( Object_t * (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10545_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10547_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10547(__this, method) (( Object_t* (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10547_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10549_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10549(__this, method) (( Object_t * (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10549_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10551_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10551(__this, method) (( int32_t (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_get_Count_m10551_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m10553_gshared (Dictionary_2_t2086 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10553(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2086 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m10553_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10555_gshared (Dictionary_2_t2086 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10555(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2086 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m10555_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10557_gshared (Dictionary_2_t2086 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10557(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2086 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10557_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10559_gshared (Dictionary_2_t2086 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10559(__this, ___size, method) (( void (*) (Dictionary_2_t2086 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10559_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10561_gshared (Dictionary_2_t2086 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10561(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2086 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10561_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2087  Dictionary_2_make_pair_m10563_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10563(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2087  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m10563_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m10565_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10565(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m10565_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10567_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10567(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m10567_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10569_gshared (Dictionary_2_t2086 * __this, KeyValuePair_2U5BU5D_t2344* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10569(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2086 *, KeyValuePair_2U5BU5D_t2344*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10569_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m10571_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10571(__this, method) (( void (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_Resize_m10571_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10573_gshared (Dictionary_2_t2086 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10573(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2086 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m10573_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10575_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10575(__this, method) (( void (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10577_gshared (Dictionary_2_t2086 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10577(__this, ___key, method) (( bool (*) (Dictionary_2_t2086 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m10577_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10579_gshared (Dictionary_2_t2086 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10579(__this, ___value, method) (( bool (*) (Dictionary_2_t2086 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m10579_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10581_gshared (Dictionary_2_t2086 * __this, SerializationInfo_t317 * ___info, StreamingContext_t318  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10581(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2086 *, SerializationInfo_t317 *, StreamingContext_t318 , const MethodInfo*))Dictionary_2_GetObjectData_m10581_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10583_gshared (Dictionary_2_t2086 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10583(__this, ___sender, method) (( void (*) (Dictionary_2_t2086 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10583_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10585_gshared (Dictionary_2_t2086 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10585(__this, ___key, method) (( bool (*) (Dictionary_2_t2086 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m10585_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10587_gshared (Dictionary_2_t2086 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10587(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2086 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10587_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t2090 * Dictionary_2_get_Keys_m10589_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10589(__this, method) (( KeyCollection_t2090 * (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_get_Keys_m10589_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t2094 * Dictionary_2_get_Values_m10591_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10591(__this, method) (( ValueCollection_t2094 * (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_get_Values_m10591_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m10593_gshared (Dictionary_2_t2086 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10593(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2086 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10593_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10595_gshared (Dictionary_2_t2086 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10595(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2086 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10595_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10597_gshared (Dictionary_2_t2086 * __this, KeyValuePair_2_t2087  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10597(__this, ___pair, method) (( bool (*) (Dictionary_2_t2086 *, KeyValuePair_2_t2087 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10597_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t2092  Dictionary_2_GetEnumerator_m10599_gshared (Dictionary_2_t2086 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10599(__this, method) (( Enumerator_t2092  (*) (Dictionary_2_t2086 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10599_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t658  Dictionary_2_U3CCopyToU3Em__0_m10601_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10601(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t658  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10601_gshared)(__this /* static, unused */, ___key, ___value, method)

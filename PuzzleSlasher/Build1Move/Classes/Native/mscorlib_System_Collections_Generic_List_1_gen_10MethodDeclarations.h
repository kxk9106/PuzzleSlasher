#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t266;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t265;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t2397;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t2171;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1336(__this, method) (( void (*) (List_1_t266 *, const MethodInfo*))List_1__ctor_m1264_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m11651(__this, ___capacity, method) (( void (*) (List_1_t266 *, int32_t, const MethodInfo*))List_1__ctor_m8991_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m11652(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8993_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11653(__this, method) (( Object_t* (*) (List_1_t266 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11654(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t266 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11655(__this, method) (( Object_t * (*) (List_1_t266 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1456_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11656(__this, ___item, method) (( int32_t (*) (List_1_t266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1462_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11657(__this, ___item, method) (( bool (*) (List_1_t266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1464_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11658(__this, ___item, method) (( int32_t (*) (List_1_t266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1465_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11659(__this, ___index, ___item, method) (( void (*) (List_1_t266 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1466_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11660(__this, ___item, method) (( void (*) (List_1_t266 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1467_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11661(__this, method) (( bool (*) (List_1_t266 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1469_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11662(__this, method) (( Object_t * (*) (List_1_t266 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1458_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11663(__this, ___index, method) (( Object_t * (*) (List_1_t266 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1460_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11664(__this, ___index, ___value, method) (( void (*) (List_1_t266 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1461_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m11665(__this, ___item, method) (( void (*) (List_1_t266 *, PersistentCall_t265 *, const MethodInfo*))List_1_Add_m1470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11666(__this, ___newCount, method) (( void (*) (List_1_t266 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9008_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m11667(__this, method) (( void (*) (List_1_t266 *, const MethodInfo*))List_1_Clear_m1463_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m11668(__this, ___item, method) (( bool (*) (List_1_t266 *, PersistentCall_t265 *, const MethodInfo*))List_1_Contains_m1471_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11669(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t266 *, PersistentCallU5BU5D_t2171*, int32_t, const MethodInfo*))List_1_CopyTo_m1472_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m11670(__this, method) (( Enumerator_t2172  (*) (List_1_t266 *, const MethodInfo*))List_1_GetEnumerator_m9012_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m11671(__this, ___item, method) (( int32_t (*) (List_1_t266 *, PersistentCall_t265 *, const MethodInfo*))List_1_IndexOf_m1475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11672(__this, ___start, ___delta, method) (( void (*) (List_1_t266 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9015_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11673(__this, ___index, method) (( void (*) (List_1_t266 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9017_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m11674(__this, ___index, ___item, method) (( void (*) (List_1_t266 *, int32_t, PersistentCall_t265 *, const MethodInfo*))List_1_Insert_m1476_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m11675(__this, ___item, method) (( bool (*) (List_1_t266 *, PersistentCall_t265 *, const MethodInfo*))List_1_Remove_m1473_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11676(__this, ___index, method) (( void (*) (List_1_t266 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1468_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m11677(__this, method) (( PersistentCallU5BU5D_t2171* (*) (List_1_t266 *, const MethodInfo*))List_1_ToArray_m9022_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m11678(__this, method) (( int32_t (*) (List_1_t266 *, const MethodInfo*))List_1_get_Capacity_m9024_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11679(__this, ___value, method) (( void (*) (List_1_t266 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9026_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m11680(__this, method) (( int32_t (*) (List_1_t266 *, const MethodInfo*))List_1_get_Count_m1457_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m11681(__this, ___index, method) (( PersistentCall_t265 * (*) (List_1_t266 *, int32_t, const MethodInfo*))List_1_get_Item_m1477_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m11682(__this, ___index, ___value, method) (( void (*) (List_1_t266 *, int32_t, PersistentCall_t265 *, const MethodInfo*))List_1_set_Item_m1478_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t275;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t274;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t2411;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t2184;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1354(__this, method) (( void (*) (List_1_t275 *, const MethodInfo*))List_1__ctor_m1282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
#define List_1__ctor_m11713(__this, ___capacity, method) (( void (*) (List_1_t275 *, int32_t, const MethodInfo*))List_1__ctor_m8937_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
#define List_1__cctor_m11714(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8939_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11715(__this, method) (( Object_t* (*) (List_1_t275 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1493_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11716(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t275 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1478_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11717(__this, method) (( Object_t * (*) (List_1_t275 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1475_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11718(__this, ___item, method) (( int32_t (*) (List_1_t275 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1481_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11719(__this, ___item, method) (( bool (*) (List_1_t275 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1483_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11720(__this, ___item, method) (( int32_t (*) (List_1_t275 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1484_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11721(__this, ___index, ___item, method) (( void (*) (List_1_t275 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1485_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11722(__this, ___item, method) (( void (*) (List_1_t275 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1486_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11723(__this, method) (( bool (*) (List_1_t275 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1488_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11724(__this, method) (( Object_t * (*) (List_1_t275 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1477_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11725(__this, ___index, method) (( Object_t * (*) (List_1_t275 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1479_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11726(__this, ___index, ___value, method) (( void (*) (List_1_t275 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
#define List_1_Add_m11727(__this, ___item, method) (( void (*) (List_1_t275 *, PersistentCall_t274 *, const MethodInfo*))List_1_Add_m1489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11728(__this, ___newCount, method) (( void (*) (List_1_t275 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8954_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
#define List_1_Clear_m11729(__this, method) (( void (*) (List_1_t275 *, const MethodInfo*))List_1_Clear_m1482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define List_1_Contains_m11730(__this, ___item, method) (( bool (*) (List_1_t275 *, PersistentCall_t274 *, const MethodInfo*))List_1_Contains_m1490_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11731(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t275 *, PersistentCallU5BU5D_t2184*, int32_t, const MethodInfo*))List_1_CopyTo_m1491_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define List_1_GetEnumerator_m11732(__this, method) (( Enumerator_t2185  (*) (List_1_t275 *, const MethodInfo*))List_1_GetEnumerator_m8959_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define List_1_IndexOf_m11733(__this, ___item, method) (( int32_t (*) (List_1_t275 *, PersistentCall_t274 *, const MethodInfo*))List_1_IndexOf_m1494_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11734(__this, ___start, ___delta, method) (( void (*) (List_1_t275 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8962_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11735(__this, ___index, method) (( void (*) (List_1_t275 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define List_1_Insert_m11736(__this, ___index, ___item, method) (( void (*) (List_1_t275 *, int32_t, PersistentCall_t274 *, const MethodInfo*))List_1_Insert_m1495_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define List_1_Remove_m11737(__this, ___item, method) (( bool (*) (List_1_t275 *, PersistentCall_t274 *, const MethodInfo*))List_1_Remove_m1492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11738(__this, ___index, method) (( void (*) (List_1_t275 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1487_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
#define List_1_ToArray_m11739(__this, method) (( PersistentCallU5BU5D_t2184* (*) (List_1_t275 *, const MethodInfo*))List_1_ToArray_m8969_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
#define List_1_get_Capacity_m11740(__this, method) (( int32_t (*) (List_1_t275 *, const MethodInfo*))List_1_get_Capacity_m8971_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11741(__this, ___value, method) (( void (*) (List_1_t275 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8973_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
#define List_1_get_Count_m11742(__this, method) (( int32_t (*) (List_1_t275 *, const MethodInfo*))List_1_get_Count_m1476_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define List_1_get_Item_m11743(__this, ___index, method) (( PersistentCall_t274 * (*) (List_1_t275 *, int32_t, const MethodInfo*))List_1_get_Item_m1496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m11744(__this, ___index, ___value, method) (( void (*) (List_1_t275 *, int32_t, PersistentCall_t274 *, const MethodInfo*))List_1_set_Item_m1497_gshared)(__this, ___index, ___value, method)

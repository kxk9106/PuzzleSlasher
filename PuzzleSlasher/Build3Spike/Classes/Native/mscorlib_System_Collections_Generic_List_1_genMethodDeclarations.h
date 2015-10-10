#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t1;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t2299;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1953;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m11(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1__ctor_m1285_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define List_1__ctor_m8939(__this, ___capacity, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1__ctor_m8940_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
#define List_1__cctor_m8941(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8942_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8943(__this, method) (( Object_t* (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1496_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m8944(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8945(__this, method) (( Object_t * (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m8946(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1484_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m8947(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1486_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m8948(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m8949(__this, ___index, ___item, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1488_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m8950(__this, ___item, method) (( void (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1489_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8951(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1491_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m8952(__this, method) (( Object_t * (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1480_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m8953(__this, ___index, method) (( Object_t * (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1482_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m8954(__this, ___index, ___value, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1483_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
#define List_1_Add_m8955(__this, ___item, method) (( void (*) (List_1_t2 *, GameObject_t1 *, const MethodInfo*))List_1_Add_m1492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m8956(__this, ___newCount, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8957_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m8958(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Clear_m1485_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
#define List_1_Contains_m8959(__this, ___item, method) (( bool (*) (List_1_t2 *, GameObject_t1 *, const MethodInfo*))List_1_Contains_m1493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m8960(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2 *, GameObjectU5BU5D_t1953*, int32_t, const MethodInfo*))List_1_CopyTo_m1494_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m8961(__this, method) (( Enumerator_t1959  (*) (List_1_t2 *, const MethodInfo*))List_1_GetEnumerator_m8962_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
#define List_1_IndexOf_m8963(__this, ___item, method) (( int32_t (*) (List_1_t2 *, GameObject_t1 *, const MethodInfo*))List_1_IndexOf_m1497_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m8964(__this, ___start, ___delta, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8965_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m8966(__this, ___index, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8967_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
#define List_1_Insert_m8968(__this, ___index, ___item, method) (( void (*) (List_1_t2 *, int32_t, GameObject_t1 *, const MethodInfo*))List_1_Insert_m1498_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
#define List_1_Remove_m8969(__this, ___item, method) (( bool (*) (List_1_t2 *, GameObject_t1 *, const MethodInfo*))List_1_Remove_m1495_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m8970(__this, ___index, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1490_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m8971(__this, method) (( GameObjectU5BU5D_t1953* (*) (List_1_t2 *, const MethodInfo*))List_1_ToArray_m8972_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m8973(__this, method) (( int32_t (*) (List_1_t2 *, const MethodInfo*))List_1_get_Capacity_m8974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m8975(__this, ___value, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8976_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m8977(__this, method) (( int32_t (*) (List_1_t2 *, const MethodInfo*))List_1_get_Count_m1479_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m8978(__this, ___index, method) (( GameObject_t1 * (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_get_Item_m1499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#define List_1_set_Item_m8979(__this, ___index, ___value, method) (( void (*) (List_1_t2 *, int32_t, GameObject_t1 *, const MethodInfo*))List_1_set_Item_m1500_gshared)(__this, ___index, ___value, method)

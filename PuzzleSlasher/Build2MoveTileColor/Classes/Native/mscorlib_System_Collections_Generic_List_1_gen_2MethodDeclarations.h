#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t75;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t74;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t2313;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2004;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1212(__this, method) (( void (*) (List_1_t75 *, const MethodInfo*))List_1__ctor_m1282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m9391(__this, ___capacity, method) (( void (*) (List_1_t75 *, int32_t, const MethodInfo*))List_1__ctor_m8937_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m9392(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8939_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9393(__this, method) (( Object_t* (*) (List_1_t75 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1493_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9394(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t75 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1478_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9395(__this, method) (( Object_t * (*) (List_1_t75 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1475_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9396(__this, ___item, method) (( int32_t (*) (List_1_t75 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1481_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9397(__this, ___item, method) (( bool (*) (List_1_t75 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1483_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9398(__this, ___item, method) (( int32_t (*) (List_1_t75 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1484_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9399(__this, ___index, ___item, method) (( void (*) (List_1_t75 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1485_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9400(__this, ___item, method) (( void (*) (List_1_t75 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1486_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9401(__this, method) (( bool (*) (List_1_t75 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1488_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9402(__this, method) (( Object_t * (*) (List_1_t75 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1477_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9403(__this, ___index, method) (( Object_t * (*) (List_1_t75 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1479_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9404(__this, ___index, ___value, method) (( void (*) (List_1_t75 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m9405(__this, ___item, method) (( void (*) (List_1_t75 *, GUILayoutEntry_t74 *, const MethodInfo*))List_1_Add_m1489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9406(__this, ___newCount, method) (( void (*) (List_1_t75 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8954_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m9407(__this, method) (( void (*) (List_1_t75 *, const MethodInfo*))List_1_Clear_m1482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m9408(__this, ___item, method) (( bool (*) (List_1_t75 *, GUILayoutEntry_t74 *, const MethodInfo*))List_1_Contains_m1490_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9409(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t75 *, GUILayoutEntryU5BU5D_t2004*, int32_t, const MethodInfo*))List_1_CopyTo_m1491_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m1206(__this, method) (( Enumerator_t338  (*) (List_1_t75 *, const MethodInfo*))List_1_GetEnumerator_m8959_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m9410(__this, ___item, method) (( int32_t (*) (List_1_t75 *, GUILayoutEntry_t74 *, const MethodInfo*))List_1_IndexOf_m1494_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9411(__this, ___start, ___delta, method) (( void (*) (List_1_t75 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8962_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9412(__this, ___index, method) (( void (*) (List_1_t75 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m9413(__this, ___index, ___item, method) (( void (*) (List_1_t75 *, int32_t, GUILayoutEntry_t74 *, const MethodInfo*))List_1_Insert_m1495_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m9414(__this, ___item, method) (( bool (*) (List_1_t75 *, GUILayoutEntry_t74 *, const MethodInfo*))List_1_Remove_m1492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9415(__this, ___index, method) (( void (*) (List_1_t75 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1487_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m9416(__this, method) (( GUILayoutEntryU5BU5D_t2004* (*) (List_1_t75 *, const MethodInfo*))List_1_ToArray_m8969_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m9417(__this, method) (( int32_t (*) (List_1_t75 *, const MethodInfo*))List_1_get_Capacity_m8971_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9418(__this, ___value, method) (( void (*) (List_1_t75 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8973_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m9419(__this, method) (( int32_t (*) (List_1_t75 *, const MethodInfo*))List_1_get_Count_m1476_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m9420(__this, ___index, method) (( GUILayoutEntry_t74 * (*) (List_1_t75 *, int32_t, const MethodInfo*))List_1_get_Item_m1496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m9421(__this, ___index, ___value, method) (( void (*) (List_1_t75 *, int32_t, GUILayoutEntry_t74 *, const MethodInfo*))List_1_set_Item_m1497_gshared)(__this, ___index, ___value, method)

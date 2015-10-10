#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t1464;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t1285;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t2414;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t2268;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12407(__this, method) (( void (*) (List_1_t1464 *, const MethodInfo*))List_1__ctor_m1264_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m8108(__this, ___capacity, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1__ctor_m8991_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m12408(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8993_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12409(__this, method) (( Object_t* (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12410(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1464 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12411(__this, method) (( Object_t * (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1456_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12412(__this, ___item, method) (( int32_t (*) (List_1_t1464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1462_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12413(__this, ___item, method) (( bool (*) (List_1_t1464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1464_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12414(__this, ___item, method) (( int32_t (*) (List_1_t1464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1465_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12415(__this, ___index, ___item, method) (( void (*) (List_1_t1464 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1466_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12416(__this, ___item, method) (( void (*) (List_1_t1464 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1467_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12417(__this, method) (( bool (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1469_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12418(__this, method) (( Object_t * (*) (List_1_t1464 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1458_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12419(__this, ___index, method) (( Object_t * (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1460_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12420(__this, ___index, ___value, method) (( void (*) (List_1_t1464 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1461_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m12421(__this, ___item, method) (( void (*) (List_1_t1464 *, StrongName_t1285 *, const MethodInfo*))List_1_Add_m1470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12422(__this, ___newCount, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9008_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m12423(__this, method) (( void (*) (List_1_t1464 *, const MethodInfo*))List_1_Clear_m1463_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m12424(__this, ___item, method) (( bool (*) (List_1_t1464 *, StrongName_t1285 *, const MethodInfo*))List_1_Contains_m1471_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12425(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1464 *, StrongNameU5BU5D_t2268*, int32_t, const MethodInfo*))List_1_CopyTo_m1472_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m12426(__this, method) (( Enumerator_t2269  (*) (List_1_t1464 *, const MethodInfo*))List_1_GetEnumerator_m9012_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m12427(__this, ___item, method) (( int32_t (*) (List_1_t1464 *, StrongName_t1285 *, const MethodInfo*))List_1_IndexOf_m1475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12428(__this, ___start, ___delta, method) (( void (*) (List_1_t1464 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9015_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12429(__this, ___index, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9017_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m12430(__this, ___index, ___item, method) (( void (*) (List_1_t1464 *, int32_t, StrongName_t1285 *, const MethodInfo*))List_1_Insert_m1476_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m12431(__this, ___item, method) (( bool (*) (List_1_t1464 *, StrongName_t1285 *, const MethodInfo*))List_1_Remove_m1473_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12432(__this, ___index, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1468_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m12433(__this, method) (( StrongNameU5BU5D_t2268* (*) (List_1_t1464 *, const MethodInfo*))List_1_ToArray_m9022_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m12434(__this, method) (( int32_t (*) (List_1_t1464 *, const MethodInfo*))List_1_get_Capacity_m9024_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12435(__this, ___value, method) (( void (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9026_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m12436(__this, method) (( int32_t (*) (List_1_t1464 *, const MethodInfo*))List_1_get_Count_m1457_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m12437(__this, ___index, method) (( StrongName_t1285 * (*) (List_1_t1464 *, int32_t, const MethodInfo*))List_1_get_Item_m1477_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m12438(__this, ___index, ___value, method) (( void (*) (List_1_t1464 *, int32_t, StrongName_t1285 *, const MethodInfo*))List_1_set_Item_m1478_gshared)(__this, ___index, ___value, method)

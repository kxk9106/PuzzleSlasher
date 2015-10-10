#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t108;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t110;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t2321;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t871;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1226(__this, method) (( void (*) (List_1_t108 *, const MethodInfo*))List_1__ctor_m1264_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m9964(__this, ___capacity, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1__ctor_m8991_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m9965(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8993_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9966(__this, method) (( Object_t* (*) (List_1_t108 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9967(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t108 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9968(__this, method) (( Object_t * (*) (List_1_t108 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1456_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9969(__this, ___item, method) (( int32_t (*) (List_1_t108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1462_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9970(__this, ___item, method) (( bool (*) (List_1_t108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1464_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9971(__this, ___item, method) (( int32_t (*) (List_1_t108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1465_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9972(__this, ___index, ___item, method) (( void (*) (List_1_t108 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1466_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9973(__this, ___item, method) (( void (*) (List_1_t108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1467_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9974(__this, method) (( bool (*) (List_1_t108 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1469_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9975(__this, method) (( Object_t * (*) (List_1_t108 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1458_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9976(__this, ___index, method) (( Object_t * (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1460_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9977(__this, ___index, ___value, method) (( void (*) (List_1_t108 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1461_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m9978(__this, ___item, method) (( void (*) (List_1_t108 *, ByteU5BU5D_t110*, const MethodInfo*))List_1_Add_m1470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9979(__this, ___newCount, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9008_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m9980(__this, method) (( void (*) (List_1_t108 *, const MethodInfo*))List_1_Clear_m1463_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m9981(__this, ___item, method) (( bool (*) (List_1_t108 *, ByteU5BU5D_t110*, const MethodInfo*))List_1_Contains_m1471_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9982(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t108 *, ByteU5BU5DU5BU5D_t871*, int32_t, const MethodInfo*))List_1_CopyTo_m1472_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m9983(__this, method) (( Enumerator_t2036  (*) (List_1_t108 *, const MethodInfo*))List_1_GetEnumerator_m9012_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m9984(__this, ___item, method) (( int32_t (*) (List_1_t108 *, ByteU5BU5D_t110*, const MethodInfo*))List_1_IndexOf_m1475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9985(__this, ___start, ___delta, method) (( void (*) (List_1_t108 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9015_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9986(__this, ___index, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9017_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m9987(__this, ___index, ___item, method) (( void (*) (List_1_t108 *, int32_t, ByteU5BU5D_t110*, const MethodInfo*))List_1_Insert_m1476_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m9988(__this, ___item, method) (( bool (*) (List_1_t108 *, ByteU5BU5D_t110*, const MethodInfo*))List_1_Remove_m1473_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9989(__this, ___index, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1468_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m9990(__this, method) (( ByteU5BU5DU5BU5D_t871* (*) (List_1_t108 *, const MethodInfo*))List_1_ToArray_m9022_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m9991(__this, method) (( int32_t (*) (List_1_t108 *, const MethodInfo*))List_1_get_Capacity_m9024_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9992(__this, ___value, method) (( void (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9026_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m9993(__this, method) (( int32_t (*) (List_1_t108 *, const MethodInfo*))List_1_get_Count_m1457_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m9994(__this, ___index, method) (( ByteU5BU5D_t110* (*) (List_1_t108 *, int32_t, const MethodInfo*))List_1_get_Item_m1477_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m9995(__this, ___index, ___value, method) (( void (*) (List_1_t108 *, int32_t, ByteU5BU5D_t110*, const MethodInfo*))List_1_set_Item_m1478_gshared)(__this, ___index, ___value, method)

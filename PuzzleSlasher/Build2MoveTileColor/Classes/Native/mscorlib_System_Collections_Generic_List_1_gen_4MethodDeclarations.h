#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t115;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t117;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t2335;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t881;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1244(__this, method) (( void (*) (List_1_t115 *, const MethodInfo*))List_1__ctor_m1282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m10021(__this, ___capacity, method) (( void (*) (List_1_t115 *, int32_t, const MethodInfo*))List_1__ctor_m8937_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m10022(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8939_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10023(__this, method) (( Object_t* (*) (List_1_t115 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1493_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10024(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t115 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1478_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10025(__this, method) (( Object_t * (*) (List_1_t115 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1475_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10026(__this, ___item, method) (( int32_t (*) (List_1_t115 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1481_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10027(__this, ___item, method) (( bool (*) (List_1_t115 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1483_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10028(__this, ___item, method) (( int32_t (*) (List_1_t115 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1484_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10029(__this, ___index, ___item, method) (( void (*) (List_1_t115 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1485_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10030(__this, ___item, method) (( void (*) (List_1_t115 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1486_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10031(__this, method) (( bool (*) (List_1_t115 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1488_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10032(__this, method) (( Object_t * (*) (List_1_t115 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1477_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10033(__this, ___index, method) (( Object_t * (*) (List_1_t115 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1479_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10034(__this, ___index, ___value, method) (( void (*) (List_1_t115 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m10035(__this, ___item, method) (( void (*) (List_1_t115 *, ByteU5BU5D_t117*, const MethodInfo*))List_1_Add_m1489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10036(__this, ___newCount, method) (( void (*) (List_1_t115 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8954_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m10037(__this, method) (( void (*) (List_1_t115 *, const MethodInfo*))List_1_Clear_m1482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m10038(__this, ___item, method) (( bool (*) (List_1_t115 *, ByteU5BU5D_t117*, const MethodInfo*))List_1_Contains_m1490_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10039(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t115 *, ByteU5BU5DU5BU5D_t881*, int32_t, const MethodInfo*))List_1_CopyTo_m1491_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m10040(__this, method) (( Enumerator_t2048  (*) (List_1_t115 *, const MethodInfo*))List_1_GetEnumerator_m8959_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m10041(__this, ___item, method) (( int32_t (*) (List_1_t115 *, ByteU5BU5D_t117*, const MethodInfo*))List_1_IndexOf_m1494_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10042(__this, ___start, ___delta, method) (( void (*) (List_1_t115 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8962_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10043(__this, ___index, method) (( void (*) (List_1_t115 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m10044(__this, ___index, ___item, method) (( void (*) (List_1_t115 *, int32_t, ByteU5BU5D_t117*, const MethodInfo*))List_1_Insert_m1495_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m10045(__this, ___item, method) (( bool (*) (List_1_t115 *, ByteU5BU5D_t117*, const MethodInfo*))List_1_Remove_m1492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10046(__this, ___index, method) (( void (*) (List_1_t115 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1487_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m10047(__this, method) (( ByteU5BU5DU5BU5D_t881* (*) (List_1_t115 *, const MethodInfo*))List_1_ToArray_m8969_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m10048(__this, method) (( int32_t (*) (List_1_t115 *, const MethodInfo*))List_1_get_Capacity_m8971_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10049(__this, ___value, method) (( void (*) (List_1_t115 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8973_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m10050(__this, method) (( int32_t (*) (List_1_t115 *, const MethodInfo*))List_1_get_Count_m1476_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m10051(__this, ___index, method) (( ByteU5BU5D_t117* (*) (List_1_t115 *, int32_t, const MethodInfo*))List_1_get_Item_m1496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m10052(__this, ___index, ___value, method) (( void (*) (List_1_t115 *, int32_t, ByteU5BU5D_t117*, const MethodInfo*))List_1_set_Item_m1497_gshared)(__this, ___index, ___value, method)

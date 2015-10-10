#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t203;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t454;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Object[]
struct ObjectU5BU5D_t216;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1282_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1__ctor_m1282(__this, method) (( void (*) (List_1_t203 *, const MethodInfo*))List_1__ctor_m1282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8937_gshared (List_1_t203 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8937(__this, ___capacity, method) (( void (*) (List_1_t203 *, int32_t, const MethodInfo*))List_1__ctor_m8937_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8939_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8939(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8939_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1493_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1493(__this, method) (( Object_t* (*) (List_1_t203 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1493_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1478_gshared (List_1_t203 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1478(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t203 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1478_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1475_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1475(__this, method) (( Object_t * (*) (List_1_t203 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1475_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1481_gshared (List_1_t203 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1481(__this, ___item, method) (( int32_t (*) (List_1_t203 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1481_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1483_gshared (List_1_t203 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1483(__this, ___item, method) (( bool (*) (List_1_t203 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1483_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1484_gshared (List_1_t203 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1484(__this, ___item, method) (( int32_t (*) (List_1_t203 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1484_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1485_gshared (List_1_t203 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1485(__this, ___index, ___item, method) (( void (*) (List_1_t203 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1485_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1486_gshared (List_1_t203 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1486(__this, ___item, method) (( void (*) (List_1_t203 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1486_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1488_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1488(__this, method) (( bool (*) (List_1_t203 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1488_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1477_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1477(__this, method) (( Object_t * (*) (List_1_t203 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1477_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1479_gshared (List_1_t203 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1479(__this, ___index, method) (( Object_t * (*) (List_1_t203 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1479_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1480_gshared (List_1_t203 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1480(__this, ___index, ___value, method) (( void (*) (List_1_t203 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1480_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m1489_gshared (List_1_t203 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m1489(__this, ___item, method) (( void (*) (List_1_t203 *, Object_t *, const MethodInfo*))List_1_Add_m1489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8954_gshared (List_1_t203 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8954(__this, ___newCount, method) (( void (*) (List_1_t203 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8954_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m1482_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1_Clear_m1482(__this, method) (( void (*) (List_1_t203 *, const MethodInfo*))List_1_Clear_m1482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m1490_gshared (List_1_t203 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m1490(__this, ___item, method) (( bool (*) (List_1_t203 *, Object_t *, const MethodInfo*))List_1_Contains_m1490_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1491_gshared (List_1_t203 * __this, ObjectU5BU5D_t216* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1491(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t203 *, ObjectU5BU5D_t216*, int32_t, const MethodInfo*))List_1_CopyTo_m1491_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1955  List_1_GetEnumerator_m8959_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8959(__this, method) (( Enumerator_t1955  (*) (List_1_t203 *, const MethodInfo*))List_1_GetEnumerator_m8959_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1494_gshared (List_1_t203 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m1494(__this, ___item, method) (( int32_t (*) (List_1_t203 *, Object_t *, const MethodInfo*))List_1_IndexOf_m1494_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8962_gshared (List_1_t203 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8962(__this, ___start, ___delta, method) (( void (*) (List_1_t203 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8962_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8964_gshared (List_1_t203 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8964(__this, ___index, method) (( void (*) (List_1_t203 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1495_gshared (List_1_t203 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m1495(__this, ___index, ___item, method) (( void (*) (List_1_t203 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m1495_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m1492_gshared (List_1_t203 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m1492(__this, ___item, method) (( bool (*) (List_1_t203 *, Object_t *, const MethodInfo*))List_1_Remove_m1492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1487_gshared (List_1_t203 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1487(__this, ___index, method) (( void (*) (List_1_t203 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1487_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t216* List_1_ToArray_m8969_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1_ToArray_m8969(__this, method) (( ObjectU5BU5D_t216* (*) (List_1_t203 *, const MethodInfo*))List_1_ToArray_m8969_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8971_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8971(__this, method) (( int32_t (*) (List_1_t203 *, const MethodInfo*))List_1_get_Capacity_m8971_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8973_gshared (List_1_t203 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8973(__this, ___value, method) (( void (*) (List_1_t203 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8973_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m1476_gshared (List_1_t203 * __this, const MethodInfo* method);
#define List_1_get_Count_m1476(__this, method) (( int32_t (*) (List_1_t203 *, const MethodInfo*))List_1_get_Count_m1476_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m1496_gshared (List_1_t203 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1496(__this, ___index, method) (( Object_t * (*) (List_1_t203 *, int32_t, const MethodInfo*))List_1_get_Item_m1496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1497_gshared (List_1_t203 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m1497(__this, ___index, ___value, method) (( void (*) (List_1_t203 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m1497_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t194;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t444;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Object[]
struct ObjectU5BU5D_t207;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1264_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1__ctor_m1264(__this, method) (( void (*) (List_1_t194 *, const MethodInfo*))List_1__ctor_m1264_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8991_gshared (List_1_t194 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8991(__this, ___capacity, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1__ctor_m8991_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8993_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8993(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8993_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1474_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1474(__this, method) (( Object_t* (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1459_gshared (List_1_t194 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1459(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t194 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1456_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1456(__this, method) (( Object_t * (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1456_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1462_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1462(__this, ___item, method) (( int32_t (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1462_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1464_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1464(__this, ___item, method) (( bool (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1464_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1465_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1465(__this, ___item, method) (( int32_t (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1465_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1466_gshared (List_1_t194 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1466(__this, ___index, ___item, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1466_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1467_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1467(__this, ___item, method) (( void (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1467_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1469_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1469(__this, method) (( bool (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1469_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1458_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1458(__this, method) (( Object_t * (*) (List_1_t194 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1458_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1460_gshared (List_1_t194 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1460(__this, ___index, method) (( Object_t * (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1460_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1461_gshared (List_1_t194 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1461(__this, ___index, ___value, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1461_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m1470_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m1470(__this, ___item, method) (( void (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_Add_m1470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9008_gshared (List_1_t194 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9008(__this, ___newCount, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9008_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m1463_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_Clear_m1463(__this, method) (( void (*) (List_1_t194 *, const MethodInfo*))List_1_Clear_m1463_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m1471_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m1471(__this, ___item, method) (( bool (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_Contains_m1471_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1472_gshared (List_1_t194 * __this, ObjectU5BU5D_t207* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1472(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t194 *, ObjectU5BU5D_t207*, int32_t, const MethodInfo*))List_1_CopyTo_m1472_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1956  List_1_GetEnumerator_m9012_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9012(__this, method) (( Enumerator_t1956  (*) (List_1_t194 *, const MethodInfo*))List_1_GetEnumerator_m9012_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1475_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m1475(__this, ___item, method) (( int32_t (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_IndexOf_m1475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9015_gshared (List_1_t194 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9015(__this, ___start, ___delta, method) (( void (*) (List_1_t194 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9015_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9017_gshared (List_1_t194 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9017(__this, ___index, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9017_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1476_gshared (List_1_t194 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m1476(__this, ___index, ___item, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m1476_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m1473_gshared (List_1_t194 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m1473(__this, ___item, method) (( bool (*) (List_1_t194 *, Object_t *, const MethodInfo*))List_1_Remove_m1473_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1468_gshared (List_1_t194 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1468(__this, ___index, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1468_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t207* List_1_ToArray_m9022_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_ToArray_m9022(__this, method) (( ObjectU5BU5D_t207* (*) (List_1_t194 *, const MethodInfo*))List_1_ToArray_m9022_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9024_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9024(__this, method) (( int32_t (*) (List_1_t194 *, const MethodInfo*))List_1_get_Capacity_m9024_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9026_gshared (List_1_t194 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9026(__this, ___value, method) (( void (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9026_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m1457_gshared (List_1_t194 * __this, const MethodInfo* method);
#define List_1_get_Count_m1457(__this, method) (( int32_t (*) (List_1_t194 *, const MethodInfo*))List_1_get_Count_m1457_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m1477_gshared (List_1_t194 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1477(__this, ___index, method) (( Object_t * (*) (List_1_t194 *, int32_t, const MethodInfo*))List_1_get_Item_m1477_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1478_gshared (List_1_t194 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m1478(__this, ___index, ___value, method) (( void (*) (List_1_t194 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m1478_gshared)(__this, ___index, ___value, method)

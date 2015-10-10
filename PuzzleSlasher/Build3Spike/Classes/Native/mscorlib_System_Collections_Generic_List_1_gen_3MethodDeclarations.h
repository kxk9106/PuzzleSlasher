#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t116;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2320;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.String[]
struct StringU5BU5D_t213;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1248(__this, method) (( void (*) (List_1_t116 *, const MethodInfo*))List_1__ctor_m1285_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m9987(__this, ___capacity, method) (( void (*) (List_1_t116 *, int32_t, const MethodInfo*))List_1__ctor_m8940_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m9988(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8942_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9989(__this, method) (( Object_t* (*) (List_1_t116 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1496_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9990(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t116 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9991(__this, method) (( Object_t * (*) (List_1_t116 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9992(__this, ___item, method) (( int32_t (*) (List_1_t116 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1484_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9993(__this, ___item, method) (( bool (*) (List_1_t116 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1486_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9994(__this, ___item, method) (( int32_t (*) (List_1_t116 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1487_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9995(__this, ___index, ___item, method) (( void (*) (List_1_t116 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1488_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9996(__this, ___item, method) (( void (*) (List_1_t116 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1489_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9997(__this, method) (( bool (*) (List_1_t116 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1491_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9998(__this, method) (( Object_t * (*) (List_1_t116 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1480_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9999(__this, ___index, method) (( Object_t * (*) (List_1_t116 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1482_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10000(__this, ___index, ___value, method) (( void (*) (List_1_t116 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1483_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m10001(__this, ___item, method) (( void (*) (List_1_t116 *, String_t*, const MethodInfo*))List_1_Add_m1492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10002(__this, ___newCount, method) (( void (*) (List_1_t116 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8957_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m10003(__this, method) (( void (*) (List_1_t116 *, const MethodInfo*))List_1_Clear_m1485_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m10004(__this, ___item, method) (( bool (*) (List_1_t116 *, String_t*, const MethodInfo*))List_1_Contains_m1493_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10005(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t116 *, StringU5BU5D_t213*, int32_t, const MethodInfo*))List_1_CopyTo_m1494_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m10006(__this, method) (( Enumerator_t2047  (*) (List_1_t116 *, const MethodInfo*))List_1_GetEnumerator_m8962_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m10007(__this, ___item, method) (( int32_t (*) (List_1_t116 *, String_t*, const MethodInfo*))List_1_IndexOf_m1497_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10008(__this, ___start, ___delta, method) (( void (*) (List_1_t116 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8965_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10009(__this, ___index, method) (( void (*) (List_1_t116 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8967_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m10010(__this, ___index, ___item, method) (( void (*) (List_1_t116 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m1498_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m10011(__this, ___item, method) (( bool (*) (List_1_t116 *, String_t*, const MethodInfo*))List_1_Remove_m1495_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10012(__this, ___index, method) (( void (*) (List_1_t116 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1490_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m8125(__this, method) (( StringU5BU5D_t213* (*) (List_1_t116 *, const MethodInfo*))List_1_ToArray_m8972_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m10013(__this, method) (( int32_t (*) (List_1_t116 *, const MethodInfo*))List_1_get_Capacity_m8974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10014(__this, ___value, method) (( void (*) (List_1_t116 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8976_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m10015(__this, method) (( int32_t (*) (List_1_t116 *, const MethodInfo*))List_1_get_Count_m1479_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m10016(__this, ___index, method) (( String_t* (*) (List_1_t116 *, int32_t, const MethodInfo*))List_1_get_Item_m1499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m10017(__this, ___index, ___value, method) (( void (*) (List_1_t116 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m1500_gshared)(__this, ___index, ___value, method)

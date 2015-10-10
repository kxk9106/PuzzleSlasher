#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t109;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2306;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.String[]
struct StringU5BU5D_t204;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m1227(__this, method) (( void (*) (List_1_t109 *, const MethodInfo*))List_1__ctor_m1264_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m9927(__this, ___capacity, method) (( void (*) (List_1_t109 *, int32_t, const MethodInfo*))List_1__ctor_m8991_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m9928(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8993_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9929(__this, method) (( Object_t* (*) (List_1_t109 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9930(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t109 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9931(__this, method) (( Object_t * (*) (List_1_t109 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1456_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9932(__this, ___item, method) (( int32_t (*) (List_1_t109 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1462_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9933(__this, ___item, method) (( bool (*) (List_1_t109 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1464_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9934(__this, ___item, method) (( int32_t (*) (List_1_t109 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1465_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9935(__this, ___index, ___item, method) (( void (*) (List_1_t109 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1466_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9936(__this, ___item, method) (( void (*) (List_1_t109 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1467_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9937(__this, method) (( bool (*) (List_1_t109 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1469_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9938(__this, method) (( Object_t * (*) (List_1_t109 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1458_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9939(__this, ___index, method) (( Object_t * (*) (List_1_t109 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1460_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9940(__this, ___index, ___value, method) (( void (*) (List_1_t109 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1461_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m9941(__this, ___item, method) (( void (*) (List_1_t109 *, String_t*, const MethodInfo*))List_1_Add_m1470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9942(__this, ___newCount, method) (( void (*) (List_1_t109 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9008_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m9943(__this, method) (( void (*) (List_1_t109 *, const MethodInfo*))List_1_Clear_m1463_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m9944(__this, ___item, method) (( bool (*) (List_1_t109 *, String_t*, const MethodInfo*))List_1_Contains_m1471_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9945(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t109 *, StringU5BU5D_t204*, int32_t, const MethodInfo*))List_1_CopyTo_m1472_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m9946(__this, method) (( Enumerator_t2035  (*) (List_1_t109 *, const MethodInfo*))List_1_GetEnumerator_m9012_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m9947(__this, ___item, method) (( int32_t (*) (List_1_t109 *, String_t*, const MethodInfo*))List_1_IndexOf_m1475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9948(__this, ___start, ___delta, method) (( void (*) (List_1_t109 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9015_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9949(__this, ___index, method) (( void (*) (List_1_t109 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9017_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m9950(__this, ___index, ___item, method) (( void (*) (List_1_t109 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m1476_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m9951(__this, ___item, method) (( bool (*) (List_1_t109 *, String_t*, const MethodInfo*))List_1_Remove_m1473_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9952(__this, ___index, method) (( void (*) (List_1_t109 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1468_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m8103(__this, method) (( StringU5BU5D_t204* (*) (List_1_t109 *, const MethodInfo*))List_1_ToArray_m9022_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m9953(__this, method) (( int32_t (*) (List_1_t109 *, const MethodInfo*))List_1_get_Capacity_m9024_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9954(__this, ___value, method) (( void (*) (List_1_t109 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9026_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m9955(__this, method) (( int32_t (*) (List_1_t109 *, const MethodInfo*))List_1_get_Count_m1457_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m9956(__this, ___index, method) (( String_t* (*) (List_1_t109 *, int32_t, const MethodInfo*))List_1_get_Item_m1477_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m9957(__this, ___index, ___value, method) (( void (*) (List_1_t109 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m1478_gshared)(__this, ___index, ___value, method)

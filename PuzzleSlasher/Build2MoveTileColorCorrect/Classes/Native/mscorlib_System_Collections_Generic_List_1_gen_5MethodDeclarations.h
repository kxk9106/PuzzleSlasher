#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t167;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2336;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t303;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m10098_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1__ctor_m10098(__this, method) (( void (*) (List_1_t167 *, const MethodInfo*))List_1__ctor_m10098_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1254_gshared (List_1_t167 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1254(__this, ___capacity, method) (( void (*) (List_1_t167 *, int32_t, const MethodInfo*))List_1__ctor_m1254_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m10099_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10099(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10099_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10100_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10100(__this, method) (( Object_t* (*) (List_1_t167 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10100_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10101_gshared (List_1_t167 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10101(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t167 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10101_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10102_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10102(__this, method) (( Object_t * (*) (List_1_t167 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10102_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10103_gshared (List_1_t167 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10103(__this, ___item, method) (( int32_t (*) (List_1_t167 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10103_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10104_gshared (List_1_t167 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10104(__this, ___item, method) (( bool (*) (List_1_t167 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10104_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10105_gshared (List_1_t167 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10105(__this, ___item, method) (( int32_t (*) (List_1_t167 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10105_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10106_gshared (List_1_t167 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10106(__this, ___index, ___item, method) (( void (*) (List_1_t167 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10106_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10107_gshared (List_1_t167 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10107(__this, ___item, method) (( void (*) (List_1_t167 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10108_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10108(__this, method) (( bool (*) (List_1_t167 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10108_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10109_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10109(__this, method) (( Object_t * (*) (List_1_t167 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10109_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10110_gshared (List_1_t167 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10110(__this, ___index, method) (( Object_t * (*) (List_1_t167 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10110_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10111_gshared (List_1_t167 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10111(__this, ___index, ___value, method) (( void (*) (List_1_t167 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10111_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m10112_gshared (List_1_t167 * __this, UIVertex_t174  ___item, const MethodInfo* method);
#define List_1_Add_m10112(__this, ___item, method) (( void (*) (List_1_t167 *, UIVertex_t174 , const MethodInfo*))List_1_Add_m10112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10113_gshared (List_1_t167 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10113(__this, ___newCount, method) (( void (*) (List_1_t167 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10113_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m10114_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1_Clear_m10114(__this, method) (( void (*) (List_1_t167 *, const MethodInfo*))List_1_Clear_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m10115_gshared (List_1_t167 * __this, UIVertex_t174  ___item, const MethodInfo* method);
#define List_1_Contains_m10115(__this, ___item, method) (( bool (*) (List_1_t167 *, UIVertex_t174 , const MethodInfo*))List_1_Contains_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10116_gshared (List_1_t167 * __this, UIVertexU5BU5D_t303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10116(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t167 *, UIVertexU5BU5D_t303*, int32_t, const MethodInfo*))List_1_CopyTo_m10116_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2056  List_1_GetEnumerator_m10117_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10117(__this, method) (( Enumerator_t2056  (*) (List_1_t167 *, const MethodInfo*))List_1_GetEnumerator_m10117_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10118_gshared (List_1_t167 * __this, UIVertex_t174  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10118(__this, ___item, method) (( int32_t (*) (List_1_t167 *, UIVertex_t174 , const MethodInfo*))List_1_IndexOf_m10118_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10119_gshared (List_1_t167 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10119(__this, ___start, ___delta, method) (( void (*) (List_1_t167 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10119_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10120_gshared (List_1_t167 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10120(__this, ___index, method) (( void (*) (List_1_t167 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10121_gshared (List_1_t167 * __this, int32_t ___index, UIVertex_t174  ___item, const MethodInfo* method);
#define List_1_Insert_m10121(__this, ___index, ___item, method) (( void (*) (List_1_t167 *, int32_t, UIVertex_t174 , const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m10122_gshared (List_1_t167 * __this, UIVertex_t174  ___item, const MethodInfo* method);
#define List_1_Remove_m10122(__this, ___item, method) (( bool (*) (List_1_t167 *, UIVertex_t174 , const MethodInfo*))List_1_Remove_m10122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10123_gshared (List_1_t167 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10123(__this, ___index, method) (( void (*) (List_1_t167 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10123_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t303* List_1_ToArray_m10124_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1_ToArray_m10124(__this, method) (( UIVertexU5BU5D_t303* (*) (List_1_t167 *, const MethodInfo*))List_1_ToArray_m10124_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10125_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10125(__this, method) (( int32_t (*) (List_1_t167 *, const MethodInfo*))List_1_get_Capacity_m10125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10126_gshared (List_1_t167 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10126(__this, ___value, method) (( void (*) (List_1_t167 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10126_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m10127_gshared (List_1_t167 * __this, const MethodInfo* method);
#define List_1_get_Count_m10127(__this, method) (( int32_t (*) (List_1_t167 *, const MethodInfo*))List_1_get_Count_m10127_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t174  List_1_get_Item_m10128_gshared (List_1_t167 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10128(__this, ___index, method) (( UIVertex_t174  (*) (List_1_t167 *, int32_t, const MethodInfo*))List_1_get_Item_m10128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10129_gshared (List_1_t167 * __this, int32_t ___index, UIVertex_t174  ___value, const MethodInfo* method);
#define List_1_set_Item_m10129(__this, ___index, ___value, method) (( void (*) (List_1_t167 *, int32_t, UIVertex_t174 , const MethodInfo*))List_1_set_Item_m10129_gshared)(__this, ___index, ___value, method)

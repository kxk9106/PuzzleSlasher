#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t158;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2322;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t294;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m10036_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1__ctor_m10036(__this, method) (( void (*) (List_1_t158 *, const MethodInfo*))List_1__ctor_m10036_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1236_gshared (List_1_t158 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1236(__this, ___capacity, method) (( void (*) (List_1_t158 *, int32_t, const MethodInfo*))List_1__ctor_m1236_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m10037_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10037(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10037_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10038_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10038(__this, method) (( Object_t* (*) (List_1_t158 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10038_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10039_gshared (List_1_t158 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10039(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t158 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10040_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10040(__this, method) (( Object_t * (*) (List_1_t158 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10040_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10041_gshared (List_1_t158 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10041(__this, ___item, method) (( int32_t (*) (List_1_t158 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10041_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10042_gshared (List_1_t158 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10042(__this, ___item, method) (( bool (*) (List_1_t158 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10042_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10043_gshared (List_1_t158 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10043(__this, ___item, method) (( int32_t (*) (List_1_t158 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10043_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10044_gshared (List_1_t158 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10044(__this, ___index, ___item, method) (( void (*) (List_1_t158 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10044_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10045_gshared (List_1_t158 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10045(__this, ___item, method) (( void (*) (List_1_t158 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10045_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10046_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10046(__this, method) (( bool (*) (List_1_t158 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10046_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10047_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10047(__this, method) (( Object_t * (*) (List_1_t158 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10047_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10048_gshared (List_1_t158 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10048(__this, ___index, method) (( Object_t * (*) (List_1_t158 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10048_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10049_gshared (List_1_t158 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10049(__this, ___index, ___value, method) (( void (*) (List_1_t158 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10049_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m10050_gshared (List_1_t158 * __this, UIVertex_t165  ___item, const MethodInfo* method);
#define List_1_Add_m10050(__this, ___item, method) (( void (*) (List_1_t158 *, UIVertex_t165 , const MethodInfo*))List_1_Add_m10050_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10051_gshared (List_1_t158 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10051(__this, ___newCount, method) (( void (*) (List_1_t158 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10051_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m10052_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1_Clear_m10052(__this, method) (( void (*) (List_1_t158 *, const MethodInfo*))List_1_Clear_m10052_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m10053_gshared (List_1_t158 * __this, UIVertex_t165  ___item, const MethodInfo* method);
#define List_1_Contains_m10053(__this, ___item, method) (( bool (*) (List_1_t158 *, UIVertex_t165 , const MethodInfo*))List_1_Contains_m10053_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10054_gshared (List_1_t158 * __this, UIVertexU5BU5D_t294* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10054(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t158 *, UIVertexU5BU5D_t294*, int32_t, const MethodInfo*))List_1_CopyTo_m10054_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2043  List_1_GetEnumerator_m10055_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10055(__this, method) (( Enumerator_t2043  (*) (List_1_t158 *, const MethodInfo*))List_1_GetEnumerator_m10055_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10056_gshared (List_1_t158 * __this, UIVertex_t165  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10056(__this, ___item, method) (( int32_t (*) (List_1_t158 *, UIVertex_t165 , const MethodInfo*))List_1_IndexOf_m10056_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10057_gshared (List_1_t158 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10057(__this, ___start, ___delta, method) (( void (*) (List_1_t158 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10057_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10058_gshared (List_1_t158 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10058(__this, ___index, method) (( void (*) (List_1_t158 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10058_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10059_gshared (List_1_t158 * __this, int32_t ___index, UIVertex_t165  ___item, const MethodInfo* method);
#define List_1_Insert_m10059(__this, ___index, ___item, method) (( void (*) (List_1_t158 *, int32_t, UIVertex_t165 , const MethodInfo*))List_1_Insert_m10059_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m10060_gshared (List_1_t158 * __this, UIVertex_t165  ___item, const MethodInfo* method);
#define List_1_Remove_m10060(__this, ___item, method) (( bool (*) (List_1_t158 *, UIVertex_t165 , const MethodInfo*))List_1_Remove_m10060_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10061_gshared (List_1_t158 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10061(__this, ___index, method) (( void (*) (List_1_t158 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10061_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t294* List_1_ToArray_m10062_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1_ToArray_m10062(__this, method) (( UIVertexU5BU5D_t294* (*) (List_1_t158 *, const MethodInfo*))List_1_ToArray_m10062_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10063_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10063(__this, method) (( int32_t (*) (List_1_t158 *, const MethodInfo*))List_1_get_Capacity_m10063_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10064_gshared (List_1_t158 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10064(__this, ___value, method) (( void (*) (List_1_t158 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10064_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m10065_gshared (List_1_t158 * __this, const MethodInfo* method);
#define List_1_get_Count_m10065(__this, method) (( int32_t (*) (List_1_t158 *, const MethodInfo*))List_1_get_Count_m10065_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t165  List_1_get_Item_m10066_gshared (List_1_t158 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10066(__this, ___index, method) (( UIVertex_t165  (*) (List_1_t158 *, int32_t, const MethodInfo*))List_1_get_Item_m10066_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10067_gshared (List_1_t158 * __this, int32_t ___index, UIVertex_t165  ___value, const MethodInfo* method);
#define List_1_set_Item_m10067(__this, ___index, ___value, method) (( void (*) (List_1_t158 *, int32_t, UIVertex_t165 , const MethodInfo*))List_1_set_Item_m10067_gshared)(__this, ___index, ___value, method)

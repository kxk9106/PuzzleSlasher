﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2247;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t295;
// System.Object[]
struct ObjectU5BU5D_t216;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t454;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t461;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12282_gshared (Collection_1_t2247 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12282(__this, method) (( void (*) (Collection_1_t2247 *, const MethodInfo*))Collection_1__ctor_m12282_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12283_gshared (Collection_1_t2247 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12283(__this, method) (( bool (*) (Collection_1_t2247 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12283_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12284_gshared (Collection_1_t2247 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12284(__this, ___array, ___index, method) (( void (*) (Collection_1_t2247 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12284_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12285_gshared (Collection_1_t2247 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12285(__this, method) (( Object_t * (*) (Collection_1_t2247 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12285_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12286_gshared (Collection_1_t2247 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12286(__this, ___value, method) (( int32_t (*) (Collection_1_t2247 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12286_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12287_gshared (Collection_1_t2247 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12287(__this, ___value, method) (( bool (*) (Collection_1_t2247 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12287_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12288_gshared (Collection_1_t2247 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12288(__this, ___value, method) (( int32_t (*) (Collection_1_t2247 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12288_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12289_gshared (Collection_1_t2247 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12289(__this, ___index, ___value, method) (( void (*) (Collection_1_t2247 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12289_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12290_gshared (Collection_1_t2247 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12290(__this, ___value, method) (( void (*) (Collection_1_t2247 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12290_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12291_gshared (Collection_1_t2247 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12291(__this, method) (( Object_t * (*) (Collection_1_t2247 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12291_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12292_gshared (Collection_1_t2247 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12292(__this, ___index, method) (( Object_t * (*) (Collection_1_t2247 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12292_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12293_gshared (Collection_1_t2247 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12293(__this, ___index, ___value, method) (( void (*) (Collection_1_t2247 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12293_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12294_gshared (Collection_1_t2247 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12294(__this, ___item, method) (( void (*) (Collection_1_t2247 *, Object_t *, const MethodInfo*))Collection_1_Add_m12294_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12295_gshared (Collection_1_t2247 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12295(__this, method) (( void (*) (Collection_1_t2247 *, const MethodInfo*))Collection_1_Clear_m12295_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12296_gshared (Collection_1_t2247 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12296(__this, method) (( void (*) (Collection_1_t2247 *, const MethodInfo*))Collection_1_ClearItems_m12296_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12297_gshared (Collection_1_t2247 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12297(__this, ___item, method) (( bool (*) (Collection_1_t2247 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12297_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12298_gshared (Collection_1_t2247 * __this, ObjectU5BU5D_t216* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12298(__this, ___array, ___index, method) (( void (*) (Collection_1_t2247 *, ObjectU5BU5D_t216*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12298_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12299_gshared (Collection_1_t2247 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12299(__this, method) (( Object_t* (*) (Collection_1_t2247 *, const MethodInfo*))Collection_1_GetEnumerator_m12299_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12300_gshared (Collection_1_t2247 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12300(__this, ___item, method) (( int32_t (*) (Collection_1_t2247 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12300_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12301_gshared (Collection_1_t2247 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12301(__this, ___index, ___item, method) (( void (*) (Collection_1_t2247 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12301_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12302_gshared (Collection_1_t2247 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12302(__this, ___index, ___item, method) (( void (*) (Collection_1_t2247 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12302_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12303_gshared (Collection_1_t2247 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12303(__this, ___item, method) (( bool (*) (Collection_1_t2247 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12303_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12304_gshared (Collection_1_t2247 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12304(__this, ___index, method) (( void (*) (Collection_1_t2247 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12304_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12305_gshared (Collection_1_t2247 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12305(__this, ___index, method) (( void (*) (Collection_1_t2247 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12305_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12306_gshared (Collection_1_t2247 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12306(__this, method) (( int32_t (*) (Collection_1_t2247 *, const MethodInfo*))Collection_1_get_Count_m12306_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12307_gshared (Collection_1_t2247 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12307(__this, ___index, method) (( Object_t * (*) (Collection_1_t2247 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12307_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12308_gshared (Collection_1_t2247 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12308(__this, ___index, ___value, method) (( void (*) (Collection_1_t2247 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12308_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12309_gshared (Collection_1_t2247 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12309(__this, ___index, ___item, method) (( void (*) (Collection_1_t2247 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12309_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12310_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12310(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12310_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12311_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12311(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12311_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12312_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12312(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12312_gshared)(__this /* static, unused */, ___list, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2234;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;
// System.Object[]
struct ObjectU5BU5D_t207;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t444;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t451;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12217_gshared (Collection_1_t2234 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12217(__this, method) (( void (*) (Collection_1_t2234 *, const MethodInfo*))Collection_1__ctor_m12217_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12218_gshared (Collection_1_t2234 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12218(__this, method) (( bool (*) (Collection_1_t2234 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12218_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12219_gshared (Collection_1_t2234 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12219(__this, ___array, ___index, method) (( void (*) (Collection_1_t2234 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12219_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12220_gshared (Collection_1_t2234 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12220(__this, method) (( Object_t * (*) (Collection_1_t2234 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12220_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12221_gshared (Collection_1_t2234 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12221(__this, ___value, method) (( int32_t (*) (Collection_1_t2234 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12221_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12222_gshared (Collection_1_t2234 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12222(__this, ___value, method) (( bool (*) (Collection_1_t2234 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12222_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12223_gshared (Collection_1_t2234 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12223(__this, ___value, method) (( int32_t (*) (Collection_1_t2234 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12223_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12224_gshared (Collection_1_t2234 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12224(__this, ___index, ___value, method) (( void (*) (Collection_1_t2234 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12224_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12225_gshared (Collection_1_t2234 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12225(__this, ___value, method) (( void (*) (Collection_1_t2234 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12225_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12226_gshared (Collection_1_t2234 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12226(__this, method) (( Object_t * (*) (Collection_1_t2234 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12226_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12227_gshared (Collection_1_t2234 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12227(__this, ___index, method) (( Object_t * (*) (Collection_1_t2234 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12227_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12228_gshared (Collection_1_t2234 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12228(__this, ___index, ___value, method) (( void (*) (Collection_1_t2234 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12228_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12229_gshared (Collection_1_t2234 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12229(__this, ___item, method) (( void (*) (Collection_1_t2234 *, Object_t *, const MethodInfo*))Collection_1_Add_m12229_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12230_gshared (Collection_1_t2234 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12230(__this, method) (( void (*) (Collection_1_t2234 *, const MethodInfo*))Collection_1_Clear_m12230_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12231_gshared (Collection_1_t2234 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12231(__this, method) (( void (*) (Collection_1_t2234 *, const MethodInfo*))Collection_1_ClearItems_m12231_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12232_gshared (Collection_1_t2234 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12232(__this, ___item, method) (( bool (*) (Collection_1_t2234 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12232_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12233_gshared (Collection_1_t2234 * __this, ObjectU5BU5D_t207* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12233(__this, ___array, ___index, method) (( void (*) (Collection_1_t2234 *, ObjectU5BU5D_t207*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12233_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12234_gshared (Collection_1_t2234 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12234(__this, method) (( Object_t* (*) (Collection_1_t2234 *, const MethodInfo*))Collection_1_GetEnumerator_m12234_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12235_gshared (Collection_1_t2234 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12235(__this, ___item, method) (( int32_t (*) (Collection_1_t2234 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12235_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12236_gshared (Collection_1_t2234 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12236(__this, ___index, ___item, method) (( void (*) (Collection_1_t2234 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12236_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12237_gshared (Collection_1_t2234 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12237(__this, ___index, ___item, method) (( void (*) (Collection_1_t2234 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12237_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12238_gshared (Collection_1_t2234 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12238(__this, ___item, method) (( bool (*) (Collection_1_t2234 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12238_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12239_gshared (Collection_1_t2234 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12239(__this, ___index, method) (( void (*) (Collection_1_t2234 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12239_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12240_gshared (Collection_1_t2234 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12240(__this, ___index, method) (( void (*) (Collection_1_t2234 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12240_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12241_gshared (Collection_1_t2234 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12241(__this, method) (( int32_t (*) (Collection_1_t2234 *, const MethodInfo*))Collection_1_get_Count_m12241_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12242_gshared (Collection_1_t2234 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12242(__this, ___index, method) (( Object_t * (*) (Collection_1_t2234 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12242_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12243_gshared (Collection_1_t2234 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12243(__this, ___index, ___value, method) (( void (*) (Collection_1_t2234 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12243_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12244_gshared (Collection_1_t2234 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12244(__this, ___index, ___item, method) (( void (*) (Collection_1_t2234 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12244_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12245_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12245(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12245_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12246_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12246(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12246_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12247_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12247(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12247_gshared)(__this /* static, unused */, ___list, method)

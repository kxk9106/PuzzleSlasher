﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t586;
// System.Text.RegularExpressions.Group
struct Group_t584;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t286;

// System.Void System.Text.RegularExpressions.GroupCollection::.ctor(System.Int32,System.Int32)
extern "C" void GroupCollection__ctor_m1958 (GroupCollection_t586 * __this, int32_t ___n, int32_t ___gap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.GroupCollection::get_Count()
extern "C" int32_t GroupCollection_get_Count_m1959 (GroupCollection_t586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
extern "C" Group_t584 * GroupCollection_get_Item_m1960 (GroupCollection_t586 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::SetValue(System.Text.RegularExpressions.Group,System.Int32)
extern "C" void GroupCollection_SetValue_m1961 (GroupCollection_t586 * __this, Group_t584 * ___g, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.GroupCollection::get_SyncRoot()
extern "C" Object_t * GroupCollection_get_SyncRoot_m1962 (GroupCollection_t586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::CopyTo(System.Array,System.Int32)
extern "C" void GroupCollection_CopyTo_m1963 (GroupCollection_t586 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.GroupCollection::GetEnumerator()
extern "C" Object_t * GroupCollection_GetEnumerator_m1964 (GroupCollection_t586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

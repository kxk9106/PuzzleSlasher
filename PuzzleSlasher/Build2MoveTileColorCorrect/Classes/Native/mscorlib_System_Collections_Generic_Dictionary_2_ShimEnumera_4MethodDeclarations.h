﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2156;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2147;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11447_gshared (ShimEnumerator_t2156 * __this, Dictionary_2_t2147 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11447(__this, ___host, method) (( void (*) (ShimEnumerator_t2156 *, Dictionary_2_t2147 *, const MethodInfo*))ShimEnumerator__ctor_m11447_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11448_gshared (ShimEnumerator_t2156 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11448(__this, method) (( bool (*) (ShimEnumerator_t2156 *, const MethodInfo*))ShimEnumerator_MoveNext_m11448_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t668  ShimEnumerator_get_Entry_m11449_gshared (ShimEnumerator_t2156 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11449(__this, method) (( DictionaryEntry_t668  (*) (ShimEnumerator_t2156 *, const MethodInfo*))ShimEnumerator_get_Entry_m11449_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11450_gshared (ShimEnumerator_t2156 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11450(__this, method) (( Object_t * (*) (ShimEnumerator_t2156 *, const MethodInfo*))ShimEnumerator_get_Key_m11450_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11451_gshared (ShimEnumerator_t2156 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11451(__this, method) (( Object_t * (*) (ShimEnumerator_t2156 *, const MethodInfo*))ShimEnumerator_get_Value_m11451_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11452_gshared (ShimEnumerator_t2156 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11452(__this, method) (( Object_t * (*) (ShimEnumerator_t2156 *, const MethodInfo*))ShimEnumerator_get_Current_m11452_gshared)(__this, method)

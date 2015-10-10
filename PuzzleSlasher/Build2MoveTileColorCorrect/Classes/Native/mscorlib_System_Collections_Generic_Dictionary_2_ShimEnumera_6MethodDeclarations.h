﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2227;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t604;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12170_gshared (ShimEnumerator_t2227 * __this, Dictionary_2_t604 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12170(__this, ___host, method) (( void (*) (ShimEnumerator_t2227 *, Dictionary_2_t604 *, const MethodInfo*))ShimEnumerator__ctor_m12170_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12171_gshared (ShimEnumerator_t2227 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12171(__this, method) (( bool (*) (ShimEnumerator_t2227 *, const MethodInfo*))ShimEnumerator_MoveNext_m12171_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t668  ShimEnumerator_get_Entry_m12172_gshared (ShimEnumerator_t2227 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12172(__this, method) (( DictionaryEntry_t668  (*) (ShimEnumerator_t2227 *, const MethodInfo*))ShimEnumerator_get_Entry_m12172_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12173_gshared (ShimEnumerator_t2227 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12173(__this, method) (( Object_t * (*) (ShimEnumerator_t2227 *, const MethodInfo*))ShimEnumerator_get_Key_m12173_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12174_gshared (ShimEnumerator_t2227 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12174(__this, method) (( Object_t * (*) (ShimEnumerator_t2227 *, const MethodInfo*))ShimEnumerator_get_Value_m12174_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12175_gshared (ShimEnumerator_t2227 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12175(__this, method) (( Object_t * (*) (ShimEnumerator_t2227 *, const MethodInfo*))ShimEnumerator_get_Current_m12175_gshared)(__this, method)

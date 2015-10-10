#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2205;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2194;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11968_gshared (ShimEnumerator_t2205 * __this, Dictionary_2_t2194 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11968(__this, ___host, method) (( void (*) (ShimEnumerator_t2205 *, Dictionary_2_t2194 *, const MethodInfo*))ShimEnumerator__ctor_m11968_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11969_gshared (ShimEnumerator_t2205 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11969(__this, method) (( bool (*) (ShimEnumerator_t2205 *, const MethodInfo*))ShimEnumerator_MoveNext_m11969_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t668  ShimEnumerator_get_Entry_m11970_gshared (ShimEnumerator_t2205 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11970(__this, method) (( DictionaryEntry_t668  (*) (ShimEnumerator_t2205 *, const MethodInfo*))ShimEnumerator_get_Entry_m11970_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11971_gshared (ShimEnumerator_t2205 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11971(__this, method) (( Object_t * (*) (ShimEnumerator_t2205 *, const MethodInfo*))ShimEnumerator_get_Key_m11971_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11972_gshared (ShimEnumerator_t2205 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11972(__this, method) (( Object_t * (*) (ShimEnumerator_t2205 *, const MethodInfo*))ShimEnumerator_get_Value_m11972_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11973_gshared (ShimEnumerator_t2205 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11973(__this, method) (( Object_t * (*) (ShimEnumerator_t2205 *, const MethodInfo*))ShimEnumerator_get_Current_m11973_gshared)(__this, method)

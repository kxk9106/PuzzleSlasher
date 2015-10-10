#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2192;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2181;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11903_gshared (ShimEnumerator_t2192 * __this, Dictionary_2_t2181 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11903(__this, ___host, method) (( void (*) (ShimEnumerator_t2192 *, Dictionary_2_t2181 *, const MethodInfo*))ShimEnumerator__ctor_m11903_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11904_gshared (ShimEnumerator_t2192 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11904(__this, method) (( bool (*) (ShimEnumerator_t2192 *, const MethodInfo*))ShimEnumerator_MoveNext_m11904_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t658  ShimEnumerator_get_Entry_m11905_gshared (ShimEnumerator_t2192 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11905(__this, method) (( DictionaryEntry_t658  (*) (ShimEnumerator_t2192 *, const MethodInfo*))ShimEnumerator_get_Entry_m11905_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11906_gshared (ShimEnumerator_t2192 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11906(__this, method) (( Object_t * (*) (ShimEnumerator_t2192 *, const MethodInfo*))ShimEnumerator_get_Key_m11906_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11907_gshared (ShimEnumerator_t2192 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11907(__this, method) (( Object_t * (*) (ShimEnumerator_t2192 *, const MethodInfo*))ShimEnumerator_get_Value_m11907_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11908_gshared (ShimEnumerator_t2192 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11908(__this, method) (( Object_t * (*) (ShimEnumerator_t2192 *, const MethodInfo*))ShimEnumerator_get_Current_m11908_gshared)(__this, method)

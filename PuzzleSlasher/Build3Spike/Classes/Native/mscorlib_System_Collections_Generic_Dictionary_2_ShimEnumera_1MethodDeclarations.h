#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2036;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2025;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9827_gshared (ShimEnumerator_t2036 * __this, Dictionary_2_t2025 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9827(__this, ___host, method) (( void (*) (ShimEnumerator_t2036 *, Dictionary_2_t2025 *, const MethodInfo*))ShimEnumerator__ctor_m9827_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9828_gshared (ShimEnumerator_t2036 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9828(__this, method) (( bool (*) (ShimEnumerator_t2036 *, const MethodInfo*))ShimEnumerator_MoveNext_m9828_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t668  ShimEnumerator_get_Entry_m9829_gshared (ShimEnumerator_t2036 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9829(__this, method) (( DictionaryEntry_t668  (*) (ShimEnumerator_t2036 *, const MethodInfo*))ShimEnumerator_get_Entry_m9829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9830_gshared (ShimEnumerator_t2036 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9830(__this, method) (( Object_t * (*) (ShimEnumerator_t2036 *, const MethodInfo*))ShimEnumerator_get_Key_m9830_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9831_gshared (ShimEnumerator_t2036 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9831(__this, method) (( Object_t * (*) (ShimEnumerator_t2036 *, const MethodInfo*))ShimEnumerator_get_Value_m9831_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9832_gshared (ShimEnumerator_t2036 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9832(__this, method) (( Object_t * (*) (ShimEnumerator_t2036 *, const MethodInfo*))ShimEnumerator_get_Current_m9832_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2081;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2069;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10424_gshared (ShimEnumerator_t2081 * __this, Dictionary_2_t2069 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10424(__this, ___host, method) (( void (*) (ShimEnumerator_t2081 *, Dictionary_2_t2069 *, const MethodInfo*))ShimEnumerator__ctor_m10424_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10425_gshared (ShimEnumerator_t2081 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10425(__this, method) (( bool (*) (ShimEnumerator_t2081 *, const MethodInfo*))ShimEnumerator_MoveNext_m10425_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t668  ShimEnumerator_get_Entry_m10426_gshared (ShimEnumerator_t2081 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10426(__this, method) (( DictionaryEntry_t668  (*) (ShimEnumerator_t2081 *, const MethodInfo*))ShimEnumerator_get_Entry_m10426_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10427_gshared (ShimEnumerator_t2081 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10427(__this, method) (( Object_t * (*) (ShimEnumerator_t2081 *, const MethodInfo*))ShimEnumerator_get_Key_m10427_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10428_gshared (ShimEnumerator_t2081 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10428(__this, method) (( Object_t * (*) (ShimEnumerator_t2081 *, const MethodInfo*))ShimEnumerator_get_Value_m10428_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10429_gshared (ShimEnumerator_t2081 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10429(__this, method) (( Object_t * (*) (ShimEnumerator_t2081 *, const MethodInfo*))ShimEnumerator_get_Current_m10429_gshared)(__this, method)

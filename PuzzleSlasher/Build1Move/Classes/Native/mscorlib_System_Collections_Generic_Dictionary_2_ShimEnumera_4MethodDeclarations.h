#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2143;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2134;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11385_gshared (ShimEnumerator_t2143 * __this, Dictionary_2_t2134 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11385(__this, ___host, method) (( void (*) (ShimEnumerator_t2143 *, Dictionary_2_t2134 *, const MethodInfo*))ShimEnumerator__ctor_m11385_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11386_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11386(__this, method) (( bool (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_MoveNext_m11386_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t658  ShimEnumerator_get_Entry_m11387_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11387(__this, method) (( DictionaryEntry_t658  (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_get_Entry_m11387_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11388_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11388(__this, method) (( Object_t * (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_get_Key_m11388_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11389_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11389(__this, method) (( Object_t * (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_get_Value_m11389_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11390_gshared (ShimEnumerator_t2143 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11390(__this, method) (( Object_t * (*) (ShimEnumerator_t2143 *, const MethodInfo*))ShimEnumerator_get_Current_m11390_gshared)(__this, method)

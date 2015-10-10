#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t2098;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2086;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10682_gshared (ShimEnumerator_t2098 * __this, Dictionary_2_t2086 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10682(__this, ___host, method) (( void (*) (ShimEnumerator_t2098 *, Dictionary_2_t2086 *, const MethodInfo*))ShimEnumerator__ctor_m10682_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10683_gshared (ShimEnumerator_t2098 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10683(__this, method) (( bool (*) (ShimEnumerator_t2098 *, const MethodInfo*))ShimEnumerator_MoveNext_m10683_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t658  ShimEnumerator_get_Entry_m10684_gshared (ShimEnumerator_t2098 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10684(__this, method) (( DictionaryEntry_t658  (*) (ShimEnumerator_t2098 *, const MethodInfo*))ShimEnumerator_get_Entry_m10684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10685_gshared (ShimEnumerator_t2098 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10685(__this, method) (( Object_t * (*) (ShimEnumerator_t2098 *, const MethodInfo*))ShimEnumerator_get_Key_m10685_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10686_gshared (ShimEnumerator_t2098 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10686(__this, method) (( Object_t * (*) (ShimEnumerator_t2098 *, const MethodInfo*))ShimEnumerator_get_Value_m10686_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10687_gshared (ShimEnumerator_t2098 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10687(__this, method) (( Object_t * (*) (ShimEnumerator_t2098 *, const MethodInfo*))ShimEnumerator_get_Current_m10687_gshared)(__this, method)

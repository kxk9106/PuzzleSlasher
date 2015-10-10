#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2068;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2056;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10362_gshared (ShimEnumerator_t2068 * __this, Dictionary_2_t2056 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10362(__this, ___host, method) (( void (*) (ShimEnumerator_t2068 *, Dictionary_2_t2056 *, const MethodInfo*))ShimEnumerator__ctor_m10362_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10363_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10363(__this, method) (( bool (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_MoveNext_m10363_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t658  ShimEnumerator_get_Entry_m10364_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10364(__this, method) (( DictionaryEntry_t658  (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_get_Entry_m10364_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10365_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10365(__this, method) (( Object_t * (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_get_Key_m10365_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10366_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10366(__this, method) (( Object_t * (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_get_Value_m10366_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10367_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10367(__this, method) (( Object_t * (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_get_Current_m10367_gshared)(__this, method)

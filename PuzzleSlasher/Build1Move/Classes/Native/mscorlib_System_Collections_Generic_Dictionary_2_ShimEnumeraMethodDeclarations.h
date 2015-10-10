#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1984;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1970;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9265_gshared (ShimEnumerator_t1984 * __this, Dictionary_2_t1970 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9265(__this, ___host, method) (( void (*) (ShimEnumerator_t1984 *, Dictionary_2_t1970 *, const MethodInfo*))ShimEnumerator__ctor_m9265_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9266_gshared (ShimEnumerator_t1984 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9266(__this, method) (( bool (*) (ShimEnumerator_t1984 *, const MethodInfo*))ShimEnumerator_MoveNext_m9266_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t658  ShimEnumerator_get_Entry_m9267_gshared (ShimEnumerator_t1984 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9267(__this, method) (( DictionaryEntry_t658  (*) (ShimEnumerator_t1984 *, const MethodInfo*))ShimEnumerator_get_Entry_m9267_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9268_gshared (ShimEnumerator_t1984 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9268(__this, method) (( Object_t * (*) (ShimEnumerator_t1984 *, const MethodInfo*))ShimEnumerator_get_Key_m9268_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9269_gshared (ShimEnumerator_t1984 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9269(__this, method) (( Object_t * (*) (ShimEnumerator_t1984 *, const MethodInfo*))ShimEnumerator_get_Value_m9269_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9270_gshared (ShimEnumerator_t1984 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9270(__this, method) (( Object_t * (*) (ShimEnumerator_t1984 *, const MethodInfo*))ShimEnumerator_get_Current_m9270_gshared)(__this, method)

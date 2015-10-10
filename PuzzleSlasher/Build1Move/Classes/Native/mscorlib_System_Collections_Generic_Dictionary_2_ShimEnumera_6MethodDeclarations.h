#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2214;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t594;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12108_gshared (ShimEnumerator_t2214 * __this, Dictionary_2_t594 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12108(__this, ___host, method) (( void (*) (ShimEnumerator_t2214 *, Dictionary_2_t594 *, const MethodInfo*))ShimEnumerator__ctor_m12108_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12109_gshared (ShimEnumerator_t2214 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12109(__this, method) (( bool (*) (ShimEnumerator_t2214 *, const MethodInfo*))ShimEnumerator_MoveNext_m12109_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t658  ShimEnumerator_get_Entry_m12110_gshared (ShimEnumerator_t2214 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12110(__this, method) (( DictionaryEntry_t658  (*) (ShimEnumerator_t2214 *, const MethodInfo*))ShimEnumerator_get_Entry_m12110_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12111_gshared (ShimEnumerator_t2214 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12111(__this, method) (( Object_t * (*) (ShimEnumerator_t2214 *, const MethodInfo*))ShimEnumerator_get_Key_m12111_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12112_gshared (ShimEnumerator_t2214 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12112(__this, method) (( Object_t * (*) (ShimEnumerator_t2214 *, const MethodInfo*))ShimEnumerator_get_Value_m12112_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12113_gshared (ShimEnumerator_t2214 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12113(__this, method) (( Object_t * (*) (ShimEnumerator_t2214 *, const MethodInfo*))ShimEnumerator_get_Current_m12113_gshared)(__this, method)

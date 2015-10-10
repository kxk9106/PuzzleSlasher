#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1996;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1982;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9322_gshared (ShimEnumerator_t1996 * __this, Dictionary_2_t1982 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9322(__this, ___host, method) (( void (*) (ShimEnumerator_t1996 *, Dictionary_2_t1982 *, const MethodInfo*))ShimEnumerator__ctor_m9322_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9323_gshared (ShimEnumerator_t1996 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9323(__this, method) (( bool (*) (ShimEnumerator_t1996 *, const MethodInfo*))ShimEnumerator_MoveNext_m9323_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t668  ShimEnumerator_get_Entry_m9324_gshared (ShimEnumerator_t1996 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9324(__this, method) (( DictionaryEntry_t668  (*) (ShimEnumerator_t1996 *, const MethodInfo*))ShimEnumerator_get_Entry_m9324_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9325_gshared (ShimEnumerator_t1996 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9325(__this, method) (( Object_t * (*) (ShimEnumerator_t1996 *, const MethodInfo*))ShimEnumerator_get_Key_m9325_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9326_gshared (ShimEnumerator_t1996 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9326(__this, method) (( Object_t * (*) (ShimEnumerator_t1996 *, const MethodInfo*))ShimEnumerator_get_Value_m9326_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9327_gshared (ShimEnumerator_t1996 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9327(__this, method) (( Object_t * (*) (ShimEnumerator_t1996 *, const MethodInfo*))ShimEnumerator_get_Current_m9327_gshared)(__this, method)

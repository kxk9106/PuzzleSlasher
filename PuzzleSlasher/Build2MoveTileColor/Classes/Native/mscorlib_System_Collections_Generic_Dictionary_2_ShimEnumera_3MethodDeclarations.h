#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t2111;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2099;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10744_gshared (ShimEnumerator_t2111 * __this, Dictionary_2_t2099 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10744(__this, ___host, method) (( void (*) (ShimEnumerator_t2111 *, Dictionary_2_t2099 *, const MethodInfo*))ShimEnumerator__ctor_m10744_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10745_gshared (ShimEnumerator_t2111 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10745(__this, method) (( bool (*) (ShimEnumerator_t2111 *, const MethodInfo*))ShimEnumerator_MoveNext_m10745_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t668  ShimEnumerator_get_Entry_m10746_gshared (ShimEnumerator_t2111 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10746(__this, method) (( DictionaryEntry_t668  (*) (ShimEnumerator_t2111 *, const MethodInfo*))ShimEnumerator_get_Entry_m10746_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10747_gshared (ShimEnumerator_t2111 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10747(__this, method) (( Object_t * (*) (ShimEnumerator_t2111 *, const MethodInfo*))ShimEnumerator_get_Key_m10747_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10748_gshared (ShimEnumerator_t2111 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10748(__this, method) (( Object_t * (*) (ShimEnumerator_t2111 *, const MethodInfo*))ShimEnumerator_get_Value_m10748_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10749_gshared (ShimEnumerator_t2111 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10749(__this, method) (( Object_t * (*) (ShimEnumerator_t2111 *, const MethodInfo*))ShimEnumerator_get_Current_m10749_gshared)(__this, method)

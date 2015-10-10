#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2007;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1997;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9537_gshared (ShimEnumerator_t2007 * __this, Dictionary_2_t1997 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9537(__this, ___host, method) (( void (*) (ShimEnumerator_t2007 *, Dictionary_2_t1997 *, const MethodInfo*))ShimEnumerator__ctor_m9537_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9538_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9538(__this, method) (( bool (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_MoveNext_m9538_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t658  ShimEnumerator_get_Entry_m9539_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9539(__this, method) (( DictionaryEntry_t658  (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_get_Entry_m9539_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9540_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9540(__this, method) (( Object_t * (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_get_Key_m9540_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9541_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9541(__this, method) (( Object_t * (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_get_Value_m9541_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9542_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9542(__this, method) (( Object_t * (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_get_Current_m9542_gshared)(__this, method)

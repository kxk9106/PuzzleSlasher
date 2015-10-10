#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2030;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2025;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9781_gshared (Enumerator_t2030 * __this, Dictionary_2_t2025 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9781(__this, ___dictionary, method) (( void (*) (Enumerator_t2030 *, Dictionary_2_t2025 *, const MethodInfo*))Enumerator__ctor_m9781_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9782_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9782(__this, method) (( Object_t * (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9782_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t668  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9783_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9783(__this, method) (( DictionaryEntry_t668  (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9783_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9784_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9784(__this, method) (( Object_t * (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9784_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9785_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9785(__this, method) (( Object_t * (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9786_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9786(__this, method) (( bool (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_MoveNext_m9786_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2026  Enumerator_get_Current_m9787_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9787(__this, method) (( KeyValuePair_2_t2026  (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_get_Current_m9787_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9788_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9788(__this, method) (( Object_t * (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_get_CurrentKey_m9788_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m9789_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9789(__this, method) (( int32_t (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_get_CurrentValue_m9789_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m9790_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9790(__this, method) (( void (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_VerifyState_m9790_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9791_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9791(__this, method) (( void (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_VerifyCurrent_m9791_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m9792_gshared (Enumerator_t2030 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9792(__this, method) (( void (*) (Enumerator_t2030 *, const MethodInfo*))Enumerator_Dispose_m9792_gshared)(__this, method)

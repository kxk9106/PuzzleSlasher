﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1977;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1970;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9214_gshared (Enumerator_t1977 * __this, Dictionary_2_t1970 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9214(__this, ___dictionary, method) (( void (*) (Enumerator_t1977 *, Dictionary_2_t1970 *, const MethodInfo*))Enumerator__ctor_m9214_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9215_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9215(__this, method) (( Object_t * (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9215_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t658  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9216_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9216(__this, method) (( DictionaryEntry_t658  (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9216_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9217_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9217(__this, method) (( Object_t * (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9217_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9218_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9218(__this, method) (( Object_t * (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9218_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9219_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9219(__this, method) (( bool (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_MoveNext_m9219_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1971  Enumerator_get_Current_m9220_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9220(__this, method) (( KeyValuePair_2_t1971  (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_get_Current_m9220_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m9221_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9221(__this, method) (( int32_t (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_get_CurrentKey_m9221_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9222_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9222(__this, method) (( Object_t * (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_get_CurrentValue_m9222_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9223_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9223(__this, method) (( void (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_VerifyState_m9223_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9224_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9224(__this, method) (( void (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_VerifyCurrent_m9224_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9225_gshared (Enumerator_t1977 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9225(__this, method) (( void (*) (Enumerator_t1977 *, const MethodInfo*))Enumerator_Dispose_m9225_gshared)(__this, method)

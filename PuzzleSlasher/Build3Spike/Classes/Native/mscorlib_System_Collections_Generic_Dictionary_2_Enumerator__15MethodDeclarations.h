﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t2199;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2194;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11922_gshared (Enumerator_t2199 * __this, Dictionary_2_t2194 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11922(__this, ___dictionary, method) (( void (*) (Enumerator_t2199 *, Dictionary_2_t2194 *, const MethodInfo*))Enumerator__ctor_m11922_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11923_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11923(__this, method) (( Object_t * (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11923_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t668  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11924_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11924(__this, method) (( DictionaryEntry_t668  (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11924_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11925_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11925(__this, method) (( Object_t * (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11925_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11926_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11926(__this, method) (( Object_t * (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11926_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11927_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11927(__this, method) (( bool (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_MoveNext_m11927_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t2195  Enumerator_get_Current_m11928_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11928(__this, method) (( KeyValuePair_2_t2195  (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_get_Current_m11928_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11929_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11929(__this, method) (( Object_t * (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_get_CurrentKey_m11929_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m11930_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11930(__this, method) (( uint8_t (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_get_CurrentValue_m11930_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m11931_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11931(__this, method) (( void (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_VerifyState_m11931_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11932_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11932(__this, method) (( void (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_VerifyCurrent_m11932_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m11933_gshared (Enumerator_t2199 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11933(__this, method) (( void (*) (Enumerator_t2199 *, const MethodInfo*))Enumerator_Dispose_m11933_gshared)(__this, method)

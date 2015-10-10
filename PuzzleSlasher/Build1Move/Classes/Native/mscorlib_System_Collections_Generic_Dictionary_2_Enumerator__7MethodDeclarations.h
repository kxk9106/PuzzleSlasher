﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2062;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2056;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10316_gshared (Enumerator_t2062 * __this, Dictionary_2_t2056 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10316(__this, ___dictionary, method) (( void (*) (Enumerator_t2062 *, Dictionary_2_t2056 *, const MethodInfo*))Enumerator__ctor_m10316_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10317_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10317(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10317_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t658  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10318_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10318(__this, method) (( DictionaryEntry_t658  (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10318_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10319_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10319(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10319_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10320_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10320(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10321_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10321(__this, method) (( bool (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_MoveNext_m10321_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2057  Enumerator_get_Current_m10322_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10322(__this, method) (( KeyValuePair_2_t2057  (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_Current_m10322_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m10323_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10323(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_CurrentKey_m10323_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m10324_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10324(__this, method) (( int64_t (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_CurrentValue_m10324_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m10325_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10325(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_VerifyState_m10325_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10326_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10326(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_VerifyCurrent_m10326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m10327_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10327(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_Dispose_m10327_gshared)(__this, method)

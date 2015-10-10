#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2014;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2009;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9555_gshared (Enumerator_t2014 * __this, Dictionary_2_t2009 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9555(__this, ___dictionary, method) (( void (*) (Enumerator_t2014 *, Dictionary_2_t2009 *, const MethodInfo*))Enumerator__ctor_m9555_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9556_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9556(__this, method) (( Object_t * (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9556_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t668  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9557_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9557(__this, method) (( DictionaryEntry_t668  (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9557_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9558_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9558(__this, method) (( Object_t * (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9558_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9559_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9559(__this, method) (( Object_t * (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9559_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9560_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9560(__this, method) (( bool (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_MoveNext_m9560_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2010  Enumerator_get_Current_m9561_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9561(__this, method) (( KeyValuePair_2_t2010  (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_get_Current_m9561_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9562_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9562(__this, method) (( Object_t * (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_get_CurrentKey_m9562_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9563_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9563(__this, method) (( Object_t * (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_get_CurrentValue_m9563_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9564_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9564(__this, method) (( void (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_VerifyState_m9564_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9565_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9565(__this, method) (( void (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_VerifyCurrent_m9565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9566_gshared (Enumerator_t2014 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9566(__this, method) (( void (*) (Enumerator_t2014 *, const MethodInfo*))Enumerator_Dispose_m9566_gshared)(__this, method)

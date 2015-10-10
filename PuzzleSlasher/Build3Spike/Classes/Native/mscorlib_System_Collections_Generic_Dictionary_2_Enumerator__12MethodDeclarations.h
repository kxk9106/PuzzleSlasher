#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2150;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2147;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11404_gshared (Enumerator_t2150 * __this, Dictionary_2_t2147 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11404(__this, ___dictionary, method) (( void (*) (Enumerator_t2150 *, Dictionary_2_t2147 *, const MethodInfo*))Enumerator__ctor_m11404_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11405_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11405(__this, method) (( Object_t * (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11405_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t668  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11406_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11406(__this, method) (( DictionaryEntry_t668  (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11406_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11407_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11407(__this, method) (( Object_t * (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11407_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11408_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11408(__this, method) (( Object_t * (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11408_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11409_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11409(__this, method) (( bool (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_MoveNext_m11409_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2121  Enumerator_get_Current_m11410_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11410(__this, method) (( KeyValuePair_2_t2121  (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_get_Current_m11410_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11411_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11411(__this, method) (( Object_t * (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_get_CurrentKey_m11411_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2010  Enumerator_get_CurrentValue_m11412_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11412(__this, method) (( KeyValuePair_2_t2010  (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_get_CurrentValue_m11412_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m11413_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11413(__this, method) (( void (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_VerifyState_m11413_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11414_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11414(__this, method) (( void (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_VerifyCurrent_m11414_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m11415_gshared (Enumerator_t2150 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11415(__this, method) (( void (*) (Enumerator_t2150 *, const MethodInfo*))Enumerator_Dispose_m11415_gshared)(__this, method)

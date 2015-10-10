#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t2105;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2099;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10701_gshared (Enumerator_t2105 * __this, Dictionary_2_t2099 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10701(__this, ___dictionary, method) (( void (*) (Enumerator_t2105 *, Dictionary_2_t2099 *, const MethodInfo*))Enumerator__ctor_m10701_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10702_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10702(__this, method) (( Object_t * (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10702_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t668  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10703_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10703(__this, method) (( DictionaryEntry_t668  (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10703_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10704_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10704(__this, method) (( Object_t * (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10704_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10705_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10705(__this, method) (( Object_t * (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10705_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10706_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10706(__this, method) (( bool (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_MoveNext_m10706_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2100  Enumerator_get_Current_m10707_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10707(__this, method) (( KeyValuePair_2_t2100  (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_get_Current_m10707_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10708_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10708(__this, method) (( uint64_t (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_get_CurrentKey_m10708_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10709_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10709(__this, method) (( Object_t * (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_get_CurrentValue_m10709_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10710_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10710(__this, method) (( void (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_VerifyState_m10710_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10711_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10711(__this, method) (( void (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_VerifyCurrent_m10711_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10712_gshared (Enumerator_t2105 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10712(__this, method) (( void (*) (Enumerator_t2105 *, const MethodInfo*))Enumerator_Dispose_m10712_gshared)(__this, method)

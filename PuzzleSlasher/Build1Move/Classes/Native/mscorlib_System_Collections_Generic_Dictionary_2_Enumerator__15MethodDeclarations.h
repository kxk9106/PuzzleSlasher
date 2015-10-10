#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t2186;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2181;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11857_gshared (Enumerator_t2186 * __this, Dictionary_2_t2181 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11857(__this, ___dictionary, method) (( void (*) (Enumerator_t2186 *, Dictionary_2_t2181 *, const MethodInfo*))Enumerator__ctor_m11857_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11858_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11858(__this, method) (( Object_t * (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11858_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t658  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11859_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11859(__this, method) (( DictionaryEntry_t658  (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11859_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11860_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11860(__this, method) (( Object_t * (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11860_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11861_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11861(__this, method) (( Object_t * (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11861_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11862_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11862(__this, method) (( bool (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_MoveNext_m11862_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t2182  Enumerator_get_Current_m11863_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11863(__this, method) (( KeyValuePair_2_t2182  (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_get_Current_m11863_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11864_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11864(__this, method) (( Object_t * (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_get_CurrentKey_m11864_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m11865_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11865(__this, method) (( uint8_t (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_get_CurrentValue_m11865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m11866_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11866(__this, method) (( void (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_VerifyState_m11866_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11867_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11867(__this, method) (( void (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_VerifyCurrent_m11867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m11868_gshared (Enumerator_t2186 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11868(__this, method) (( void (*) (Enumerator_t2186 *, const MethodInfo*))Enumerator_Dispose_m11868_gshared)(__this, method)

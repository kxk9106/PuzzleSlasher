#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2137;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2134;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11339_gshared (Enumerator_t2137 * __this, Dictionary_2_t2134 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11339(__this, ___dictionary, method) (( void (*) (Enumerator_t2137 *, Dictionary_2_t2134 *, const MethodInfo*))Enumerator__ctor_m11339_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11340_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11340(__this, method) (( Object_t * (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11340_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t658  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11341_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11341(__this, method) (( DictionaryEntry_t658  (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11341_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11342_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11342(__this, method) (( Object_t * (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11342_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11343_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11343(__this, method) (( Object_t * (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11344_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11344(__this, method) (( bool (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_MoveNext_m11344_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2108  Enumerator_get_Current_m11345_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11345(__this, method) (( KeyValuePair_2_t2108  (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_get_Current_m11345_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11346_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11346(__this, method) (( Object_t * (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_get_CurrentKey_m11346_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t1998  Enumerator_get_CurrentValue_m11347_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11347(__this, method) (( KeyValuePair_2_t1998  (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_get_CurrentValue_m11347_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m11348_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11348(__this, method) (( void (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_VerifyState_m11348_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11349_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11349(__this, method) (( void (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_VerifyCurrent_m11349_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m11350_gshared (Enumerator_t2137 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11350(__this, method) (( void (*) (Enumerator_t2137 *, const MethodInfo*))Enumerator_Dispose_m11350_gshared)(__this, method)

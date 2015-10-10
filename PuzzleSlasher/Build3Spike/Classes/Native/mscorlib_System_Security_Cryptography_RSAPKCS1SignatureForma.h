#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t670;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t770;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t1270  : public AsymmetricSignatureFormatter_t830
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t670 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t770 * ___hash_1;
};

#pragma once

#include "../Cipher.h"

class AtbashCipher: public Cipher
{
public:
	std::string Encrypt(const std::string&);
	std::string Decrypt(const std::string&);

	AtbashCipher() {}
};


#pragma once

#include "../Cipher.h"

class CaesarCipher: public Cipher
{
public:
	std::string Encrypt(const std::string&);
	std::string Decrypt(const std::string&);

	CaesarCipher(int key) : m_Shift(key) {};
private:
	int m_Shift;
};


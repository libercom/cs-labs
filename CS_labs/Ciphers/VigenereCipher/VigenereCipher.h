#pragma once

#include "../Cipher.h"

class VigenereCipher: public Cipher
{
public:
	std::string Encrypt(const std::string&);
	std::string Decrypt(const std::string&);
	
	void ChangeKey(const std::string&);
	
	VigenereCipher(std::string word): m_Key(word) {}
private:
	std::string m_Key;

	std::string GenerateKey(const std::string&, const std::string&);
};


#pragma once

#include "../Cipher.h"

class CaesarCipherWithKey: public Cipher
{
public:
	std::string Encrypt(const std::string&);
	std::string Decrypt(const std::string&);

	CaesarCipherWithKey(int key, const std::string& word): 
		m_Shift(key), m_Alphabet("abcdefghijklmnopqrstuvwxyz"), m_ShiftedAlphabet("")
	{
		std::string lowerCaseWord = Utils::ToLowerCase(word);

		for (char ch: lowerCaseWord)
		{
			if (m_ShiftedAlphabet.find(ch) == std::string::npos)
			{
				m_ShiftedAlphabet += ch;
			}
		}

		for (char ch: m_Alphabet)
		{
			if (m_ShiftedAlphabet.find(ch) == std::string::npos)
			{
				m_ShiftedAlphabet += ch;
			}
		}
	};

private:
	int m_Shift;
	std::string m_Alphabet;
	std::string m_ShiftedAlphabet;
};


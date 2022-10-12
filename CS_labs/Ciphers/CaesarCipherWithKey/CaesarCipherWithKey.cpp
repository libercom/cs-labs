#include "CaesarCipherWithKey.h"

std::string CaesarCipherWithKey::Encrypt(const std::string& message)
{
	std::string encryptedMessage = "";
	std::string lowerCaseMessage = Utils::ToLowerCase(message);

	for (char ch : lowerCaseMessage)
	{
		if (ch != ' ')
		{
			int index = m_Alphabet.find(ch);

			encryptedMessage += m_ShiftedAlphabet[(index + m_Shift) % 26];
		}
		else
		{
			encryptedMessage += ' ';
		}
	}

	return encryptedMessage;
}

std::string CaesarCipherWithKey::Decrypt(const std::string& encryptedMessage)
{
	std::string decryptedMessage = "";
	std::string lowerCaseMessage = Utils::ToLowerCase(encryptedMessage);

	for (char ch: lowerCaseMessage)
	{
		if (ch != ' ')
		{
			int index = m_ShiftedAlphabet.find(ch);

			decryptedMessage += m_Alphabet[(index + 26 - m_Shift) % 26];
		}
		else
		{
			decryptedMessage += ' ';
		}
	}

	return decryptedMessage;
}

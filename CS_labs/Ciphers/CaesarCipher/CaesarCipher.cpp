#include "CaesarCipher.h"

std::string CaesarCipher::Encrypt(const std::string& message)
{
	std::string encryptedMessage = "";
	std::string lowerCaseMessage = Utils::ToLowerCase(message);

	for (char ch: lowerCaseMessage)
	{
		if (ch != ' ')
		{
			encryptedMessage += (ch - 97 + m_Shift) % 26 + 97;
		}
		else
		{
			encryptedMessage += ' ';
		}
	}

	return encryptedMessage;
}

std::string CaesarCipher::Decrypt(const std::string& encryptedMessage)
{
	std::string decryptedMessage = "";
	std::string lowerCaseMessage = Utils::ToLowerCase(encryptedMessage);

	for (char ch: lowerCaseMessage)
	{
		if (ch != ' ')
		{
			decryptedMessage += (ch - 97 + 26 - m_Shift) % 26 + 97;
		}
		else
		{
			decryptedMessage += ' ';
		}
	}

	return decryptedMessage;
}

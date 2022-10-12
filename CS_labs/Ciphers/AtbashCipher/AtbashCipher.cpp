#include "AtbashCipher.h"

std::string AtbashCipher::Encrypt(const std::string& message)
{
	std::string lowerCaseMessage = Utils::ToLowerCase(message);
	std::string encryptedMessage = "";

	for (char ch: lowerCaseMessage)
	{
		if (ch != ' ')
		{
			encryptedMessage += 'z' - ch + 'a';
		}
		else
		{
			encryptedMessage += ' ';
		}
	}

	return encryptedMessage;
}

std::string AtbashCipher::Decrypt(const std::string& encryptedMessage)
{
	std::string lowerCaseMessage = Utils::ToLowerCase(encryptedMessage);
	std::string decryptedMessage = "";

	for (char ch: lowerCaseMessage)
	{
		if (ch != ' ')
		{
			decryptedMessage += 'z' - ch + 'a';
		}
		else
		{
			decryptedMessage += ' ';
		}
	}

	return decryptedMessage;
}

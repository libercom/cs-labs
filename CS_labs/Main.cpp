#include <iostream>

#include "Ciphers/CaesarCipher/CaesarCipher.h"
#include "Ciphers/CaesarCipherWithKey/CaesarCipherWithKey.h"
#include "Ciphers/VigenereCipher/VigenereCipher.h"
#include "Ciphers/AtbashCipher/AtbashCipher.h"

int main()
{
	CaesarCipher caesarCipher(3);
	CaesarCipherWithKey caesarCipherWithKey(3, "mau");
	VigenereCipher vigenereCipher("man");
	AtbashCipher atbashCipher;

	{
		std::string encryptedMessage = caesarCipher.Encrypt("Text Normal");
		std::string decryptedMessage = caesarCipher.Decrypt(encryptedMessage);
		std::cout << encryptedMessage << " -> " << decryptedMessage << '\n';
	}

	{
		std::string encryptedMessage = caesarCipherWithKey.Encrypt("Text Normal");
		std::string decryptedMessage = caesarCipherWithKey.Decrypt(encryptedMessage);
		std::cout << encryptedMessage << " -> " << decryptedMessage << '\n';
	}

	{
		std::string encryptedMessage = atbashCipher.Encrypt("Text Normal");
		std::string decryptedMessage = atbashCipher.Decrypt(encryptedMessage);
		std::cout << encryptedMessage << " -> " << decryptedMessage << '\n';
	}

	{
		std::string encryptedMessage = vigenereCipher.Encrypt("Text Normal");
		std::string decryptedMessage = vigenereCipher.Decrypt(encryptedMessage);
		std::cout << encryptedMessage << " -> " << decryptedMessage << '\n';
	}
}

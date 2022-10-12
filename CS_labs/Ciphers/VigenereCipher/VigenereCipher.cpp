#include "VigenereCipher.h"

std::string VigenereCipher::Encrypt(const std::string& message)
{
    std::string encryptedMessage = "";
    std::string lowerCaseMessage = Utils::ToLowerCase(message);
    std::string key = GenerateKey(lowerCaseMessage, m_Key);

    for (int i = 0; i < lowerCaseMessage.length(); i++)
    {
        char ch = lowerCaseMessage[i];

        if (ch != ' ')
        {
            encryptedMessage += (ch + key[i] - 194) % 26 + 'a';
        }
        else
        {
            encryptedMessage += ' ';
        }
    }

    return encryptedMessage;
}

std::string VigenereCipher::Decrypt(const std::string& encryptedMessage)
{
    std::string decryptedMessage = "";
    std::string lowerCaseMessage = Utils::ToLowerCase(encryptedMessage);
    std::string key = GenerateKey(lowerCaseMessage, m_Key);

    for (int i = 0; i < lowerCaseMessage.length(); i++)
    {
        char ch = lowerCaseMessage[i];

        if (ch != ' ')
        {
            decryptedMessage += (ch - key[i] + 26) % 26 + 'a';
        }
        else
        {
            decryptedMessage += ' ';
        }
    }

    return decryptedMessage;
}

void VigenereCipher::ChangeKey(const std::string& word)
{
    m_Key = word;
}

std::string VigenereCipher::GenerateKey(const std::string& message, const std::string& word)
{
    std::string key(word);

    for (int i = 0; ; i++)
    {
        if (message.size() == i)
            i = 0;

        if (key.size() == message.size())
            break;

        key.push_back(key[i]);
    }

    return key;
}

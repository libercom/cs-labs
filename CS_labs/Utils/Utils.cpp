#include "Utils.h"

std::string Utils::ToLowerCase(const std::string& str)
{
	std::string newStr = "";

	for (char ch: str)
	{
		if (ch >= 65 && ch <= 90)
		{
			newStr += ch + 32;
		}
		else
		{
			newStr += ch;
		}
	}

	return newStr;
}

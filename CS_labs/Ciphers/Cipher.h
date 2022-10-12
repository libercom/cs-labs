#pragma once

#include "../Utils/Utils.h"

#include <string>
#include <algorithm>

class Cipher
{
public:
	virtual std::string Encrypt(const std::string&) = 0;
	virtual std::string Decrypt(const std::string&) = 0;
private:
};
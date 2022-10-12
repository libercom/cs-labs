# The title of the work

### Course: Cryptography & Security

### Author: Vasile Ignat

---

## Theory

A classical cipher is a form of encryption used in cryptography that was once popular
but is now largely out of usage. The majority of classical ciphers may practically be
computed and solved by hand, in contrast to modern cryptographic techniques.
With contemporary technology, they may often be broken fairly easily though.
The phrase covers everything from basic systems used since Greek and Roman times to
complex Renaissance ciphers and beyond, including World War II encryption like the Enigma machine.

### Caesar Cipher

One of the simplest and most well-known encryption methods is the Caesar cipher,
often known as Caesar's cipher, the shift cipher, Caesar's code, or Caesar shift.
Each letter in the plaintext is replaced by a letter that is located a specific number
of positions farther down the alphabet in this form of substitution cipher.
With a left shift of 3, for instance, D would become A, E would become B, and so on.
Julius Caesar, who used it in his personal communications, gave it its name.

### Caesar Cipher with alphabet permutation

This is quite similar to the traditional Caesar cipher, the only difference being that it has one
more key, which swaps the letter of the alphabet.

### Vigenere Cipher

The Vigenère cipher uses a sequence of interconnected Caesar ciphers that are based on
the letters of a keyword to encrypt alphabetic text. It makes use of a polyalphabetic
replacement technique.

### Atbash Cipher

The Atbash cipher is a very common and simple cipher that simply encodes a message with the reverse of the alphabet. Initially it was used with Hebrew. Basically, when encoded, an "A" becomes a "Z", "B" turns into "Y", etc.

## Objectives:

1. Get familiar with the basics of cryptography and classical ciphers.

2. Implement 4 types of the classical ciphers:

    - Caesar cipher with one key used for substitution (as explained above),
    - Caesar cipher with one key used for substitution, and a permutation of the alphabet,
    - Vigenere cipher,
    - Atbash cipher.

## Implementation description

### Atbash Cipher

The Atbash Cipher is one the easiest cipher out there. The message can be encoded and decoded with the reverse letter of the alphabet. In my example it looks like this:

```
std::string AtbashCipher::Encrypt(const std::string& message)
{
	std::string encryptedMessage = "";

	for (char ch: message)
	{
			encryptedMessage += 'z' - ch + 'a';
	}

	return encryptedMessage;
}
```

Decryption is done the same way.

### Caesar Cipher

## Conclusions / Screenshots / Results

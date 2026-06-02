# cpp-encryption-ciphers
Normal Encryption and Decryption
A simple C++ console application that encrypts and decrypts text messages using a custom substitution cipher.
It allows the user to input any text message (up to 100 characters), safely matches each character against a custom translation map, and outputs the resulting encrypted or decrypted string.
# XOR Encryptor AND Decryptor 

A lightweight C++ console application that encrypts and decrypts text using a multi-byte **XOR (Exclusive OR) Cipher**. 
How It Works
The application uses a symmetric key sequence `[3, 5, 4]` to obfuscate text. Because the key is smaller than the input text, the program utilizes the modulo operator (`k % 3`) to continuously cycle through the key array.

### The Math Behind XOR
XOR is a bitwise operation that returns `1` only when the input bits are different. A unique property of XOR is that it is its own inverse. If you XOR a character with a key, you get the ciphertext. If you XOR that ciphertext with the same key again, you get the original character back.

**Example:**
* Character: `'A'` (ASCII `65` / Binary `01000001`)
* Key: `5` (Binary `00000101`)
* **Encryption:** `01000001 ^ 00000101 = 01000100` (ASCII `68`, which is `'D'`)
* **Decryption:** `01000100 ^ 00000101 = 01000001` (ASCII `65`, back to `'A'`)

---

## Features
* **Pattern key:** Uses a 3-byte repeating key structure to prevent simple single-byte frequency analysis.
* **Symmetric Logic:** Implements identical mathematical execution paths for both encryption and decryption stages.

### Prerequisites
Use Visual Studio with Cpp installed for smooth operation

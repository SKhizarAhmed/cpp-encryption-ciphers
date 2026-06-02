#include <iostream>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;
int main() {
	char txt[100];
	int choice;
	int key[3] = { 3,5,4 };
	cout << "Welcome to XOR Encryptor/Decryptor" << endl;
	cout << "Do you want to Encrypt OR Decrypt, Enter that number " << endl;
	cout << "\n1.XOR Encrypt";
	cout << "\n2.XOR Decrypt"<<endl;
	cin >> choice;
	if (choice == 1) {
		cin.ignore();
		cout << "Enter the text to be Encrypted: ";
		cin.get(txt, 100);
		int x = strlen(txt);
		string XOR_encrypt;
		for (int k = 0; k < x; k++) {
			char place_holder = txt[k];
			XOR_encrypt += place_holder ^ key[k % 3];
		}
		cout << "\nYour encrypted txt is: " << XOR_encrypt;
	}
	else if (choice == 2) {
		cin.ignore();
		cout << "Enter the text to be Decrypted: ";
		cin.get(txt, 100);
		int x = strlen(txt);
		string XOR_decrypt;
		for (int k = 0; k < x; k++) {
			char place_holder = txt[k];
			XOR_decrypt += place_holder ^ key[k % 3];
		}
		cout << "\nYour decrypted txt is: " << XOR_decrypt;
	}
	else {
		cout << "Invalid Option";
	}
	return 0;
}


/*The purpose of k%3 is that as the iteration updates we will divide it by 3 and the remainder
		* which will in the range of 0,1,2 (less than 3) will serve as index of key which exactly have 3
		* elements
		so randomized XOR Operation will be performed with a repetition structure of 3,5,4 
		The operator of XOR is ^
		Also to understand XOR operation you might need a familarity with binary like if key = 5
		and we need to XOR the letter 'A' (Note: 'a' and 'A' are different due to difference in ASCII code)
		ASCII code for A is 65
		XOR returns 1 whenever the inputs are different and returns 0 when inputs are same(i.e 0 if A is 1 and B is 1) and (1 if A is 0 or B is 1/ vice versa)
		IN BINARY: 01000001
		5 in BINARY : 00000101
		Performing XOR: A ^ key
		01000001 ^ 5 = 01000001 ^ 00000101 = 01000100 = 68 
		68 in ASCII is D
		so with changing key the XOR is different not with the same gap
		The decryption logic is also simply if you XOR 'D' with the same key 5 it will return 'A'
		*/


/*
#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
	char txt[100];
	int choice;
	string encrypt_txt;
	string decrypt_txt;
	string cypher_letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*(){}[]:;<>?/`~_-+=";
	string translated = "T1rQzOPe7Yy94ilIL2kJ0MnBxZRgVcCV!@#$%^&*(){}[]:;<>?/`~_-+=hHsSbdfgjmoptuwADFGHJKLNUX3568";
	cout << "Welcome to our app"<<endl;
	cout << "Select the operation you would like to perform: "<<endl;
	cout << "1. Encrypt";
	cout << "\n2. Decrypt"<<endl;
	cin >> choice;
	if (choice == 1) {
		cin.ignore();
		cout << "Enter your text to be Encypted (Max limit: 100): ";
		cin.get(txt, 100);
		int txt_len = strlen(txt);
		for (int k = 0; k < txt_len; k++) {
			char current = txt[k];
			int a = cypher_letters.find(current);
			encrypt_txt += translated[a];
		}
		cout << "\nYour Encrypted text is : " << encrypt_txt<<endl;
	}
	else if (choice == 2) {
		cin.ignore();
		cout << "Enter your text to be Decrypted (Max limit: 100): ";
		cin.get(txt, 100);
		int txt_len = strlen(txt);
		for (int k = 0; k < txt_len; k++) {
			char current = txt[k];
			int a = translated.find(current);
			decrypt_txt += cypher_letters[a];
		}
		cout << "\nYour Decrypted text is : " << decrypt_txt << endl;
	}
	else {
		cout << "Invalid option!";
	}
	return 0;
}
*/
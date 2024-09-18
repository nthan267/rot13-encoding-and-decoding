#include<iostream>
#include<string>
#include<cctype>
using namespace std;

#include <string>
#include <cctype>

//Encryptor rot13
std::string Encrypt( std::string& word) {
	std::string output;
	for (char c : word) {
		if (std::isalpha(c)) {
			//checking  for uppercase and lowercase
			char base = std::isupper(c) ? 'A' : 'a';

			// shifting by 13.
			c = ((c - base + 13) % 26) + base;
		}
		output += c;
	}
	return output;
}

// Decryptor rot 13

string Decrypt( string& word) {
	string result;
	for (char c : word) {
		if (isalpha(c)) {
			//checking  for uppercase and lowercase
			char low = isupper(c) ? 'A' : 'a'; 

			// shift by 13 
			c = ((c - low + 13) % 26) + low;
		}
		result += c;
	};
	return result;
};


int main() {
	string key;
	cout << "Enter a word " << "\n";
	cin >> key;
	cout << "\n";

	string done = Encrypt(key);
	cout << "Encryptor loading..." << "\n";
	cout << "Encrypted key is: " << done << "\n\n\n";

	cout << "Decryptor loading.... " << "\n";
	string decrypt = Decrypt(done);
	cout << "Decrypted key is: " <<decrypt<< endl;
	

	};


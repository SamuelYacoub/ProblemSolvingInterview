#include<iostream>
using namespace std;

string toUpper(string word) {
	for (char& c : word) {
		c = toupper(c);
	
	}
	return word;

}

string toLower(string word) {
	for (char& c : word) {
		c = tolower(c);

	}
	return word;

}

int main() {

	string word;
	cin >> word;

	int upper_count = 0;
	int lower_count = 0;

	for (int i = 0; i < word.length(); i++) {
		
		if (int(word[i]) >= 65 && int(word[i]) <= 90){
			upper_count++;
		}
		else
			lower_count++;
	
	
	}
	
	if (upper_count>lower_count) {
		cout << toUpper(word);
	}
	else
		cout << toLower(word);




}
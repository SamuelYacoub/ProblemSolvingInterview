#include<iostream>
#include<string>
using namespace std;

string toLower(string s) {
	for (char& c : s) {
		c = tolower(c);
	}
	return s;
}

int main() {


	bool Aisbigger = false;
	bool Bisbigger = false;
	bool AequalB = false;

	string AA, BB;
	cin >> AA >> BB;
	string A = toLower(AA);
	string B = toLower(BB);

	int size = A.length();

	for (int i = 0; i < size; i++) {
		if (A[i] > B[i]) {
			Aisbigger = true;
			break;
		}
		else if (A[i] < B[i]) {
			Bisbigger = true;
			break;
		}
		else
			continue;
		
	
	}

	if (Aisbigger) {
		cout << 1;
	}
	else if (Bisbigger) {
		cout << -1;
	}
	else
		cout<<0;
}
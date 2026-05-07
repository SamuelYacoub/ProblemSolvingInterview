#include<iostream>
#include<string>
using namespace std;



int main() {

	string input;
	cin >> input;
	int distinct_number = 0;

	int arr[26];
	for (int i = 0; i < 26; i++) {
		arr[i] = 0;
	
	}
	for (int i = 0; i < input.length(); i++) {
		arr[int(input[i]) - 97]++;

	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] != 0) {

			distinct_number++;

		}
	}

	if (distinct_number % 2 == 0) {

		cout << "CHAT WITH HER!";
	}
	else
		cout << "IGNORE HIM!";


	


}
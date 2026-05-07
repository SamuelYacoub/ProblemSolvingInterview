#include<iostream>
using namespace std;
int main() {
	int Atimes = 0;
	int Dtimes = 0;

	int number_of_games;
	cin >> number_of_games;
	string word;
	cin >> word;

	for (int i = 0; i < number_of_games; i++) {
		if (word[i] == 'A') {
			Atimes++;
		}
		else
			Dtimes++;
		
	}

	if (Atimes > Dtimes)
		cout << "Anton";
	else if (Atimes < Dtimes)
		cout << "Danik";
	else
		cout << "Friendship";
	return 0;
}
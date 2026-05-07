#include<iostream>
using namespace std;

int main() {
	int stones_number;
	cin >> stones_number;

	string stones;
	cin >> stones;
	int counter = 0;
	for (int i = 0; i < stones_number; i++) {
		if (stones[i] == stones[i + 1]) {
			counter++;
		}

		else
			continue;
	
	}
	cout << counter;
}
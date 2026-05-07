#include<iostream>
using namespace std;

int main() {

	int arr[5][5];
	int x, y;

	int moves = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];



		}
	
	
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if(arr[i][j] == 1) {
				x = i;
				y = j;
			}
		}

	}

	if (x == 0) {
		moves += 2;
	}
	if (x == 1) {
		moves += 1;
	}
	if (x == 3) {
		moves += 1;
	}
	if (x == 4) {
		moves += 2;
	}

	if (y == 0) {
		moves += 2;
	}
	if (y == 1) {
		moves += 1;
	}
	if (y == 3) {
		moves += 1;
	}
	if (y == 4) {
		moves += 2;
	}



	cout << moves;

}
#include<iostream>
using namespace std;
int main() {
	int fence_height;
	int number_of_friends;
	int mininum_width=0;

	cin >> number_of_friends >> fence_height;
	for (int i = 0; i < number_of_friends; i++) {
		int temp;
		cin >> temp;
		if (temp > fence_height) {
			mininum_width += 2;
		}
		else
			mininum_width += 1;
	}

	cout << mininum_width;
	return 0;
}
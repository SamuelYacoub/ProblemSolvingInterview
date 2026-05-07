#include<iostream>
using namespace std;
int main() {

	int pvalue, vvalue, tvalue;
	int n_problems;
	cin >> n_problems;
	int solved_problems_counter=0;

	for (int i = 0; i < n_problems; i++) {
		int one_counter = 0;
		cin >> pvalue;
		if (pvalue == 1) {
			one_counter++;
		}
		cin >> vvalue;
		if (vvalue == 1) {
			one_counter++;
		}
		cin >> tvalue;
		if (tvalue == 1) {
			one_counter++;
		}

		if (one_counter >= 2) {
		
			solved_problems_counter++;
		}

	}

	cout << solved_problems_counter;
	return 0;
}
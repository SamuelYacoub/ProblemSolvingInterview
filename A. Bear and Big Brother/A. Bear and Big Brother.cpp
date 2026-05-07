#include<iostream>
using namespace std;
int main() {

	int a, b;
	cin >> a>> b;
	int years_needed=0;


	do {

		a = a * 3;
		b = b * 2;
		years_needed++;
	} while (b>=a);

	cout << years_needed;
	return 0;
}
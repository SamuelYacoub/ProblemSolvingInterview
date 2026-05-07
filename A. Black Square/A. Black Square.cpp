#include <iostream>
using namespace std;
int main()
{
	int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;

	string s;
	cin >> s;
	int sum_of_calories = 0;

	for (int i = 0; i < s.length(); i++) {
		if (int(s[i]) == 49) {
			sum_of_calories += a1;
		}
		if (int(s[i]) == 50) {
			sum_of_calories += a2;
		}
		if (int(s[i]) == 51) {
			sum_of_calories += a3;
		}
		if (int(s[i]) == 52) {
			sum_of_calories += a4;
		}
	}
	cout << sum_of_calories;

}


#include<iostream>
using namespace std;

int main() {

	int n;
	int group_counts = 1;
	string* arr;
	cin >> n;
	arr = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	
	
	}

	for (int i = 0; i < n; i++) {

		if (i+1 == n)
			break;
		if (arr[i][1] == arr[i + 1][0]) {

			group_counts++;
		}
		else
			continue;



	}


	cout << group_counts;

}
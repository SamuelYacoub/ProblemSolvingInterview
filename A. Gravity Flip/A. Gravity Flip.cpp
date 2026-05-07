#include<iostream>
#include<climits>
using namespace std;

void swap(int& i, int& j) {
	int temp = i;
	i = j;
	j = temp;
};

int main() {
	
	int number_of_columns;
	int number_of_cubs_in_column;

	cin >> number_of_columns;
	int *arr;
	arr = new int[number_of_columns];


	for (int i = 0; i < number_of_columns; i++) {

		cin >> arr[i];
	}
	
	for (int i = 0; i < number_of_columns; i++) {
		
		for (int j = 0; j < number_of_columns; j++) {
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
			}
			else
			{
				continue;
			}
		
		}
		
	}

	for (int i = 0; i < number_of_columns; i++) {

		cout << arr[i]<<" ";
	}






}
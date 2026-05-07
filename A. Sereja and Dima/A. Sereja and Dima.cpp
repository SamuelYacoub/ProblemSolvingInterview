#include<iostream>
using namespace std;
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	int NumberOfCards;
	cin >> NumberOfCards;
	long SerejaPoints = 0, DimaPoints = 0;
	int* arr;
	arr = new int[NumberOfCards];

	for (int i = 0; i < NumberOfCards; i++) {

		cin >> arr[i];
	}

	


	int j = NumberOfCards-1;
	int i = 0;
	int counter = 0;
	while(counter<NumberOfCards) {

		if (counter % 2 == 0) {
			if (arr[i] > arr[j]) {
				SerejaPoints += arr[i];
				i++;

			}
			else
			{
				SerejaPoints += arr[j];
				j--;
			}

			
		}
		else
		{
			if (arr[i] > arr[j]) {
				DimaPoints += arr[i];
				i++;

			}
			else
			{
				DimaPoints += arr[j];
				j--;
			}

		}
			


		counter++;
		
	}

	cout << SerejaPoints << " " << DimaPoints;


}
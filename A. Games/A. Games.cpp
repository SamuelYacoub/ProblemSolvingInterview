#include<iostream>
using namespace std;
int main() {

	int number_of_teams;
	cin >> number_of_teams;

	int* host = new int[number_of_teams];
	int* gust = new int[number_of_teams];

	for (int i = 0; i < number_of_teams; i++)
	{
		cin >> host[i] >> gust[i];
	}

	
	int num_putup_gust = 0;

	for (int i = 0; i < number_of_teams; i++) {
		for (int j = 0; j < number_of_teams; j++) {
		
			if (i == j) {
				continue;
			}
			else {
				if (host[i] == gust[j]) {
					num_putup_gust++;
				
				}
			
				

			}

			
		
		}
	
	
	
	}

	cout << num_putup_gust;
}
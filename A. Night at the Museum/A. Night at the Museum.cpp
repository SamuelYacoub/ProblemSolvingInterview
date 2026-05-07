#include<iostream>
using namespace std;

int main() {

	string name;
	cin >> name;
	int number_of_rotation_needed = 0;


	for (int i = 0; i < name.length(); i++) {
	
		if (i == 0) {
			int value1 = int('a') - 97;
			int value2 = int(name[i]) - 97;

			int number_of_clockwise_rotations;
			if (value1 > value2) {
			
				 number_of_clockwise_rotations = value2 - value1 + 26;
			
			}
			else
			 number_of_clockwise_rotations = abs(value2 - value1);

			int number_of_counter_clockwise_rotations = 26 - number_of_clockwise_rotations;
		

			if (number_of_clockwise_rotations > number_of_counter_clockwise_rotations) {
				number_of_rotation_needed += number_of_counter_clockwise_rotations;

			}
			else
				number_of_rotation_needed += number_of_clockwise_rotations;

			

		
		}


		else{
			int value1 = int(name[i-1]) - 97;
			int value2 = int(name[i]) - 97;

			int number_of_clockwise_rotations;

			if (value1 > value2) {

				number_of_clockwise_rotations = value2 - value1 + 26;

			}
			else
				number_of_clockwise_rotations = abs(value2 - value1);
			int number_of_counter_clockwise_rotations = 26 - number_of_clockwise_rotations;

		
					if (number_of_clockwise_rotations > number_of_counter_clockwise_rotations) {
						number_of_rotation_needed += number_of_counter_clockwise_rotations;

					}
					else
						number_of_rotation_needed += number_of_clockwise_rotations;


		}
		

	}

	cout << number_of_rotation_needed;



}

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int* arr;

    int number_of_events;
    cin >> number_of_events;
    arr = new int[number_of_events];
    for (int i = 0; i < number_of_events; i++) {
        cin >> arr[i];
    
    
    }

    int number_of_officers_aviable=0;
    int number_of_crimes=0;
    int number_of_untreated_crimes=0;
    for (int i = 0; i < number_of_events; i++) {
        if (arr[i] >= 0) {
            number_of_officers_aviable += arr[i];

        }
        else {
        
            if (number_of_officers_aviable > 0) {
                number_of_officers_aviable--;

            }
            else
                number_of_untreated_crimes++;

        
        
        }
           


    }


 
        cout << number_of_untreated_crimes;
    
    

}

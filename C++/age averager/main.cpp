#include <iostream>
using namespace std;

int main () {
    // establish integers/variables
    int age;
    int ageTotal = 0;
    int numberofPeopleEntered = 0;
    
    cout << "Enter first person's age or -1 to quit." << endl;
    cin >> age;
        while(age!=-1) {
            // if condition of while loop is met the following code will continue to loop
            ageTotal = ageTotal + age;
            // required for average
            numberofPeopleEntered++;
            // required for average
            cout << "Enter next person's age or -1 to quit." << endl;
            cin >> age;
        }
    
    cout << "The average age is " << ageTotal/numberofPeopleEntered << endl;
    return 0;
}

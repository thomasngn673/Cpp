#include <iostream>
using namespace std;

int main () {
    float amount;
    // amount of money made
    float principal = 10000;
    float rate = .01;
    // percentage earned
    
    // create a function that finds amount of money earned per day
    for(int day = 1; day <=20; day++) {
        amount = principal * pow(1+rate, day);
        // pow(base, exponent)
        cout << day << "--------" << a << endl;
    }
}

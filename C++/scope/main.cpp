#include <iostream>
using namespace std;

int sandwich = 12
// global variable

int main () {
    double sandwich = 101;
    // variables inside functions can only be accessed from other functions within the original function
    // outside functions cannot access inside another function
    // local variable
    cout << ::sandwich << endl;
    // :: accesses the global variable
}

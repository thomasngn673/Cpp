#include <iostream>
using namespace std;
// function overloading is building more than one function with the same name (printNumber)
void printNumber(int x) {
    cout << "I am printing an integer" << x << endl;
}

void printNumber(float x) {
    cout << "Now I am printing a float" << x << endl;
}

int main () {
    int a = 54;
    float b = 32.12345
    
    printNumber(a);
    printNumber(b);
}

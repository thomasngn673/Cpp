#include <iostream>
#include <cmath>
// allows creation of mathematical functions

using std::cout;
using std::cin;
// cin allows user input
using std::endl;

double power(double base, int exponent) // definition can go after code or be combined with declaration beforehand
// double power(double, int); // declaration of variables, usually goes before code
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
        // i starts at 0 and increases until it is less than the exponent
        // i++ = i=i+1
        // (starting i, i condition, i after loop function)
    {
        result = result * base;
        // example base = 10, exponent = 3
        // 1 * 10 = result
        // 10 * 10 = result
        // 100 * 10 = result
    }
    return result;
}

int main() {
    int base, exponent;
    // declares variables
    cout << "What is the base?\n";
    // asks user for base number
    cin >> base;
    // user inputs base
    // uses >>
    cout <<"What is the exponent?\n";
    cin >> exponent;
    
    double myPower = power(base,exponent);
    cout << myPower << std::endl;
    // requires #include <cmath>
    // base^exponent
    //          double power = pow(base,exponent);
    //          assign output to 'power' for use
    //          'double' function must be include
    return 0;
}

//#include <iostream>
using namespace std;

int main () {
    int age = 19;
    
    switch(age) {
            // used instead of multiple if statements
        case 16:
            // In case they imput 16 ...
            cout << "You can drive now!" << endl;
            break;
            // break the switch if the prior code works
        case 18:
            cout << "You can buy a lottery ticket." << endl;
            break;
        case 21:
            cout << "You can buy beer." << endl;
            break;
        default:
            // if all previous functions fail, this is output
            cout << "You get nothing." << endl;
    }
}

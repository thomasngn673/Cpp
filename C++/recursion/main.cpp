#include <iostream>
using namespace std;

int factorialFinder(int x) {
    if(x==1){
        return 1;
    }
    else {
        return x*factorialFinder(x-1);
        // Ex. 5 * factorialFinder(4) --> what is the value of factorialFinder? --> loops back to original --> x=4 --> 4 * factorialFinder(3) --> continues until function reads 1
    }
}

int main () {
    cout << factorialFinder(5)
}

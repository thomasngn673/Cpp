#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);
// function prototype; defines variable before code is run

int main() {
    int Thomas[3] = {43,54,94};
    int Ash[6] = {32,43,4,6,734,2};
    
    printArray(Thomas,3);
    // Thomas array does not require square brackets after; code recognizes it already as an array
    cout << endl;
    printArray(Ash,6);
}

void printArray(int theArray[], int sizeOfArray) {
    for(int x = 0;x < sizeOfArray;x++) {
        cout << theArray[x] << endl;
    }
}

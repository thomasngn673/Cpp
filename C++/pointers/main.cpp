#include <iostream>
using namespace std;

int main() {
    int fish = 5;
    cout << &fish << endl;
    // & creates memory address
    
    int *fishPointer;
    // creates a pointer
    // pointer points a memory address
    fishPointer = &fish;
    // assigns pointer the value of the memory address
    
    cout << fishPointer << endl;
}

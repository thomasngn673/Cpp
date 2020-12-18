#include <iostream>
using namespace std;

// creates a 9-elemeent array in which each element has a value of 99

int main() {
    int array[9];
    // declare 9-element array
    
    cout << "Element    -   Value" << endl;
    
    for(int x = 0;x<9;x++) {
        // creates an array of indicies from 0-8
        array[x] = 99;
        // assigns entire array to value 99
        cout << x << "      ---------       " << array[x] << endl;
    }
}

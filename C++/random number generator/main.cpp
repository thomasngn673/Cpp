#include <iostream>
#include <cstdlib>
#include <ctime>
// allows us to access time in our computer
using namespace std;

// create a specific result set of random numbers
int main () {
    srand(time(0));
    // changes the algorithm of the random number generator
    // a machine is not truly random
    // changing the number within srand() creates a different set of numbers assigned to the numbers that were input into the parentheses
    // use time(0); it is perpetually changing
    for(int x = 1; x<25; x++); {
        cout << 1+rand()%6 << endl;
        // generates a set of random numbers and divides by 6 (answer will always be 0,1,2,3,4 or 5)
        // add one to make a list of numbers from 1-6
    }
}

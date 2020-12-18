#include <iostream>
using namespace std;

// runs code then tests it as opposed to normal while loop which tests the code then runs it
int main () {
    int x = 1;
    do {
        cout << x << endl;
        x++;
    }
    while (x<10);
}

#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int number;
    int total = 0;
    
    while(x<=5) {
        // code within this while function starts at 1 and will loop until x reaches 5 (cin is output 5 times)
        cin >> number;
        total = total + number;
        x++;
        // x=x+1
    }
    
    cout << "Your total is " << total << "." << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main () {
    int currVal = 0, val = 0;
    cout << "Please enter a series of numbers." << endl;
    if (cin >> currVal) {
        int cnt = 1;
        while (cin >> val) {
            if (currVal == val) {
                ++cnt;
            }
            else {
                cout << currVal << " has occured " << cnt << " times." << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " has occured " << cnt << " times." << endl;
    }
    return 0;
}

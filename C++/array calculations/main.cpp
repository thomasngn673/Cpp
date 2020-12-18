#include <iostream>
using namespace std;

int main() {
    int tuna[5] = {20,54,76,832,546};
    int sum = 0;
    
    for(int x = 0;x < 5;x++) {
        sum = tuna[x] + sum;
        // 1. What is sum? tuna[0] + sum
        // 2. 20 + 0 = sum
        // 3. x=1
        // 4. What is sum? tuna[1] + sum
        // 5. 54 + 20 = sum
        // 6. Repeats until x = 5
    }
    cout << sum << endl;
}


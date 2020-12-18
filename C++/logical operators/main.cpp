#include <iostream>
using namespace std;

int main () {
    int age = 23;
    int money = 650;
    
    if(age>21 && money>500) {
        // &&  means both conditions within the parentheses must be met
        // || means only one of the conditions within the parentheses have to be met
        cout << "You are allowed in the night club." << endl;
    }
}

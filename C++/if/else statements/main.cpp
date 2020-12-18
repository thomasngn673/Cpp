#include <iostream>

using namespace std;

int main () {
    int age = 118;
    if(age>60){
        cout << "You are old." << endl;
        if(age>100) {
            // nesting statements are statements inside of statements
            cout << "Bro you old OLD." << endl;
        }
    }
    else{
        cout << "You are young." << endl;
    }
    return 0;
}

// a constuctor that gets called automatically as soon as you create an object
// constructors don't have a return type (int,void,string)
// constructor return type is the same as the name (FritzsClass)
// constructors are used to give variables initial values
#include <iostream>
#include <string>
using namespace std;

class FritzsClass {
public:
    FritzsClass(string z) {
        setName(z);
    }
    void setName(string x) {
        name = x;
    }
    string getName () {
        return name;
    }
private:
    string name;
};

// objects
int main() {
    FritzsClass dogs("Deadpool");
    // don't have call upon setName then getName
    // 1. automatically returns what is in the curly brackets of FritzsClass in class function
    // 2. assign string 'Ella' to object --> runs through string z --> setName(z) --> string x --> name
    cout << dogs.getName () << endl;
    
    // create a second object
    // can create multiple objects with the same class
    FritzsClass cats("Wolverine");
    cout << cats.getName () << endl;
    return 0;
}

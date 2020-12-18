#include <iostream>
#include <string>
using namespace std;

class FritzsClass {
public:
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
    FritzsClass dogs;
    // assigns/creates an object
    dogs.setName("Bruh");
    // assigns a name
    cout << dogs.getName () << endl;
    // returns string getName
    return 0;
}

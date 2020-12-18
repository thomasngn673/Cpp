#include <iostream>
using namespace std;

void PrintSomething () {
    // void does not return output
    cout << "Artemis" << endl;
}
    // defining variable "PrintSomething" can be input into the code 2 ways
    // 1. placing it before int main (as done here)
    // 2. place 'void PrintSomething ()' ONLY before int main; declare a variable but you don't have to define its value

int main() {
    PrintSomething ();
    return 0;
}



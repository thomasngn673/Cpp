#include <iostream>
using namespace std;

int volume(int l=1, int w=1, int h=1);

int main () {
    cout << volume(4,5,5);
    // if nothing is input by the user into volume(), values assigned to the definition before int main are the default values
    // default values will be used for the function unless the user overrides it with new values
}

int volume(int l, int w, int h);
return l*w*h;

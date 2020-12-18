#include <iostream>
#include <string>
using namespace std;

// class
class myGoal {
    public:
    // anything in this area will be availabe outside this class function
    void NASA(){
        cout << "Artemis" << endl;
    }
};

// objects
int main() {
    myGoal aspirations;
    // class variable ____ variable2
    // variable2.void variable
    aspirations.NASA();
    // aspirations is assigned to myGoal; using 'aspirations' calls upon myGoal
    return 0;
}


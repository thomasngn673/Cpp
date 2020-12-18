#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    // std::endl ends the line; \n also creates a new line
    // can replace with std:: by placing "using namepsace std"
    // can also replace std::cout by placing "using std::cout"
    
    int slices;
    slices = 5;
    std::cout << "You have " << slices << " slices of pizza." << std::endl;
    
    printf("%i\n",slices);
    // %i is an integer
    
    int apples;
    std::cout << "How many apples did you pick?\n";
    std::cin >> apples;
    // cin is console input
    // uses the greater than sign >> rather than << like other functions
    std::cout << "You have " << apples << " apples." << std::endl;
    return 0;//main code run is good
}

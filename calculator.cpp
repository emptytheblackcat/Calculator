#include <iostream>
using namespace std;

int main() {
    char input;
    do {
        int integer1, integer2, integer3;
        long long result;
        char operation;

        std::cout << "Enter first number: ";                           
        std::cin >> integer1;

        std::cout << "Enter second number: ";                                       
        std::cin >> integer2;

        std::cout << "Enter third number: ";                                     
        std::cin >> integer3;

        std::cout << "Do you want to add or multiply the numbers? (+/*): ";                
        std::cin >> operation;

        if (operation == '+') {                                          
            result = integer1 + integer2 + integer3;
            std::cout << "Sum is " << result << endl;
        } else if (operation == '*') {                               
            result = integer1 * integer2 * integer3;
            std::cout << "Product is " << result << endl;
        } else {                                                  
            std::cout << "Invalid operation!" << endl;
        }

        std::cout << "Do you want to calculate again? (y/n): ";                   
        std::cin >> input;

    } while (input == 'y' || input == 'Y');

    std::cout << "Goodbye!" << endl;

    std::cout << "Press any keys to exit......" << endl;
    std::cin.ignore();
    std::cin.get();

    return 0;
}

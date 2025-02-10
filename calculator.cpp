#include <iostream>
using namespace std;

int main() {
    char input;
    do {
        int integer1, integer2, integer3;
        long long result;
        char operation;

        std::cout << "Enter first number: ";                                   //nhập số đầu
        std::cin >> integer1;

        std::cout << "Enter second number: ";                                       //nhập số thứ 2
        std::cin >> integer2;

        std::cout << "Enter third number: ";                                           //nhập số thứ 3
        std::cin >> integer3;

        std::cout << "Do you want to add or multiply the numbers? (+/*): ";                    //chọn tính cộng hay nhân
        std::cin >> operation;

        if (operation == '+') {                                              //cộng
            result = integer1 + integer2 + integer3;
            std::cout << "Sum is " << result << endl;
        } else if (operation == '*') {                                    //nhân
            result = integer1 * integer2 * integer3;
            std::cout << "Product is " << result << endl;
        } else {                                                  //khi người dùng ko có nhập + hay *
            std::cout << "Invalid operation!" << endl;
        }

        std::cout << "Do you want to calculate again? (y/n): ";                       //hỏi muốn tính nữa ko
        std::cin >> input;

    } while (input == 'y' || input == 'Y');

    std::cout << "Goodbye!" << endl;

    std::cout << "Press any keys to exit......" << endl;
    std::cin.ignore();
    std::cin.get();

    return 0;
}

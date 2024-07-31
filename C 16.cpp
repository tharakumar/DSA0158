#include <iostream>
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Multiplication table of " << num << " is:" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " * " << i << " = " << num * i << std::endl;
    }   
    return 0;
}
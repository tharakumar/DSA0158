#include <iostream>
int main() {
    int num1 = 10, num2 = 20;
    std::string result = (num1 == num2) ? "Numbers are equal" : "Numbers are not equal";    
    std::cout << result << std::endl;
    return 0;
}
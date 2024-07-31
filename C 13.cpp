#include <iostream>
int main() {
    int num = 9;
    std::string result = (num % 3 == 0) ? "Number is divisible by 3" : "Number is not divisible by 3";    
    std::cout << result << std::endl;
    return 0;
}
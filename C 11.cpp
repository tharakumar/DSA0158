#include <iostream>
int main() {
    int a = 10, b = 20, c = 30;
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    std::cout << "The largest number is: " << largest << std::endl;
    return 0;
}
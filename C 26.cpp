#include <iostream>
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == originalNum;
}
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isStrong(num)) {
        std::cout << num << " is a strong number." << std::endl;
    } else {
        std::cout << num << " is not a strong number." << std::endl;
    }
    return 0;
}
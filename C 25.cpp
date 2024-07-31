#include <iostream>
#include <unordered_set> 
int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
} 
bool isHappy(int num) {
    std::unordered_set<int> seen;   
    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        num = sumOfSquares(num);
    } 
    return num == 1;
} 
int main() {
    int num; 
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isHappy(num)) {
        std::cout << num << " is a happy number." << std::endl;
    } else {
        std::cout << num << " is not a happy number." << std::endl;
    }
    return 0;
}
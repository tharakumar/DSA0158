#include <iostream>
#include <string>
int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    int left = 0;
    int right = str.length() - 1;
    bool isPalindrome = true;
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = false;
            break;
        }
        ++left;
        --right;
    }
    if (isPalindrome)
        std::cout << str << " is a palindrome." << std::endl;
    else
        std::cout << str << " is not a palindrome." << std::endl;   
    return 0;
}
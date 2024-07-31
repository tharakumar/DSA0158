#include <iostream>
using namespace std;
int main() {
    int num, sumOfDigits = 0, originalNum; 
    cout << "Enter a number: ";
    cin >> num; 
    originalNum = num; 
    while (num > 0) {
        sumOfDigits += num % 10;
        num /= 10;
    } 
    if (originalNum % sumOfDigits == 0) {
        cout << originalNum << " is a Harshad number." <<endl;
    } else {
        cout << originalNum << " is not a Harshad number." <<endl;
    }
    return 0;
}
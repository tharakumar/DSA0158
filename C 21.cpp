#include<iostream>
using namespace std;
int main() {
    int num1, num2, temp;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    do {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    } while(temp != 0);
    cout << "GCD: " << num1;
    return 0;
}
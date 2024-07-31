#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    float Division = num1/num2;
    modulo = num1 % num2;
    cout << "Addition: " <<addition;
    cout << "Subtraction: " << subtraction;
    cout << "Multiplication: " <<multiplication;
    cout << " Division: " << Division;
    cout << "modulo: " <<modulo;
    return 0;
}
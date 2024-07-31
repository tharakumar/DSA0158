#include <iostream>
using namespace std;
bool areNumbersEqual(float num1, float num2) {
    return num1 == num2;
}
int main() {
    float number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    if (areNumbersEqual(number1, number2)) {
        cout << "The numbers are equal." << endl;
    } else {
        cout << "The numbers are not equal." << endl;
    }
    return 0;
}
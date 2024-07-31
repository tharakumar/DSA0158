#include <iostream>
#include <stdexcept>
using namespace std;
void performOperations(int a, int b) {
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
        cout << "Division: " <<(a) / b << endl;
        cout << "Modulo: " << a % b << endl;
}
int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    performOperations(num1, num2);
    return 0;
}
#include <iostream>
#include <stdexcept>
using namespace std;
double divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("divide by zero.");
    }
    return static_cast<double>(a) / b;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    try {
        double result = divide(num1, num2);
        cout << "Result: " << result << endl;
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }
    return 0;
}
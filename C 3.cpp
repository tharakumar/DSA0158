#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    float average;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3) / 3;
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is " << average;
    return 0;
}
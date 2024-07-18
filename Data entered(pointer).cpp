#include <iostream>
using namespace std;
int main() {
    const int size = 4;
    double numbers[size];
    double *ptr = numbers;
    cout << "Enter the 4 numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> *(ptr + i);
    }
    cout << "Displaying the data:" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << endl;
    }
    return 0;
}
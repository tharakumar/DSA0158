#include <iostream>
using namespace std;
int main() {
    int value = 42;
    int* ptr = &value;
    cout << "Value of the integer: " << *ptr << endl;
    cout << "Address of the integer: " << ptr << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    double value = 123.456; 
    double* ptr = &value; 
    cout << "Value of the double: " << *ptr << endl;
    cout << "Address of the double: " << ptr << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    float value = 3.14f; 
    float* ptr = &value;
    cout << "Value of the float: " << *ptr << endl;
    cout << "Address of the float: " << ptr << endl;
    return 0;
}
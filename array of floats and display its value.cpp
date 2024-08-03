#include <iostream>
using namespace std;
int main() {
    const int size = 4;
    float array[size] = {1.1f, 2.2f, 3.3f, 4.4f}; 
    float* ptr = array; 
    cout << "Float array values:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Value at index " << i << ": " << *(ptr + i) << endl;
    }
    cout << "Address of the float array: " << ptr << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    const int size = 5;
    int array[size] = {10, 20, 30, 40, 50}; 
    int* ptr = array; 
    cout << "Array values:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Value at index " << i << ": " << *(ptr + i) << endl;
    }
    cout << "Address of the array: " << ptr << endl;
    return 0;
}
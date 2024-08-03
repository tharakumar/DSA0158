#include <iostream>
using namespace std;
int main() {
    const int size = 6;
    char array[size] = "Hello"; 
    char* ptr = array;
    cout << "Character array values:" << endl;
    for (int i = 0; i < size - 1; ++i) { 
        cout << "Character at index " << i << ": " << *(ptr + i) << endl;
    }
    cout << "Complete string: " << ptr << endl;
    cout << "Address of the character array: " << static_cast<void*>(ptr) << endl;
    return 0;
}
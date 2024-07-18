#include <iostream>
using namespace std;
int main() {
    int arr[3] = {1, 2, 3};
    cout << "Displaying address using arrays: " << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }
    cout << "\nDisplaying address using pointers: " << endl;
    int* ptr = arr; 
    for (int i = 0; i < 3; ++i) {
        cout << "ptr + " << i << " = " << (ptr + i) << endl;
    }
    return 0;
}
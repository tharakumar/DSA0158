#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    int x[] = {10, 20, 30, 40};
    int size = sizeof(x) / sizeof(x[0]);
    int index;
    cout << "Enter an index to access: ";
    cin >> index;
    try {
        if (index < 0 || index >= size) {
            throw out_of_range("The element is an array index out of boundary.");
        }
        cout << "Element at index " << index << ": " << x[index] << endl;
    } catch (const out_of_range &e) {
        cout << e.what() << endl;
    }
    return 0;
}
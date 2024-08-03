#include <iostream>
using namespace std;
class Array {
private:
    int* arr;
    int size;
public:
    Array(int s) : size(s) {
        arr = new int[size];
    }
    ~Array() {
        delete[] arr;
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }
    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void set(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
    }
};
int main() {
    Array myArray(5);
    myArray.set(0, 10);
    myArray.set(1, 20);
    myArray.set(2, 30);
    myArray.set(3, 40);
    myArray.set(4, 50);
    cout << "Array elements:" << endl;
    myArray.display();
    cout << "Element at index 2: " << myArray[2] << endl;
    myArray[2] = 100;
    cout << "Array elements after modification:" << endl;
    myArray.display();
    return 0;
}
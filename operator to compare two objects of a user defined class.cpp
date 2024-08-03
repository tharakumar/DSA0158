#include <iostream>
using namespace std;
class MyClass {
private:
    int value;
public:
    MyClass(int val) : value(val) {}
    bool operator==(const MyClass& other) const {
        return this->value == other.value;
    }
    void display() const {
        cout << "Value: " << value << endl;
    }
};
int main() {
    MyClass obj1(10);
    MyClass obj2(10);
    MyClass obj3(20);
    if (obj1 == obj2) {
        cout << "obj1 is equal to obj2" << endl;
    } else {
        cout << "obj1 is not equal to obj2" << endl;
    }
    if (obj1 == obj3) {
        cout << "obj1 is equal to obj3" << endl;
    } else {
        cout << "obj1 is not equal to obj3" << endl;
    }
    return 0;
}
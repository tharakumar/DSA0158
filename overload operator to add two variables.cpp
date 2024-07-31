#include <iostream>
using namespace std;
class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}
    MyClass operator+(const MyClass &other) {
        return MyClass(this->value + other.value);
    }
    void display() const {
        cout << "Value: " << value <<endl;
    }
};
int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass result = obj1 + obj2;
    result.display();
    return 0;
}
#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v = 0) : value(v) {}
    Number operator+(const Number& other) const {
        return Number(this->value + other.value);
    }
    void display() const {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Number num1(10);
    Number num2(20);
    cout << "num1: ";
    num1.display();
    cout << "num2: ";
    num2.display();
    Number sum = num1 + num2;
    cout << "Sum: ";
    sum.display();
    return 0;
}
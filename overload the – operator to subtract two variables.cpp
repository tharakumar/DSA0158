#include <iostream>
using namespace std;
class MyNumber {
private:
    int value;
public:
    MyNumber(int val) : value(val) {}
    MyNumber operator-(const MyNumber& other) const {
        return MyNumber(this->value - other.value);
    }
    void display() const {
        cout << "Value: " << value << endl;
    }
    int getValue() const {
        return value;
    }
};
int main() {
    MyNumber num1(10);
    MyNumber num2(4);
    MyNumber result = num1 - num2;
    cout << "Result of subtraction: " << result.getValue() << endl;
    return 0;
}
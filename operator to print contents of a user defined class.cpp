#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v = 0) : value(v) {}
    friend ostream& operator<<(ostream& os, const Number& num) {
        os << "Value: " << num.value;
        return os;
    }
};
int main() {
    Number num1(10);
    Number num2(20);
    cout << "num1: " << num1 <<endl;
    cout << "num2: " << num2 <<endl;
    return 0;
}
#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v = 0) : value(v) {}
    Number& operator++() {
        ++value;
        return *this;
    }
    Number operator++(int) {
        Number temp = *this;
        ++value;
        return temp;
    }
    void display() const {
        cout << "Value: " << value <<endl;
    }
};
int main() {
    Number num(10);
    cout << "Initial value: ";
    num.display();
    ++num; 
    cout << "After prefix increment: ";
    num.display();
    num++; 
    cout << "After postfix increment: ";
    num.display();
    return 0;
}
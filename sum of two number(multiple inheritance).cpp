#include <iostream>
using namespace std;
class A {
protected:
    int x;
public:
    void setX(int val) {
        x = val;
    }
};
class B {
protected:
    int y;
public:
    void setY(int val) {
        y = val;
    }
};
class C : public A, public B {
public:
    int getSum() {
        return x + y;
    }
};
int main() {
    C obj;
    int valueX, valueY;
    cout << "Enter value of x: ";
    cin >> valueX;
    cout << "Enter value of y: ";
    cin >> valueY;
    obj.setX(valueX);
    obj.setY(valueY);
    cout << "Sum = " << obj.getSum() << endl;
    return 0;
}
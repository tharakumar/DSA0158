#include <iostream>
using namespace std;
class A {
protected:
    int a;
public:
    A(int val) : a(val) {}
    void showA() {
        cout << "Value of a: " << a << endl;
    }
};
class B {
protected:
    int b;
public:
    B(int val) : b(val) {}
    void showB() {
        cout << "Value of b: " << b << endl;
    }
};
class C : public A, public B {
private:
    int c;
public:
    C(int valA, int valB, int valC) : A(valA), B(valB), c(valC) {}
    void showC() {
        cout << "Value of c: " << c << endl;
    }
    void showAll() {
        showA();
        showB();
        showC();
    }
};
int main() {
    C objC(100, 200, 300);
    objC.showAll();
    return 0;
}
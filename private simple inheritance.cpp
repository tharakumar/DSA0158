#include <iostream>
using namespace std;
class A {
protected:
    int x;
public:
    void setX(int value) {
        x = value;
    }
    void showX() {
        cout << "Value of x: " << x << endl;
    }
};
class B : private A {
public:
    void setData(int value) {
        setX(value); 
    }
    void display() {
        showX(); 
    }
};
int main() {
    B objB;
    int value;
    cout << "Enter value of x: ";
    cin >> value;
    objB.setData(value);
    objB.display();
    cout << "\nExplanation: Here x is the protected data member of class A, ";
    cout << "class A is inherited privately to class B. In private inheritance ";
    cout << "only protected data member and member functions can be accessed by the derived class." << endl;
    return 0;
}
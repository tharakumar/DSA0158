#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int imaginary;
public:
    Complex(int r, int i) : real(r), imaginary(i) {}
    void display() const {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};
int main() {
    Complex c(1, 54);
    Complex *ptr = &c;
    ptr->display();
    return 0;
}
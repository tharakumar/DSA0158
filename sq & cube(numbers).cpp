#include <iostream>
using namespace std;
class Number {
protected:
    int num;
public:
    void setNumber(int n) {
        num = n;
    }
};
class Square : public Number {
public:
    int getSquare() {
        return num * num;
    }
};
class Cube : public Number {
public:
    int getCube() {
        return num * num * num;
    }
};
int main() {
    Square sq;
    Cube cb;
    int n;
    cout << "Enter an integer number: ";
    cin >> n;
    sq.setNumber(n);
    cout << "Square of " << n << " is: " << sq.getSquare() << endl;
    cout << "Enter an integer number: ";
    cin >> n;
    cb.setNumber(n);
    cout << "Cube of " << n << " is: " << cb.getCube() << endl;
    return 0;
}
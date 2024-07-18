#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double area() = 0;
};
class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() override {
        return side * side;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius; 
    }
};
int main() {
    double radius, side;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter the length of the square: ";
    cin >> side;
    Circle circle(radius);
    Square square(side);
    cout << "Area of square: " << square.area() << endl;
    cout << "Area of circle: " << circle.area() << endl;
    return 0;
}
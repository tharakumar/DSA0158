#include <iostream>
#include <cmath>
using namespace std;
class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double area() const override {
        return height * width;
    }
    double perimeter() const override {
        return 2 * (height + width);
    }
};
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    double area() const override {
        return 0.5 * height * width;
    }
    double perimeter() const override {
        double hypotenuse = std::sqrt((height * height) + (width * width));
        return height + width + hypotenuse;
    }
};
int main() {
    Rectangle rect(10, 20);
    cout << "Rectangle Area: " << rect.area() <<endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() <<endl;
    Triangle tri(10, 20);
    cout << "Triangle Area: " << tri.area() <<endl;
    cout << "Triangle Perimeter: " << tri.perimeter() <<endl;
    return 0;
}
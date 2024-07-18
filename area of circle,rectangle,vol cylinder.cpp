#include <iostream>
#define PI 3.14159
using namespace std;
class Shape {
public:
    void get_data() {
        cout << "This is a shape" << endl;
    }
};
class Circle : public Shape {
protected:
    float radius;
public:
    void get_data(float r) {
        radius = r;
    }
    float area() {
        return PI * radius * radius;
    }
};
class Rectangle : public Shape {
protected:
    float length, width;
public:
    void get_data(float l, float w) {
        length = l;
        width = w;
    }
    float area() {
        return length * width;
    }
};
class Cylinder : public Circle {
private:
    float height;
public:
    void get_data(float r, float h) {
        radius = r;
        height = h;
    }
    float volume() {
        return PI * radius * radius * height;
    }
};
int main() {
    Circle circle;
    circle.get_data(4);
    cout << "Area of Circle: " << circle.area() << endl;
    Rectangle rectangle;
    rectangle.get_data(6, 7);
    cout << "Area of Rectangle: " << rectangle.area() << endl;
    Cylinder cylinder;
    cylinder.get_data(3, 5);
    cout << "Volume of Cylinder: " << cylinder.volume() << endl;
    return 0;
}

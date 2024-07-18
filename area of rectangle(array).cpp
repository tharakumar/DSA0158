#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l = 0, double w = 0) : length(l), width(w) {}
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
    double area() const {
        return length * width;
    }
};
int main() {
    Rectangle rectangles[2];
    rectangles[0].setDimensions(7, 4);
    rectangles[1].setDimensions(5, 4);
    cout << "Area of rectangle 1: " << rectangles[0].area() << endl;
    cout << "Area of rectangle 2: " << rectangles[1].area() << endl;
    return 0;
}
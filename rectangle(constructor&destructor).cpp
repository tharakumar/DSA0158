#include <iostream>
using namespace std;
class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
        cout << "Rectangle created with width " << width << " and height " << height << endl;
    }
    ~Rectangle() {
        cout << "Rectangle destroyed with width " << width << " and height " << height << endl;
    }
    double area() const {
        return width * height;
    }
    double perimeter() const {
        return 2 * (width + height);
    }
    void display() const {
        cout << "Rectangle: width = " << width << ", height = " << height << endl;
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    }
};
int main() {
    Rectangle myRectangle(10.0, 5.0);
    myRectangle.display();
    return 0;
}
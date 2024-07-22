#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    virtual void getDimensions() = 0;  // Pure virtual function
};

// Derived class Rectangle from Shape
class Rectangle : public Shape {
protected:
    float length;
    float breadth;

public:
    void getDimensions() override {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Breadth: ";
        cin >> breadth;
    }

    float calculateArea() {
        return length * breadth;
    }
};

// Derived class Cuboid from Rectangle and Shape
class Cuboid : public Rectangle {
private:
    float height;

public:
    void getDimensions() override {
        Rectangle::getDimensions();
        cout << "Enter Height: ";
        cin >> height;
    }

    float calculateVolume() {
        return length * breadth * height;
    }

    void display() {
        float area = calculateArea();
        float volume = calculateVolume();
        cout << "Area of Rectangle: " << area << endl;
        cout << "Volume of Cuboid: " << volume << endl;
    }
};

int main() {
    Cuboid cuboid;
    cuboid.getDimensions();
    cuboid.display();

    return 0;
}

#include <iostream>
using namespace std;
class Shape {
protected:
    float length;
    float breadth;
public:
    void getDimensions() {
        cout << "Enter LENGTH: ";
        cin >> length;
        cout << "Enter BREADTH: ";
        cin >> breadth;
    }
};
class Rectangle : public Shape {
public:
    float area() {
        return length * breadth;
    }
};
class Cuboid : public Rectangle {
private:
    float height;
public:
    void getHeight() {
        cout << "Enter HEIGHT: ";
        cin >> height;
    }
    float volume() {
        return length * breadth * height;
    }
    void displayResults() {
        cout << "AREA OF RECTANGLE = " << area() << endl;
        cout << "VOLUME OF CUBOID = " << volume() << endl;
    }
};
int main() {
    Cuboid cuboid;
    cuboid.getDimensions();
    cuboid.getHeight();
    cuboid.displayResults();
    return 0;
}
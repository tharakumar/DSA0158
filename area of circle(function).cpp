#include <iostream>
#include <cmath>
using namespace std;
double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}
int main() {
    double radius = 5.0;
    double area = areaOfCircle(radius);
    cout << "The area of the circle with radius " << radius << " is " << area << endl;
    return 0;
}
#include <iostream>
using namespace std;
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}
int main() {
    double celsius = 25.0;
    double fahrenheit = 77.0;
    cout << celsius << " Celsius is " << celsiusToFahrenheit(celsius) << " Fahrenheit." << endl;
    cout << fahrenheit << " Fahrenheit is " << fahrenheitToCelsius(fahrenheit) << " Celsius." << endl;
    return 0;
}
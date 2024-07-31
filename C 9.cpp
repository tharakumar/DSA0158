#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    float number;
    cout << "Enter a floating-point number: ";
    cin >> number;
    int roundedDown = floor(number);
    int roundedUp = ceil(number);
    cout << "Original number: " << number<<endl;
    cout << "Rounded down (floor): " << roundedDown<<endl;
    cout << "Rounded up (ceil): " << roundedUp<<endl;
    return 0;
}
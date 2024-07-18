#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    int *p1, *p2, *p3;
    cout << "Enter the three numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    int *greatest;
    if (*p1 >= *p2 && *p1 >= *p3) {
        greatest = p1; 
    } else if (*p2 >= *p1 && *p2 >= *p3) {
        greatest = p2; 
    } else {
        greatest = p3; 
    }
    cout << "The greatest is: " << *greatest << endl;
    return 0;
}
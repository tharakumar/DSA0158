#include <iostream>
#include <string>
using namespace std;
int main() {
    string value = "Hello, World!"; 
    string* ptr = &value;
    cout << "Value of the string: " << *ptr << endl;
    cout << "Address of the string: " << ptr << endl;
    return 0;
}
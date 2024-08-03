#include <iostream>
using namespace std;
int main() {
    char value = 'A'; 
    char* ptr = &value; 
    cout << "Value of the char: " << *ptr << endl;
    cout << "Address of the char: " << ptr << endl;
    return 0;
}
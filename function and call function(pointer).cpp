#include <iostream>
using namespace std;
void greet() {
    cout << "Hello, world!" << endl;
}
int main() {
    void (*functionPtr)() = &greet;
    cout << "Calling function via pointer:" << endl;
    functionPtr(); 
    return 0;
}
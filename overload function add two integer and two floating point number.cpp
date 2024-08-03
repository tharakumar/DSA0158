#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
float add(float a, float b) {
    return a + b;
}
int main() {
    int int1 = 5, int2 = 10;
    float float1 = 5.5f, float2 = 10.5f;
    int intResult = add(int1, int2);
    cout << "Sum of integers: " << intResult << endl;
    float floatResult = add(float1, float2);
    cout << "Sum of floats: " << floatResult << endl;
    return 0;
}
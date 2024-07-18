#include <iostream>
using namespace std;
class Example {
private:
    int x;
public:
    Example(int x) {
        this->x = x;
    }
    void printX() {
        cout << "x = " << this->x << endl;
    }
};
int main() {
    Example obj(20);
    obj.printX();
    return 0;
}
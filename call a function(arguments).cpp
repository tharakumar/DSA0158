#include <iostream>
using namespace std;
class Functor {
public:
    int operator()(int a, int b) const {
        return a + b;
    }
    string operator()(const string& str, int times) const {
        string result;
        for (int i = 0; i < times; ++i) {
            result += str;
        }
        return result;
    }
};
int main() {
    Functor functor;
    int sum = functor(5, 10);
    cout << "Sum: " << sum << endl;
    string repeatedStr = functor("Hello", 3);
    cout << "Repeated string: " << repeatedStr << endl;
    return 0;
}
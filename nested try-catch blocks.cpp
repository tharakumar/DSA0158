#include <iostream>
#include <stdexcept>
using namespace std;
void level1() {
    try {
        cout << "Level 1: Inside try block\n";
        throw runtime_error("Exception thrown at Level 1");
    }
    catch (const std::runtime_error& e) {
        cout << "Level 1: Caught runtime_error: " << e.what() << '\n';
        throw; 
    }
}
void level2() {
    try {
        cout << "Level 2: Inside try block\n";
        level1();
    }
    catch (const std::runtime_error& e) {
        cout << "Level 2: Caught runtime_error from Level 1: " << e.what() << '\n';
        throw;
    }
}
int main() {
    try {
        cout << "Main: Inside try block\n";
        level2();
    }
    catch (const std::runtime_error& e) {
        cout << "Main: Caught runtime_error from Level 2: " << e.what() << '\n';
    }
    catch (...) {
        cout << "Main: Caught an unknown exception\n";
    }
    cout << "Main: Program continues after exception handling\n";
    return 0;
}
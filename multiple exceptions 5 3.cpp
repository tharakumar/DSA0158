#include <iostream>
#include <stdexcept>
#include <limits>
#include <cmath>
using namespace std;
void checkNumber(double num) {
    if (num < 1e-5) {
        throw out_of_range("The number is too small");
    } else if (num < 0) {
        throw invalid_argument("Accept only positive integer");
    } else if (num != floor(num)) {
        throw invalid_argument("Accept only positive integer");
    }
}
int main() {
    double x;
    cout << "Enter a number: ";
    cin >> x;
    try {
        checkNumber(x);
        cout << "The number is " << x << endl;
    } catch (const out_of_range &e) {
        cout << e.what() << endl;
    } catch (const invalid_argument &e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "An unknown error occurred" << endl;
    }
    return 0;
}
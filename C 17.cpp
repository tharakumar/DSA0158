#include <iostream>
using namespace std;
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: " << t1 << ", " << t2;
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << ", " << nextTerm;
    }
    cout <<endl;   
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
string reverseString(const string &str) {
    int n = str.length();
    string reversedStr;
    for (int i = n - 1; i >= 0; --i) {
        reversedStr += str[i];
    }
    return reversedStr;
}
int main() {
    string original = "hello";
    string reversed = reverseString(original);
    cout << "Original string: " << original << endl;
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
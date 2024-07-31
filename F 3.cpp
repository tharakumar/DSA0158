#include <iostream>
#include <string>
using namespace std;
string reverseString(const string& str) {
    int n = str.length();
    string reversedStr;
    for (int i = n - 1; i >= 0; --i) {
        reversedStr += str[i];
    }
    return reversedStr;
}
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    string reversedString = reverseString(inputString);
    cout << "Reversed string: " << reversedString <<endl;
    return 0;
}
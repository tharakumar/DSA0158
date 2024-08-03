#include <iostream>
#include <string>
using namespace std;
int countCharacters(const string &str) {
    return str.length();
}
int main() {
    string myString = "Hello, World!";
    int numCharacters = countCharacters(myString);
    cout << "The number of characters in the string is: " << numCharacters << endl;
    return 0;
}
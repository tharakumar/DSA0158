#include <iostream>
#include <string>
using namespace std;
int countOccurrences(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            ++count;
        }
    }
    return count;
}
int main() {
    string str = "hello, world";
    char char_to_find = 'o';
    int occurrences = countOccurrences(str, char_to_find);
    cout << "The character '" << char_to_find << "' occurs " << occurrences << " times in the string." <<endl;
    return 0;
}
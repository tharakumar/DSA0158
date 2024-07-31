#include <iostream>
#include <cstring>
using namespace std;
string concatenate(const string &str1, const string &str2) {
    return str1 + str2;
}
char* concatenate(const char *arr1, const char *arr2) {
    char *result = new char[strlen(arr1) + strlen(arr2) + 1];
    strcpy(result, arr1);
    strcat(result, arr2);   
    return result;
}
int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    string resultStr = concatenate(str1, str2);
    cout << "Concatenated std::string: " << resultStr << endl;
    const char arr1[] = "Hello, ";
    const char arr2[] = "World!";
    char *resultArr = concatenate(arr1, arr2);
    cout << "Concatenated character array: " << resultArr << endl;
    delete[] resultArr;
    return 0;
}
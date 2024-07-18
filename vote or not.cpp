#include <iostream>
using namespace std;

int main() {
    int age;
    const int votingAge = 18;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= votingAge) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are allowed to vote after " << (votingAge - age) << " years." << endl;
    }
    return 0;
}
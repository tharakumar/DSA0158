#include <iostream>
using namespace std;
double calculateInterest(double principal, int years, bool isSenior) {
    double rate = isSenior ? 0.12 : 0.10;
    return principal * rate * years;
}
int main() {
    double principal;
    int years;
    char seniorCitizen;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Is customer senior citizen (y/n): ";
    cin >> seniorCitizen;
    bool isSenior = (seniorCitizen == 'y' || seniorCitizen == 'n');
    cout << "Interest: " << calculateInterest(principal, years, isSenior) << endl;
    return 0;
}
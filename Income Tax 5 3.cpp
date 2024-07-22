#include <iostream>
#include <iomanip>
using namespace std;
class IncomeTax {
protected:
    double income;
public:
    IncomeTax(double inc) : income(inc) {}
    virtual void TDS() = 0;
};
class Slab1 : public IncomeTax {
public:
    Slab1(double inc) : IncomeTax(inc) {}

    void TDS() override {
        if (income <= 150000) {
            cout << "No tax" << endl;
        }
    }
};
class Slab2 : public IncomeTax {
public:
    Slab2(double inc) : IncomeTax(inc) {}
    void TDS() override {
        if (income > 150000 && income <= 300000) {
            double tax = (income - 150000) * 0.10;
            cout << "Tax to be paid: " << fixed << setprecision(2) << tax << endl;
        }
    }
};
class Slab3 : public IncomeTax {
public:
    Slab3(double inc) : IncomeTax(inc) {}
    void TDS() override {
        if (income > 300000 && income <= 500000) {
            double tax = (income - 300000) * 0.20 + 15000; 
            cout << "Tax to be paid: " << fixed << setprecision(2) << tax << endl;
        } else if (income > 500000) {
            double tax = (income - 500000) * 0.30 + 55000; 
            cout << "Tax to be paid: " << fixed << setprecision(2) << tax << endl;
        }
    }
};
int main() {
    double income;
    cout << "Enter the total income: ";
    cin >> income;
    IncomeTax* taxSlabs[] = { new Slab1(income), new Slab2(income), new Slab3(income) };
    for (IncomeTax* slab : taxSlabs) {
        slab->TDS();
    }
    for (IncomeTax* slab : taxSlabs) {
        delete slab;
    }
    return 0;
}
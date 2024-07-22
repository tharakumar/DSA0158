#include <iostream>
using namespace std; 
class PiggieBank {
protected:
    int amount; 
public:
    PiggieBank() : amount(50) {}  

    void displayAmount() {
        cout << "Total Amount is = $" << amount << endl;
    }
}; 
class AddAmount : public PiggieBank {
public:
    AddAmount() { 
    }
    AddAmount(int addAmount) {
        amount += addAmount;
    }
};
int main() {
    int addAmount; 
    cout << "Enter the amount to add: ";
    cin >> addAmount; 
    AddAmount piggie(addAmount); 
    piggie.displayAmount();
    return 0;
}
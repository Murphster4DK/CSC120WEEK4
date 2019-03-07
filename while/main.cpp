#include <iostream>

using namespace std ;

int main() {
    int account, balance, totalCharge, totalCredit, creditLimit;
    char cont = 'h';
    while (cont != '1') {
        cout << "Account number: ";
        cin >> account;
        cout << "Balance: ";
        cin >> balance;
        cout << "Total Charges: ";
        cin >> totalCharge;
        cout << "Total Credit: ";
        cin >> totalCredit;
        cout << "Credit Limit: ";
        cin >> creditLimit;

        int endBalance = balance + totalCharge - totalCredit;

        if (endBalance > creditLimit) {
            cout << "Credit limit exceded";
            cout << "\naccount number: " << account << "\nBalance; " << endBalance << "\nCredit Limite: "
                 << creditLimit;

        };
        cout << "\nenter 1 to quit";
        cin >> cont;
    }    }
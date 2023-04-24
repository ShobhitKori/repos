// ATMapplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void showMenu() {
    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************";
}

int main()
{
    int option;
    double balance = 500;
    do {
        showMenu();
        cout << endl << "What do you want to do? :";
        cin >> option;
        system("cls");
        if (option <= 0 || option >= 5)
            cout << "Enter valid option.";
        else {
            switch (option) {
            case 1: cout << "Balance is $" << balance << endl;
                break;
            case 2:cout << "Enter deposit amount: ";
                double deposit;
                cin >> deposit;
                balance += deposit;
                break;
            case 3: cout << "Enter withdraw amount: ";
                double withdraw;
                cin >> withdraw;
                if (withdraw <= balance) {
                    balance -= withdraw;
                }
                else {
                    cout << endl << "Not enough money." << endl;

                }
                break;
            }
        }
    } while (option != 4);
    system("pause>0");
}

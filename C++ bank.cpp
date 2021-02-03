#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Bank
{
    char name[100], y;
    char add[100];
    int balance;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void Bank :: open_account()
{

    cout << "enter your full name: \n";
    cin.ignore();
    cin.getline(name, 100);
    cout << "enter your address: \n";
    cin.ignore();
    cin.getline(add, 100);
    cout << "what type of account you want to open saving(s) or current(c): \n";
    cin >> y;
    cout << "enter amount for deposit: \n";
    cin >> balance;
    cout << "your account is created successfully \n";
}

void Bank :: deposit_money()
{

    int a;
    cout << "deposit amount: \n";
    cin >> a;
    balance += a;
    cout << "total amount you deposited: \n" << balance;

}

void Bank :: display_account()
{

    cout << "your name: \n" << name << endl;
    cout << "your address: \n" << add << endl;
    cout << "your account type: \n" << y <<endl;
    cout << "your account balance: \n" << balance << endl;

}

void Bank :: withdraw_money()
{
    int amount;
    cout << "withdraw :: \n";
    cout << "enter amount to be withdraw: \n";
    cin >> amount;
    balance -= amount;
    cout << "your updated balance is: \n" << balance;

}

int main()
{
    int ch, x;
    Bank obj;

    do
    {
        cout << "1) Open Account \n";
        cout << "2) Deposit Money \n";
        cout << "3) Withdraw Money \n";
        cout << "4) Display Account \n";
        cout << "5) Exit \n";
        cout << "select the option form above: ";
        cin >> ch;

        switch(ch)
        {

        case 1:
            cout << "1) Open Account \n";
            obj.open_account();
            break;

        case 2:
            cout << "2) Deposit Money \n";
            obj.deposit_money();
            break;

        case 3:
            cout << "3) Withdraw Money \n";
            obj.withdraw_money();
            break;

        case 4:
            cout << "4) Display Account \n";
            obj.display_account();
            break;

        case 5:
            if(ch == 5)
            {
                NULL;
            }

        default:
            cout << "invalid option";
        }
        cout<<"\n do you want select next option then press :: Y \n";
        cout<<"\n if you want to exit then press:: N \n";
        x=getch();
        if(x=='n'||x=='N')
            NULL;

    }

    while(x=='y'||x=='Y');
    getch();
    return 0;
}

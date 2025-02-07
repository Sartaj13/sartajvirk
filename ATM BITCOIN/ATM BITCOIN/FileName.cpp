#include <iostream>
using namespace std;

void startsScreen()
{
    cout << "Welcome to ATM!" << endl;
    int Answer, Amount, Money, Transfer, Balance = 1000;
    do
    {
        cout << "\n Press 1 to Deposit Money \n Press 2 to Withdraw \n Press 3 to Check Balance \n Press 4 to Transfer Money \n 0 to Leave";
        cin >> Answer;
        switch (Answer) {
        case 1:
            cout << "Put the Money here";
            cin >> Money;
            Balance = Balance + Money;
            break;
        case 2:
            cout << " How much amount do you want to withdraw";
            cin >> Amount;
            if (Amount > Balance)
            {
                cout << " You don't have enough money ";
            }
            else
            {
                Balance = Balance - Amount;
                cout << " Here is your Money: " << Balance;
            }
            break;
        case 3:
            cout << " Your Balance is " << Balance;
            break;
        case 4:
            cout << " How much money do you want to transfer ";
            cin >> Transfer;
            if (Transfer > Balance)
            {
                cout << " You don't have enough money ";
            }
            else
            {
                Balance = Balance - Transfer;
                cout << " Here is your Money: " << Balance;
            }
        default:
            break;
        }
    } while (Answer != 0);
}

void main()
{
    startsScreen();
  
}
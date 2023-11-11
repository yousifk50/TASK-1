#include <iostream>
using namespace std;

int main()

{

    int password;

    for (int i = 0; i < 3; i++)

    {
        cout << "enter password:\n";
        cin >> password;

        if (password == 123456)
        {
            double balance = 3230;
            double withdraw, deposit;
            int option;
            cout << "Choose a Transaction:\n";
            cout << "[1] Inquire Balance \n"
                 << "[2] Withdraw \n"
                 << "[3] Deposit \n"
                 << "Enter Option:";
            cin >> option;

            switch (option)
            {
            case 1:
                cout << "\n Your current balance is " << balance << endl;
                break;
            case 2:
                cout << "Enter amount: ";
                cin >> withdraw;
                balance = balance - withdraw;
                cout << "You withdrew $" << withdraw << endl;
                cout << "Your remaining balance is " << balance << endl;
                continue;
            case 3:
                cout << "Enter amount: ";
                cin >> deposit;
                balance = balance + deposit;

                cout << "You deposited " << deposit << endl;
                cout << "Your new balance is $" << balance << endl;
                continue;
            default:
                cout << "\n That is an invalid option \n";
            }

            break;
        }
        else

            cout << "Pls try again!!!\n";
    }

    return 0;
}

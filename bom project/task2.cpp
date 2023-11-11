#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter any positive number" << endl;
    cin >> num;

    if (num % 2 == 0 || num % 3 == 0)
    {
        cout << "this is non prime number " << endl;
    }
    else if (num == 2 || num == 3)
    {

        cout << "this is prime number " << endl;
    }
    else
    {

        cout << "this is prime number " << endl;

        return 0;
    }
}
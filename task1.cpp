#include <iostream>
using namespace std;

// Recursive function to calculate fac

int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Please enter a positive number" << endl;
    }
    else
    {
        int result = fac(num);
        cout << "The fac of " << num << " = " << result << endl;
    }

    return 0;
}

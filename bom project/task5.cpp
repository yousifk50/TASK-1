#include <iostream>

using namespace std;

int main()
{
    int start, end;

    cout << "Enter the starting number ";
    cin >> start;

    cout << "Enter the ending number ";
    cin >> end;

    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << "The sum of the numbers " << start << " to " << end << " is: " << sum << endl;

    return 0;
}

#include <iostream>
using namespace std;

int count(string txt)
{
    int count = 1;

    for (int i = 0; i < txt.length(); i++)
    {
        if (txt[i] == ' ')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    cout << count("one two three") << endl;
    cout << count("one two three four") << endl;

    return 0;
}

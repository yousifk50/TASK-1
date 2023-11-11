#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int sizeofarray = size(arr);

    for (int i = sizeofarray - 1; i >= 0; i--)
    {

        cout << arr[i] << endl;
    }

    return 0;
}
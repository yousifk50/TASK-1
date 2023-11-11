#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sizeofarray = size(arr);

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size(arr); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The smallest element is " << min << endl;
    cout << "The largest element is  " << max << endl;

    return 0;
}

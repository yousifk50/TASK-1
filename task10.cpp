#include <iostream>

using namespace std;

void find(int arr1[], int sizearr1, const int arr2[], int sizearr2)
{

    for (int i = 0; i < sizearr1; i++)
    {
        for (int j = 0; j < sizearr2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << "Common elements " << arr1[i] << " ";
            }
        }
    }
}

int main()
{
    const int sizearr1 = 5;
    const int sizearr2 = 7;

    int arr1[sizearr1] = {1, 2, 3, 4, 5};
    int arr2[sizearr2] = {3, 5, 7, 9, 11, 2, 13};

    find(arr1, sizearr1, arr2, sizearr2);

    return 0;
}

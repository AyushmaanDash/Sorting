// Binary Sort

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 8, 10, 17, 2, 1, 3, 437, 47, 3};
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < (9 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

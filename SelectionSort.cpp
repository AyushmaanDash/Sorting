// Selection Sort

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 8, 10, 17, 2, 1, 3, 437, 47, 3};
    int temp;
    for (int i = 0; i < 10; i++)
    {
        int count = i;
        int min = arr[i];
        for (int j = i; j < 10; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                count = j;
            }

            if (j == 9)
            {
                temp = arr[i];
                arr[i] = min;
                arr[count] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// 18. Sortarea unui vector prin metoda bulelor

#include <iostream>

using namespace std;

void buleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {
        6,
        3,
        64235,
        5345,
        11,
        22,
        64,
        265264,
        12,
        65,
        25,
        43,
        6346,
        3,
        63,
        563,
        5345,
        35,
        5,
        34,
        36,
        36,
        345,
        5,
        34,
        756,
        8567,
        867,
        6,
        43,
        15};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    buleSort(arr, arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
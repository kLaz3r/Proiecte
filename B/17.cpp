// 17. Sortarea unui vector prin selectia cu pivotare

#include <iostream>

using namespace std;

void sortPivotare(int arr[], int n)
{
    int i, j, indexMinim, temp;
    for (i = 0; i < n - 1; i++)
    {
        indexMinim = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexMinim])
                indexMinim = j;
        }
        temp = arr[indexMinim];
        arr[indexMinim] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {64,
                 25,
                 12,
                 22,
                 11};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    sortPivotare(arr, arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
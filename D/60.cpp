// 60. Scrieti o functie recursiva care sa indice existenta (sau nonexistenta) unei valori date intr-un vector, prin cautare binara.

#include <iostream>

using namespace std;

int cautareBinara(int arr[], int x, int primul, int ultimul)
{
    int mijloc;
    if (primul > ultimul)
    {
        return false;
    }
    else
    {
        mijloc = (primul + ultimul) / 2;
        if (x == arr[mijloc])
        {
            return mijloc;
        }
        else if (x > arr[mijloc])
        {
            return cautareBinara(arr, x, mijloc + 1, ultimul);
        }
        else
        {
            return cautareBinara(arr, x, primul, mijloc - 1);
        }
    }
}

int main()
{
    int arr[] = {1,
                 5,
                 9,
                 12,
                 30,
                 45,
                 48,
                 56,
                 87,
                 105,
                 190};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << cautareBinara(arr, 12, 0, arrSize - 1);

    return 0;
}
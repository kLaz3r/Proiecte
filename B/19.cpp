// 19. Interclasarea a 2 vectori

#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0;
    int a[] = {1,
               3,
               5,
               8,
               9};
    int b[] = {2,
               4,
               6,
               9,
               10, 11};
    int aSize = sizeof(a) / sizeof(a[0]);
    int bSize = sizeof(b) / sizeof(b[0]);
    int c[aSize + bSize];
    for (int k = 0; k < aSize + bSize; k++)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else if (b[j] < a[i])
        {
            c[k] = b[j];
            j++;
        }
        else if (a[i] == b[j])
        {
            c[k] = a[i];
            i++;
            j++;
        }
    }

    for (int index = 0; index < aSize + bSize - 1; index++)
    {
        cout << c[index] << ", ";
    }
    cout << endl;

    return 0;
}
// 24. Minimul elementelor unei matrici, cu precizarea pozitiei (ultima sau prima)

#include <iostream>

using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int min = a[0][0];
    int linie = 0, coloana = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                linie = i;
                coloana = j;
            }
        }
    }

    cout << "Minimul este: " << min << " si se afla la pozitia: " << linie + 1 << "," << coloana + 1 << endl;

    return 0;
}

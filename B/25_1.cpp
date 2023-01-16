// 25. Suma elementelor impare intr-o matrice. Suma elementelor de pe diagonala secundara: ( / )

#include <iostream>

using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int suma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                suma += a[i][j];
            }
        }
    }

    cout << "suma elementelor impare este: " << suma << endl;

    return 0;
}
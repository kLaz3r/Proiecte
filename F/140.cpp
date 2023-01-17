// 140. Analog ca mai sus, dar care sa afiseze pe ecran, �n linie, numarul de divizori negativi pentru fiecare numar din sir (numerele afisate se vor separa prin c�te un spatiu);

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fisierIntrare("intro.txt");
    if (!fisierIntrare.is_open())
    {
        cout << "nu am putut deschide intro.txt" << endl;
        return -1;
    }

    int n;
    fisierIntrare >> n;

    int x;
    int contorDivizor;
    for (int i = 0; i < n; i++)
    {
        fisierIntrare >> x;
        contorDivizor = 0;
        for (int j = -x; j >= -1; j--)
        {
            if (x % j == 0)
            {
                contorDivizor++;
            }
        }
        cout << contorDivizor << " ";
    }

    fisierIntrare.close();

    return 0;
}
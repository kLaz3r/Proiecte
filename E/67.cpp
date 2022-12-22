// 67. Se citeste un numar natural n si apoi n cuvinte formate din cel mult 20 de litere fiecare.
// Calculati si afisati cate dintre cele n-1 cuvinte citite incepand cu cel de al doilea au proprietatea ca primul cuvant citit le este sufix.
// Exemplu: daca n=5, iar cuvintele citite sunt ou, cadou, anod, birou, mileu => 2 (2 cuvinte din ultimele 4 se termina cu sufixul "ou").

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cuvant1[21], cuvant2[21];
    int n, index;
    cout << "Introdu N, apoi cuvintele: ";
    cin >> n;
    cin >> cuvant1;
    index = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> cuvant2;
        if (strlen(cuvant1) <= strlen(cuvant2) && strcmp(cuvant1, cuvant2 - strlen(cuvant1) + strlen(cuvant2)) == 0)
        {
            index++;
        }
    }
    cout << "Numarul de cuvinte in care apare primul cuvant ca sufix este: ";
    cout << index;
    return 0;
}
// 66. Se citeste un cuvant format din cel mult 20 de litere. Sa se intershimbe prima jumatate a cuvantului cu cea de a doua.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char cuvant[20];
    cout << "Introdu cuvantul: ";
    cin >> cuvant;
    char jumatate1[10];
    char jumatate2[10];
    char aux[10];

    int cuvantSize = strlen(cuvant);
    int mijloc = cuvantSize / 2;

    if (cuvantSize % 2)
    {
        // impar
        for (int i = 0; i < mijloc; i++)
        {
            aux[i] = cuvant[i];
        }
        for (int i = mijloc + 1; i < cuvantSize; i++)
        {
            cuvant[i - mijloc - 1] = cuvant[i];
            cuvant[i] = aux[i - mijloc - 1];
        }
    }
    else
    {
        // par
        for (int i = 0; i < mijloc; i++)
        {
            aux[i] = cuvant[i];
        }
        for (int i = mijloc; i < cuvantSize; i++)
        {
            cuvant[i - mijloc] = cuvant[i];
            cuvant[i] = aux[i - mijloc];
        }
    }
    cout << cuvant;
    return 0;
}
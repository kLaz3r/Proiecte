// 73. Rescrieti programele 10-70 folosind un fisier de intrare pt datele de intrare, respectiv un fisier de iesire pt rezultate.
// 12. Se citeste un numar.Sa se afiseze descompunerea acestui numar in produs de factori primi
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

unsigned long long descompuneInFactoriPrimi(unsigned long long n, FILE *fptr)
{
    while (n % 2 == 0)
    {
        fprintf(fptr, "%d ", 2);
        n /= 2;
    }
    for (unsigned long long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            fprintf(fptr, "%d ", i);
            n /= i;
        }
    }

    if (n > 2)
    {
        fprintf(fptr, "%d ", n);
    }

    return 0;
}

int main()
{
    int numar;
    FILE *fptr;

    if ((fptr = fopen("input.txt", "r")) == NULL)
    {
        cout << "Eroare, nu pot deschide fisierul.";
        return 0;
    }
    fscanf(fptr, "%d", &numar);
    fclose(fptr);

    cout << numar;

    if ((fptr = fopen("output.txt", "w")) == NULL)
    {
        cout << "Eroare, nu pot deschide fisierul.";
        return 0;
    }
    descompuneInFactoriPrimi(numar, fptr);
fclose(fptr);
    return 0;
}
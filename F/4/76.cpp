// 73. Rescrieti programele 10-70 folosind un fisier de intrare pt datele de intrare, respectiv un fisier de iesire pt rezultate.
// 13. Determinati daca un numar este palindrom (citit de la coada la cap e acelasi numar; exp: 12521)
#include <iostream>
#include <fstream>

using namespace std;

int oglindesteNumarul(int n)
{
    int numarulInvers = 0;
    int rest = 0;
    while (n != 0)
    {
        rest = n % 10;
        numarulInvers = numarulInvers * 10 + rest;
        n /= 10;
    }
    return numarulInvers;
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
    if (numar == oglindesteNumarul(numar))
    {
        fprintf(fptr, "%d este palindrom", numar);
    }
    else
    {
        fprintf(fptr, "%d nu este palindrom", numar);
    }
    fclose(fptr);

    return 0;
}
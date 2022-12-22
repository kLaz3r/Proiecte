// 73. Rescrieti programele 10-70 folosind un fisier de intrare pt datele de intrare, respectiv un fisier de iesire pt rezultate.
// 10. Se citeste un nr.Sa se afiseze:
// 	a. Suma cifrelor sale
// 	b. Oglinditul numarului (exp: n= 1043, oglinditul: 3401)

#include <iostream>
#include <fstream>

using namespace std;

int sumaCifrelor(int n)
{
    int suma = 0, m;
    while (n > 0)
    {
        m = n % 10;
        suma += m;
        n = n / 10;
    }
    return suma;
}

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
    int numar, suma, oglinditul;
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
    suma = sumaCifrelor(numar);
    oglinditul = oglindesteNumarul(numar);

    fprintf(fptr, "Numar: %d", numar);
    fprintf(fptr, "\n");
    fprintf(fptr, "Suma Cifrelor: %d", suma);
    fprintf(fptr, "\n");
    fprintf(fptr, "Oglinditul: %d", oglinditul);
    fclose(fptr);
    return 0;
}
// 73. Rescrieti programele 10-70 folosind un fisier de intrare pt datele de intrare, respectiv un fisier de iesire pt rezultate.
// 11. Determinati daca un numar "n" dat este prim.

#include <iostream>
#include <fstream>

using namespace std;
bool prim(int n)
{
    if (n % n == 0 && n % 1 == 0)
    {
        for (int i = n - 1; i > 1; i--)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int numar;
    bool isPrime;
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
    isPrime = prim(numar);

    fprintf(fptr, "Numar: %d", numar);
    fprintf(fptr, "\n");
    fprintf(fptr, "Prim: %d", isPrime);
    fclose(fptr);
    return 0;
}
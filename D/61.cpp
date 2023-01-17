// 61. Sa se scrie o func?ie recursiva care determina cel mai mare divizor comun a doua numere transmise ca parametri ?i �ntoarce rezultatul prin intermediul unui parametru de ie?ire.

#include <iostream>

using namespace std;

void cmmdc(int a, int b, int *result)
{
    if (a == 0)
    {
        *result = b;
        return;
    }
    if (b == 0)
    {
        *result = a;
        return;
    }
}

int main()
{
    int a, b;
    int result;
    cout << "Introdu cele doua numere: ";
    cin >> a >> b;
    cmmdc(a, b, &result);
    cout << "Cel mai mare divizor comun este: " << result << endl;
    return 0;
}
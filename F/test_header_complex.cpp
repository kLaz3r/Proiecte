#include <iostream>

#include "complex.h"

using namespace std;

int main()
{
    complex a, b;
    cout << "Introdu partea reala si partea imaginara a primului numar complex: ";
    cin >> a.preal >> a.pimag;

    cout << "Introdu partea reala si partea imaginara celui de al doilea numar complex: ";
    cin >> b.preal >> b.pimag;

    complex suma = sumaComplex(a, b);
    cout << "suma numerelor complexe: " << suma.preal << " + " << suma.pimag << "i" << endl;
    complex diferenta = diferentaComplex(a, b);
    cout << "Diferenta numerelor complexe: " << diferenta.preal << " + " << diferenta.pimag << "i" << endl;
    complex produsul = produsulComplex(a, b);
    cout << "produsul numerelor complexe: " << produsul.preal << " + " << produsul.pimag << "i" << endl;
    complex raportul = raportulComplex(a, b);
    cout << "raportul numerelor complexe: " << raportul.preal << " + " << raportul.pimag << "i" << endl;

    return 0;
}
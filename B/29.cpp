// 29. Fie structura unui nr complex
// typedef struct
//  {
//  double preal;
//  double pimag;
//  } complex;
//  Scrieti un program care sa afiseze suma, diferenta, produsul, raportul a 2nr.e complexe (citite)

#include <iostream>

using namespace std;

int main()
{
    typedef struct
    {
        double preal;
        double pimag;
    } complex;

    complex a, b;

    cout << "Introdu partea reala si partea imaginara a primului numar complex: ";
    cin >> a.preal >> a.pimag;

    cout << "Introdu partea reala si partea imaginara celui de al doilea numar complex: ";
    cin >> b.preal >> b.pimag;

    complex suma;
    suma.preal = a.preal + b.preal;
    suma.pimag = a.pimag + b.pimag;

    cout << "suma numerelor complexe: " << suma.preal << " + " << suma.pimag << "i" << endl;

    complex diferenta;
    diferenta.preal = a.preal - b.preal;
    diferenta.pimag = a.pimag - b.pimag;

    cout << "Diferenta numerelor complexe: " << diferenta.preal << " + " << diferenta.pimag << "i" << endl;

    complex produsul;
    produsul.preal = (a.preal * b.preal) - (a.pimag * b.pimag);
    produsul.pimag = (a.preal * b.pimag) + (a.pimag * b.preal);

    cout << "produsul numerelor complexe: " << produsul.preal << " + " << produsul.pimag << "i" << endl;

    complex raportul;
    raportul.preal = ((a.preal * b.preal) + (a.pimag * b.pimag)) / ((b.preal * b.preal) + (b.pimag * b.pimag));
    raportul.pimag = ((a.pimag * b.preal) - (a.preal * b.pimag)) / ((b.preal * b.preal) + (b.pimag * b.pimag));

    cout << "raportul numerelor complexe: " << raportul.preal << " + " << raportul.pimag << "i" << endl;

    return 0;
}
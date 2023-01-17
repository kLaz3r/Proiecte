#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct
{
    double preal;
    double pimag;
} complex;

complex sumaComplex(complex a, complex b)
{
    complex suma;
    suma.preal = a.preal + b.preal;
    suma.pimag = a.pimag + b.pimag;
    return suma;
}

complex diferentaComplex(complex a, complex b)
{
    complex diferenta;
    diferenta.preal = a.preal - b.preal;
    diferenta.pimag = a.pimag - b.pimag;
    return diferenta;
}

complex produsulComplex(complex a, complex b)
{
    complex produsul;
    produsul.preal = (a.preal * b.preal) - (a.pimag * b.pimag);
    produsul.pimag = (a.preal * b.pimag) + (a.pimag * b.preal);
    return produsul;
}

complex raportulComplex(complex a, complex b)
{
    complex raportul;
    raportul.preal = ((a.preal * b.preal) + (a.pimag * b.pimag)) / ((b.preal * b.preal) + (b.pimag * b.pimag));
    raportul.pimag = ((a.pimag * b.preal) - (a.preal * b.pimag)) / ((b.preal * b.preal) + (b.pimag * b.pimag));
    return raportul;
}

#endif
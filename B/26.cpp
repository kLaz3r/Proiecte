// 26. Admitere: fie structura candidat(nume, prenume, nota1, nota2, media), un numar de "n" candidati(n circa 12-15), un numar de m<12 locuri. Se citesc numele, prenumele, nota1, nota2 pt fiecare.
// Un candidat se considera admis daca are media >5 si fiecare din cele 2 note>5. Sa se afiseze candidatii admisi in ordinea mediilor descrescator (nume, prenume, media),
// iar pt candidati cu aceeasi medie acestia se vor ordona dupa nume.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct candidat
{
    string nume;
    string prenume;
    int nota1;
    int nota2;
    double media;
};

bool cmp(candidat a, candidat b)
{
    if (a.media != b.media)
        return a.media > b.media;
    return a.nume < b.nume;
}

int main()
{
    int n;
    cout << "Introduceti numarul de candidati: ";
    cin >> n;
    vector<candidat> candidati(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Introduceti numele candidatului " << i + 1 << ": ";
        cin >> candidati[i].nume;
        cout << "Introduceti prenumele candidatului " << i + 1 << ": ";
        cin >> candidati[i].prenume;
        cout << "Introduceti nota1 a candidatului " << i + 1 << ": ";
        cin >> candidati[i].nota1;
        cout << "Introduceti nota2 a candidatului " << i + 1 << ": ";
        cin >> candidati[i].nota2;
        if (candidati[i].nota1 > 5 && candidati[i].nota2 > 5)
            candidati[i].media = (candidati[i].nota1 + candidati[i].nota2) / 2.0;
        else
            candidati[i].media = 0;
    }

    sort(candidati.begin(), candidati.end(), cmp);

    cout << "Candidatii admisi sunt: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (candidati[i].media > 5)
            cout << candidati[i].nume << " " << candidati[i].prenume << " cu media " << candidati[i].media << endl;
    }

    return 0;
}
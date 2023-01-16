// 27. Scrieti o uniune tip persoana care sa contina: nume, nivel studii (nr clase pt cei fara liceu), denumirea institutiei si orasul pt cei cu liceu sau facultate. Afisati datele a 3 persoane cu nivel diferit de studii (o solutie in note de curs)
#include <iostream>
using namespace std;

struct Persoana
{
    string nume;
    int nivel_studii;
    string institutie;
    string oras;
};

int main()
{
    Persoana pers1, pers2, pers3;

    pers1.nume = "Ion Popescu";
    pers1.nivel_studii = 12;
    pers1.institutie = "N/A";
    pers1.oras = "N/A";

    pers2.nume = "Maria Ionescu";
    pers2.nivel_studii = 10;
    pers2.institutie = "Colegiul National 'Mihai Viteazul'";
    pers2.oras = "Bucuresti";

    pers3.nume = "Gheorghe Georgescu";
    pers3.nivel_studii = 8;
    pers3.institutie = "Universitatea 'Alexandru Ioan Cuza'";
    pers3.oras = "Iasi";

    cout << pers1.nume << ", " << pers1.nivel_studii << " clase, " << pers1.institutie << ", " << pers1.oras << endl;
    cout << pers2.nume << ", " << pers2.nivel_studii << " clase, " << pers2.institutie << ", " << pers2.oras << endl;
    cout << pers3.nume << ", " << pers3.nivel_studii << " clase, " << pers3.institutie << ", " << pers3.oras << endl;

    return 0;
}
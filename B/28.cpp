// 28. Copiati valorile unui vector (dat) intr-un alt vector folosind un pointer catre primul vector (indicatie/solutie in note de curs: legatura vectori-pointeri)

#include <iostream>
using namespace std;

int main()
{
    int original[5] = {1, 2, 3, 4, 5};
    int copie[5];
    int *p = original;

    for (int i = 0; i < 5; i++)
    {
        copie[i] = *(p + i);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << copie[i] << " ";
    }
    return 0;
}
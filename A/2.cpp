//  2. Program care identifica tipul tastei apasate
// (se poate folosi o instructiune switch care citeste codul ASCII corespunzator tastei apasate; functie de acest cod se va afisa, dupa caz
//  1 din cele 4 raspunsuri: "ati tastat o litera mare, o litera mica, o cifra, un alt caracter decat litera sau cifra" )
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int character;
    character = _getch();

    if (character >= 65 && character <= 90)
    {
        cout << "Ati tastat o litera mare";
    }
    else if (character >= 97 && character <= 122)
    {
        cout << "Ati tastat o litera mica";
    }
    else if (character >= 48 && character <= 56)
    {
        cout << "Ati tastat o cifra";
    }
    else
    {
        cout << "Ati tastat un alt caracter decat litera sau cifra";
    }

    return 0;
}
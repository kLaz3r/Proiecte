// 56. Scrieti o functie recursiva si una iterativa care calculeaza factorial(n).

#include <iostream>

using namespace std;

int factorialRecursiv(int n)
{
    if (n > 1)
    {
        return n * factorialRecursiv(n - 1);
    }
    else
    {
        return n;
    }
}

int factorialIterativ(int n)
{
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p *= i;
    }
    return p;
}

int main()
{
    int n;
    cout << "Introdu N: ";
    cin >> n;
    cout << "Factorial calculat recursiv: ";
    cout << factorialRecursiv(n) << endl;
    cout << "Factorial calculat iterativ: ";
    cout << factorialIterativ(n) << endl;
    return 0;
}
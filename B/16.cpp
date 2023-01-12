// 16. Parcurgerea unui vector in mod alternativ (se afiseaza in ordinea primul element, ultimul; al doilea elem, penultimul etc, pana la mijloc)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = a.size();

    for (int i = 0; i < n / 2; i++)
    {
        cout << a[i] << " " << a[n - i - 1] << endl;
    }

    return 0;
}
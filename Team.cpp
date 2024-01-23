#include <iostream>

using namespace std;

int main()
{
    int n, Petya, Vasya, Tonya, number(0);
    cin >> n;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya == 2 || Petya + Vasya + Tonya == 3)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}

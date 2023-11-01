#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj wartosc: ";
    cin >> n;

    int a = 0; 

    for (int i = 1; i <= n; i++)
    {
        int b = 0;

        for (int j = 1; j <= i; j++)
        {
            b += j;
        }

        cout << "1";
        for (int k = 2; k <= i; k++)
        {
            cout << " + " << k;
        }

        cout << " = " << b << endl;

        a += b;
        if (i < n)
        {
            cout << "";
        }
    }

    cout << "Suma szeregu: 1";
    int c = 1;
    for (int i = 2; i <= n; i++) 
    {
        c += i;
        cout << " + " << c ;
    }

    cout << " = " << a << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;

    cout << "Pobrano liczby a == " << a << " oraz b == " << b << endl << endl;

    cout << "Wiersz o dlugosci a: \n";
    for (int i = 0; i < a; i++) 
    {
        cout << "*";
    }
    cout << endl;

    cout << "Wiersz o dlugosci b:\n";
    for (int i = 0; i < b; i++)
    {
        cout << "*\n";
    }

    cout << "Prostokat gwiazdek o wymiarach a na b\n";
    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < b; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Obwod prostokata o wymiarach a na b\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++) 
        {
            if (i == 0 || i == a - 1 || j == 0 || j == b - 1) 
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "Trojkat prostokatny rownoramienny z kontem prostym w lewym dolnym rogu\n";
    for (int i = 1; i <= a; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

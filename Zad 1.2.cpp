#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "prosze wprowadzic liczbe:" << endl;
    cin >> a;


    if (a > 0)
    {
        cout << "podana liczba jest dodatnia\n";

    }
    else if (a < 0)
    {
        cout << "podana liczba jest ujemna\n";

    }
    else
    {
        cout << "wpisana liczba rowna 0\n";
    }
    cout << "wsystkiego dobrego";
    return 0;

}
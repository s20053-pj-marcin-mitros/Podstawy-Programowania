#include <iostream>
using namespace std;

int main()
{
    int month;

    cout << "Prosze podac liczbe w zakresie 1-12\n";

    cin >> month;

    switch (month)
    {
    case 1:
        cout << "Styczen\n" << "W roku nieprzestepnym ma 31 dni\n";
        break;
    case 2:
        cout << "Luty\n" << "W roku nieprzestepnym ma 28 dni\n";
        break;
    case 3:
        cout << "Marzec\n" << "W roku nieprzestepnym ma 31 dni\n";
        break;
    case 4:
        cout << "Kwiecien\n" << "W roku nieprzestepnym ma 30 dni\n";
        break;
    case 5:
        cout << "Maj\n" << "W roku nieprzestepnym ma 31 dni\n";
        break;
    case 6:
        cout << "Czerwiec\n" << "W roku nieprzestepnym ma 30 dni\n";
        break;
    case 7:
        cout << "Lipiec\n" << "W roku nieprzestepnym ma 31 dni\n";
        break;
    case 8:
        cout << "Sierpien\n" << "W roku nieprzestepnym ma 31 dni\n";
        break;
    case 9:
        cout << "Wrzesien\n" << "W roku nieprzestepnym ma 30 dni\n";
        break;
    case 10:
        cout << "Pazdziernik\n" << "W roku nieprzestepnym ma 31 dni\n";
        break;
    case 11:
        cout << "Listopad\n" << "W roku nieprzestepnym ma 30 dni\n";
        break;
    case 12:
        cout << "Grudzien\n" << "W roku nieprzestepnym ma 31 dni\n";
        break;
    default:
        cout << "Zostala wybrana liczba spoza skali\n";
        return 0;
    }
    if (month >= 4 && month <= 9)
    {
        cout << "Jest to miesiac sloneczny\n";

    }
    else
    {
        cout << "Jest to miesiac pochmurny\n";
    }
    return 0;

}

#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;

	cout << "prosze podac trzy liczby\n";
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b && a > c)
	{
		cout << a << " jest najwieksza liczba\n" << "wszystkiego dobrego!\n";

		return 0;
	}
	if (b > a && b > c)
	{
		cout << b<< " jest najwieksza liczba\n" << "wszystkiego dobrego!\n";
		return 0;
	}
	else
	{
		cout << c << " jest najwieksza liczba\n" << "wszystkiego dobrego!\n";

	}

	return 0;
}

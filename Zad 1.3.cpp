#include <iostream>
using namespace std;

int main() {
	int number;

	cout << "Podaj liczbe calkowita: ";
	cin >> number;

	if (number == 0)
	{
		cout << "Wpisana liczba jest rowna zero: " << number << endl;
	}
	
	else if (number % 2 == 1)
	{
		cout << "Wpisales liczbe niepazysta: " << number << endl;
	}

	else
	{
		cout << "Wpisana  liczba jest pazysta: " << number << endl;
	}
	cout << "Wszytkiego dobrego\n";

	return 0;

}


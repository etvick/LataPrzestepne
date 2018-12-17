#include "pch.h"
#include <iostream>
#include <limits>

using namespace std;

//funkcja sprawdzająca rok przestepny
bool prok(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) && (year >= 1752))
	{
		return true;
	}
	else {
		return false;
	}

}
bool good, bad;

int main()
{
	cout << "Witaj," << endl;
	cout << "program policzy czy dany rok jest przestepny, czy tez nie." << endl;
	cout << "Program rowniez policzy z wprowadzonej przez Ciebie daty, ktory to byl dzien w danym roku." << endl;
	cout << "Podaj date, ktora Cie interesuje:" << endl;

	//Wprowadzanie danych oraz ograniczenia wpisywania blednych danych

	int year, month, day;
	cout << "Podaj rok: " << endl;
	while (!(cin >> year))
	{
		cout << "Rok sklada sie z cyfr, wiec podaj cyfry" << endl;
		cin.clear();
		cin.sync();
		cin.ignore(INT_MAX, '\n');
	};

	cout << "Podaj miesiac: " << endl;
	while (!(cin >> month))
	{
		cout << "Miesiac sklada sie z cyfr, wiec podaj cyfry" << endl;
		cin.clear();
		cin.sync();
		cin.ignore(INT_MAX, '\n');
	};
	while (month > 12)
	{
		cout << "Podaj jeszcze raz miesiac, pamietajac o tym, ze musi to byc wartosc liczbowa od 1-12" << endl;
		while (!(cin >> month))
		{
			cout << "Miesiac sklada sie z cyfr, wiec podaj cyfry" << endl;
			cin.clear();
			cin.sync();
			cin.ignore(INT_MAX, '\n');
		};
	}

	cout << "Podaj dzien: " << endl;

	while (!(cin >> day))
	{
		cout << "Dzien sklada sie z cyfr, wiec podaj cyfry" << endl;
		cin.clear();
		cin.sync();
		cin.ignore(INT_MAX, '\n');
	};

	if (prok(year))
	{
		if (month == 2)
		{
			while (day > 29)
			{
				cout << "Podaj jeszcze raz dzien, pamietajac o tym, ze jest to rok przestepny, wiec luty ma 29 dni" << endl;
				while (!(cin >> day))
				{
					cout << "Dzien sklada sie z cyfr, wiec podaj cyfry" << endl;
					cin.clear();
					cin.sync();
					cin.ignore(INT_MAX, '\n');
				};
			}
		}
		else
			if (month % 2 == 0 && month <= 7 || month % 2 == 1 && month >= 8)
			{
				while (day > 30)
				{
					cout << "Podaj jeszcze raz dzien, pamietajac o tym, ze musi to byc liczba od 1 - 30" << endl;
					while (!(cin >> day))
					{
						cout << "Dzien sklada sie z cyfr, wiec podaj cyfry" << endl;
						cin.clear();
						cin.sync();
						cin.ignore(INT_MAX, '\n');
					};
				}
			}
			else
				if (month % 2 == 1 && month <= 7 || month % 2 == 0 && month >= 8)
				{
					while (day > 31)
					{
						cout << "Podaj jeszcze raz dzien, pamietajac o tym, ze musi to byc liczba od 1 - 31" << endl;
						while (!(cin >> day))
						{
							cout << "Dzien sklada sie z cyfr, wiec podaj cyfry" << endl;
							cin.clear();
							cin.sync();
							cin.ignore(INT_MAX, '\n');
						};
					}
				}

	}
	else
	{
		if (month == 2)
		{
			while (day > 28)
			{
				cout << "Podaj jeszcze raz dzien, pamietajac o tym, ze jest to rok nieprzestepny, wiec luty ma 28 dni" << endl;
				while (!(cin >> day))
				{
					cout << "Dzien sklada sie z cyfr, wiec podaj cyfry" << endl;
					cin.clear();
					cin.sync();
					cin.ignore(INT_MAX, '\n');
				};
			}
		}
		else
			if (month % 2 == 0 && month <= 7 || month % 2 == 1 && month >= 8)
			{
				while (day > 30)
				{
					cout << "Podaj jeszcze raz dzien, pamietajac o tym, ze musi to byc liczba od 1 - 30" << endl;
					while (!(cin >> day))
					{
						cout << "Dzien sklada sie z cyfr, wiec podaj cyfry" << endl;
						cin.clear();
						cin.sync();
						cin.ignore(INT_MAX, '\n');
					};
				}
			}
			else
				if (month % 2 == 1 && month <= 7 || month % 2 == 0 && month >= 8)
				{
					while (day > 31)
					{
						cout << "Podaj jeszcze raz dzien, pamietajac o tym, ze musi to byc liczba od 1 - 31" << endl;
						while (!(cin >> day))
						{
							cout << "Dzien sklada sie z cyfr, wiec podaj cyfry" << endl;
							cin.clear();
							cin.sync();
							cin.ignore(INT_MAX, '\n');
						};
					}
				}

	}
	//Zliczanie dni

	static int monthtab[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };

	if (month <= 2)
	{
		cout << "Dzien, ktory podales, to " << monthtab[month - 1] + day << " w " << year << " roku." << endl;
	}
	else
	{
		cout << "Dzien, ktory podales, to " << monthtab[month - 1] + day + prok(year) << " w " << year << " roku." << endl;
	}




	if (prok(year))
	{
		cout << "Jest to rok przestepny" << endl;
	}
	else
	{
		cout << "Ten rok nie jest przestepny" << endl;
	}

	system("PAUSE");
}
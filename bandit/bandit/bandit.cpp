#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));

	cout << " \t\t О Д Н О Р У К И Й \t Б А Н Д И Т \n";

	int bet = 0, coin = 1000;
	int s;

	while (coin > 0)
	{
		cout << "Введите ставку: ";
		cin >> bet;

		if (bet > coin || bet <= 0) 
		{
			cout << "Ошибка ввода\n" << endl;
			continue;
		}

		coin = coin - bet;
		s = 100 + rand() % 900;	
		cout << "Ваше счастливое число = " << s << endl;

		if (s == 123 || s == 234 || s == 345 || s == 567 || s == 678
			|| s == 789)
		{
			bet = bet + (bet * 130 / 100);
			coin = coin + bet;
			cout << "Вы выйграли! +30% к ставке \n";
		}
		else if (s == 111 || s == 222 || s == 333 || s == 444 || s == 555
			|| s == 666 || s == 888 || s == 999)
		{
			bet = bet + (bet * 200 / 100);
			coin = coin + bet;
			cout << "Вы выйграли! +100% к ставке \n";
		}
		else if (s == 777)
		{
			coin = coin * 100;
			cout << "ПОЗДРАВЛЯЕМ!  ВЫ ВЫЙГРАЛИ ДЖЕК-ПОТ!\n";
		}
		else
		{
			cout << "Увы, попробуйте ещё!\n";
		}

		cout << "Богатство: " << coin << "\n\n";
	}

	return 0;
}
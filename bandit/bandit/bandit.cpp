#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));

	cout << " \t\t � � � � � � � � � \t � � � � � � \n";

	int bet = 0, coin = 1000;
	int s;

	while (coin > 0)
	{
		cout << "������� ������: ";
		cin >> bet;

		if (bet > coin || bet <= 0) 
		{
			cout << "������ �����\n" << endl;
			continue;
		}

		coin = coin - bet;
		s = 100 + rand() % 900;	
		cout << "���� ���������� ����� = " << s << endl;

		if (s == 123 || s == 234 || s == 345 || s == 567 || s == 678
			|| s == 789)
		{
			bet = bet + (bet * 130 / 100);
			coin = coin + bet;
			cout << "�� ��������! +30% � ������ \n";
		}
		else if (s == 111 || s == 222 || s == 333 || s == 444 || s == 555
			|| s == 666 || s == 888 || s == 999)
		{
			bet = bet + (bet * 200 / 100);
			coin = coin + bet;
			cout << "�� ��������! +100% � ������ \n";
		}
		else if (s == 777)
		{
			coin = coin * 100;
			cout << "�����������!  �� �������� ����-���!\n";
		}
		else
		{
			cout << "���, ���������� ���!\n";
		}

		cout << "���������: " << coin << "\n\n";
	}

	return 0;
}
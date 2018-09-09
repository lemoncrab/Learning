#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a;
	char n;
	cout << " Введите значение: ";
	cin >> a;
	cout << " Укажите параметр: ";
	cin >> n;

	switch (n)
	{
	case 'f':
	case 'F':
		cout << a << " градусов по Фаренгейту составляет " 
			<< (a - 32) / 1.8 << " градусов Цельсия" << endl;
		break;
	case 'c':
	case 'C':
		cout << a << " градусов Цельсия составляет "
			<< a * 1.8 + 32  << " градусов по Фаренгейту" << endl;
		break;
	default: 
		cout << "Некорректный параметр" << endl;
		break;
	}
}
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, f, x;
	cout << "������� ����� a, b � f\n" << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "f = ";
	cin >> f;
	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "��������� �� ������� (� + b � f / �) + f * a * a �(a + b)\nx = " << x << "\n";
}
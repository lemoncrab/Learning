#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a;
	char n;
	cout << " ������� ��������: ";
	cin >> a;
	cout << " ������� ��������: ";
	cin >> n;

	switch (n)
	{
	case 'f':
	case 'F':
		cout << a << " �������� �� ���������� ���������� " 
			<< (a - 32) / 1.8 << " �������� �������" << endl;
		break;
	case 'c':
	case 'C':
		cout << a << " �������� ������� ���������� "
			<< a * 1.8 + 32  << " �������� �� ����������" << endl;
		break;
	default: 
		cout << "������������ ��������" << endl;
		break;
	}
}
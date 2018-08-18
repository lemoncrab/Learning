#include <iostream>
using namespace std;

int main()
{
	int num, a, b, c, d, e;
	cout << "Enter the number: ";
	cin >> num;
	a = num % 10;
	b = (num / 10) % 10;
	c = (num / 100) % 10;
	d = (num / 1000) % 10;
	e = (num / 10000) % 10;

	cout << "1 numeral: " << e << endl;
	cout << "2 numeral: " << d << endl;
	cout << "3 numeral: " << c << endl;
	cout << "4 numeral: " << b << endl;
	cout << "5 numeral: " << a << endl;

	return 0;
}
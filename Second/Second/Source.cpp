#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, f, x;
	cout << "¬ведите числа a, b и f\n" << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "f = ";
	cin >> f;
	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "¬ычисл€ем по формуле (а + b Ч f / а) + f * a * a Ч(a + b)\nx = " << x << "\n";
}
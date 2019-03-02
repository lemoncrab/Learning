#include<iostream>
using namespace std;

int main()
{
	double x, y, z, result;
	cout << "Enter the first number: ";
	cin >> x;
	cout << "Enter the second number: ";
	cin >> y;
	cout << "Enter the third number: ";
	cin >> z;
	result = (x + y + z) / 3;
	cout << "Average value: " << result << endl;

	return 0;
}

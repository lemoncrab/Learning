#include<iostream>
using namespace std;


int main()
{
		
	setlocale(LC_ALL, "");
	const int n = 100;
	char s[n];
	cout << "Input string: ";
	cin.getline(s, n);

	char *str = s;
	int count = 0;
	while (*str)
	{
		if (*str == 'a' || *str == 'o' || *str == 'e' ||*str == 'u' 
			|| *str == 'y' || *str == 'i')
		{
			*str = (char)toupper(*str);
		}
		str++;
	}
	
	cout << "Result: " << s << std::endl;
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int num;
	printf("¬ведите число: ");
	scanf("%d=", &num);
	
	if (num % 2 == 0)
	{
		printf("%d", num + 10);
	}

	else
	{
		printf("%d", num);
	}
	_getch();
}
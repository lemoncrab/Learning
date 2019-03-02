#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int num;
	printf("Введите число: ");
	scanf("%d=", &num);
	
	if (num % 2 == 0)
	{
		printf("Четное");
	}

	else
	{
		printf("Нечетное");
	}
	_getch();
}
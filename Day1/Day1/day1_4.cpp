#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(void)
{
	setlocale(LC_ALL, "rus");
	int num1, num2, num3;
	printf("Введите первое число: ");
	scanf("%d", &num1);
	printf("Введите второе число: ");
	scanf("%d", &num2);
	printf("Введите третье число: ");
	scanf("%d", &num3);

	if (num1 >= num2 && num1 >= num3)
	{
		printf("Наибольшее число: %d", num1);
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		printf("Наибольшее число: %d", num2);
	}
	else
	{
		printf("Наибольшее число: %d", num3);
	}
	_getch();
}
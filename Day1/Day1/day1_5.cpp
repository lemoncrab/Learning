#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(void)
{
	setlocale(LC_ALL, "rus");
	int num;
	printf("Введите число: ");
	scanf("%d", &num);
	
	if (num > 0) printf("Число положительное");
	if (num < 0) printf("Число отрицателньое");
	if (num == 0) printf("Это ноль");

	_getch();
}
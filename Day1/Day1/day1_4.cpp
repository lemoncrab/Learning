#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(void)
{
	setlocale(LC_ALL, "rus");
	int num1, num2, num3;
	printf("������� ������ �����: ");
	scanf("%d", &num1);
	printf("������� ������ �����: ");
	scanf("%d", &num2);
	printf("������� ������ �����: ");
	scanf("%d", &num3);

	if (num1 >= num2 && num1 >= num3)
	{
		printf("���������� �����: %d", num1);
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		printf("���������� �����: %d", num2);
	}
	else
	{
		printf("���������� �����: %d", num3);
	}
	_getch();
}
#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int num;
	printf("������� �����: ");
	scanf("%d=", &num);
	
	if (num % 2 == 0)
	{
		printf("������");
	}

	else
	{
		printf("��������");
	}
	_getch();
}
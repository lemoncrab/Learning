#include<stdio.h>
#include<conio.h>
#include<locale.h>

void main(void)
{
	float A, B, C;
	printf("Enter first number: ");
	scanf("%f", &A);
	printf("Enter second number: ");
	scanf("%f", &B);
	printf("Enter third number: ");
	scanf("%f", &C);
	if (A > B & B > C || A < B & B < C)
	{
		A = A * 2;
		B = B * 2;
		C = C * 2;
		printf("A= %f\n B= %f\n C= %f\n", A, B, C);
	}
	else 
	{
		A = -A;
		B = -B;
		C = -C;
		printf("A= %f\n B= %f\n C= %f\n", A, B, C);
	}
	_getch();
}
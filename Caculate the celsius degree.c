#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float temp(float a)
{
	float m;
	m = (5.0 / 9) * (a - 32);
	return m;
}
int main()
{
	float sum,m;
	printf("Please input the fahrenheit temperature.\n");
	scanf_s("%f",&m);
	sum = temp(m);
	printf("The celsius degree is %.2f", sum); 
}
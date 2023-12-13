#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float i, a1 = 1, a2 = 1, a, k = 0;
	for (i = 1; i <= 20; i++) 
	{
		a = a2;
		a2 = a1 + a2;
		a1 = a;
		k += a2 / a1;
	}
	printf("%.2f", k);
}
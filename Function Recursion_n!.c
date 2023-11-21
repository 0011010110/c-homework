#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fac(int n)
{
	int z;
	if (n == 0)
		z = 1;
	else
	z = n * fac(n - 1);
	return z;
}
int main()
{
	int n;
	printf("Please input a number to caculate it's factorial\n");
	scanf("%d", &n);
	printf("fac=%d", fac(n));
}
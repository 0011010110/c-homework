#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static int prime(int n)
{
	int i,m;
	for (i = 2; i < n; i++)
	{
		m = n % i;
		if (m == 0)
			break;
	}
	return i;
}
int main()
{
	int n, j, k = 0;
	for (n = 100; n < 200; n++)
	{
		j = prime(n);
		if (j >= n)
		{
			printf("Prime number %d\n", n);
			k++;
		}
	}
	printf("The number of prime numbers is %d", k);
}
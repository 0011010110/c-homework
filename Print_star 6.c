#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k,n;
	printf("Please input a integer.\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * (n - i + 1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
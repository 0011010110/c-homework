#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k,n;
	printf("Please input a integer.\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (k =2*( n-i+1); k>= 1; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}   
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, n;
	printf("please input a number.\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
			printf(" ");
		for (j = 1; j <= n; j++)
			printf("*");
		printf("\n");
	}
}

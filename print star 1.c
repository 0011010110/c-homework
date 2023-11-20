#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0, j = 0, n;
	printf("Please input a number\n");
	scanf("%d", &n);
	do
	{
		do
		{
			printf("*");
			j++;
		} while (j < n);
		j = j - n;
		printf("\n");
		i++;
	} while (i < n);
}
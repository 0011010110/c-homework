#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void star(int n)
{
	int i = 1, j = 1;
	while (i <= n)
	{
		while (j <= n - i)
		{
			printf(" ");
			j++;
		}
		j = j - n + i;
		while (j <= 2 * i - 1)
		{
			printf("*");
			j++;
		}
		j = j - 2 * i + 1;
		printf("\n");
		i++;
	}
}
int main()
{
	int n;
	printf("please input a number\n");
	scanf("%d", &n);
	star(n);
	return 0;
}
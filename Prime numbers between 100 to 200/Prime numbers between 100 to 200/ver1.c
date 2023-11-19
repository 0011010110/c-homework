#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void prime()
{
	int i, j, m = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >= i)
		{
			printf("%d", i);
			printf("\n");
			m++;
		}
	}printf("Here are %d Prime numbers", m);
}
int main()
{
	prime();
}
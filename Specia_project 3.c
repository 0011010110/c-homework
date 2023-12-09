#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k=0;
	for (i = 2; i <= 1000; i++)
	{
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				k = k + j;
			}
		}
		if (k == i)
		{
			printf("%5d", i);
		}
		k = 0;
	}
}
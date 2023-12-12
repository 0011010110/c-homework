#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k=1,m=0;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = k * j;
		}
		m = m + k;
		k = 1;
	}
	printf("%d", m);
}
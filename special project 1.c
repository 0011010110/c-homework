#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() //Calculate the number of daffodils.
{
	int i, m,l,n,k,j=0;
	for (i = 100; i < 1000; i++)
	{
		m = i % 10;
		l = i / 10 % 10;
		n = i / 100 % 10;
		k = m * m * m + l * l * l + n * n * n;
		if (k == i)
		{
			j++;
			printf("%5d", i);
		}
	}
}
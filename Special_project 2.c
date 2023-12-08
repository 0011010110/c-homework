#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	int i, j, k,m,n=1;
	for (i = 1; i <= 1000; i++)
	{
		k = i;
		n = 0;
		do
		{
			k /= 10;
			n++;
		} while (k != 0);
		if (i * i % (int)pow(10, n) == i)
			printf("%5d", i);
	}
}
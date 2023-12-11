#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	 int i, j, k=1,m=0;
	for (i = 0; i <= 30; i++)
	{
		for (j = 0; j < i; j++)
		{
			k = k * 2;
		}
		m = m + k;
		k = 1;
	}
	printf("%d", m);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, sum = 0, k = 0,n;
	printf("Please input a integer.\n");
	scanf("%d", &n);
	sum = sum + n;
	k = n;
	for (i = 1; i < n; i++)
	{
		k = 10*k+n;
		sum = sum + k;
	}
	printf("%d", sum);
}
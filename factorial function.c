#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fact(int n)
{
	int i, m=1;
	for (i = 1; i <= n; i++)
		m = m * i;
	return m;
}
int main()
{
	int n,m;
	printf("Please input a integer to caculate factorial.\n");
	scanf("%d", &n);
	m = fact(n);
	printf("n!=%d\n", &m);
	return 0;
}
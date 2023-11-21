#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static int sequence(int n)
{
	int z;
	if (n == 1 || n == 2)
		z = 1;
	else
		z = sequence(n - 1) + sequence(n - 2);
	return z;
}
int main()
{
	int n = 1;
	printf("Please input a number\n");
	scanf("%d", &n);
	printf("The outcome is %d", sequence(n));
}
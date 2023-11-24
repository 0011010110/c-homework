#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, Fi[1000];
	printf("Please input the number of items.(<=1000)\n");
	scanf("%d", &i);
	printf("Fi(1)=1\nFi(2)=1\n");
	Fi[0] = 1;
	Fi[1] = 1;
	for (j = 2; j < i; j++)
	{
		Fi[j] = Fi[j - 1] + Fi[j - 2];
		printf("Fi(%d)=%d\n", j + 1, Fi[j]);
	}

}
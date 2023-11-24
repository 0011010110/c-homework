#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k, m,n=10;
	int arr[10];
	printf("please input 10 numbers for every item in the number sequences.\n");
	for (i = 1; i <= 10; i++)
	{
		printf("please input number [%d]\n", i);
		scanf("%d", &arr[i - 1]);
	}
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
			}
		}
	}
	for (m = 1; m <= 10; m++)
		printf("arr[%d} = %d\n", m, arr[m - 1]);
}
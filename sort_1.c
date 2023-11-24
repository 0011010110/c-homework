#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("The original number sequences is 0,1,4,6,2,5,8,7,9\n ");
	int i, j, m, n=10,k;
	int arr[10] = {0,1,4,6,2,5,8,7,9,3};
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
	for (m = 0; m < 10; m++)
		printf("arr[%d] = %d\n", m, arr[m]);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k, arr[3][3] = {1,2,3,4,5,6,7,8,9}, arr1[3];
	k = arr[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (k < arr[i][j])
				k = arr[i][j];
		}
		arr1[i] = k;
		printf("%5d", arr1[i]);
	}
	printf("\n");
	k = arr[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (k < arr[j ][i])
				k = arr[j][i];
		}
		arr1[i] = k;
		printf("%5d", arr1[i]);
	}
}
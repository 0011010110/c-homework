#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k, row, column;
	int arr[3][3] = { 3,5,6,2,4,7,8,9,2 };
	for (i = 0; i < 3; i++)
	{
		for(j=0;j<2;j++)
		{
			if (arr[i][j] < arr[i][j + 1]);
			{
				k = arr[i][j + 1];
				row = i + 1;
				column = j + 2;
			}
		}
		printf("The max in every row is %d\nin row %d, column %d\n", k, row, column);
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (arr[j][i] < arr[j + 1][i])
			{
				k = arr[j + 1][i];
				row = j + 2;
				column = i + 1;
			}
		}
		printf("The max in every column is %d\nin row %d,  column %d\n", k, row, column);
	}
}
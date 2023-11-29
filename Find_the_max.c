#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k,row,column;
	int arr[4][6] = { {2,3,5,7,4,6},{22,67,34,78,90,25},{54,66,3,21,41,56},{43,67,86,34,54,12} };
	k = arr[0][0];
	printf("The raw arr is :\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%6d",arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (k < arr[i][j + 1])
			{
				k = arr[i][j+1];
				row = i+1;
				column = j+2;
			}

		}
	}
	printf("The max is %d\nin row %d,   column %d", k, row, column);
}
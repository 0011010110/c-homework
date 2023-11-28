#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void  bubble_sort(int arr[],int sz)
{
	int i, j, k;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] >= arr[j + 1])
			{
			    k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
			}
		}
	}
}
int main()
{
	int arr[10] = { 2,6,7,4,5,3,1,9,0,8 },i,sz;
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	printf("reorder:{2,6,7,4,5,3,1,9,0,8}\n");
	for (i = 0; i < 10; i++)
	{
		printf("arr[%d}=%d\n", i, arr[i]);
	}
}
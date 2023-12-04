#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void order(int arr[100])
{
	int i, j, k,m;
	for (i = 0; i < 100; i++)
	{
		k = arr[i];
		for (j = i; j < 100; j++)
		{
			if (k < arr[j])
			{
				k = arr[j];
				m = arr[i];
				arr[i] = arr[j];
				arr[j] = m;
			}
		}
	}
}
int main()
{
	int n,i,arr[100];
	printf("Pleasr input the number of array.(<=100)\n");
	scanf_s("%d", &n);
	printf("Please input a arry.(integers)\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	order(arr);
	printf("The result is \n");
	for (i = 0; i < n; i++)
	{
		printf("%5d", arr[i]);
	}
	return 0;
}
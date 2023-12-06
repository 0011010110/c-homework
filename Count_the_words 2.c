#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main()
{
	int i,m=1;
	char str[100];
	printf("Please input a string.\n");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			m++;
		}
	}
	printf("There are %d words.\n", m);
}
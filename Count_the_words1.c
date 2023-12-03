#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int i,k=1,words=1;
	char str[100];
	printf("Please input a string.\n");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && k == 1)
		{
			k = 0;
			words++;
		}
		else
			k = 1;
	}
	printf("There are %d words.", words);
}
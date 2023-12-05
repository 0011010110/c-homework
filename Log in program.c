#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main()
{
	int i,k=0;
	char Username[100],name[100];
	printf("Please sign up for your user name.\n");
	gets(Username);
	while (k == 0)
	{
		printf("Please input your user name to log in.\n");
		gets(name);
		if (strcmp(Username, name) == 0)
		{
			printf("Welcome!\n");
			k = 1;
		}
		else
		{
			printf("User name is wrong!\n");
			k = 0;
		}
	}
}
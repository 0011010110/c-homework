#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float a;
	int m, i,n;
	printf("Please input the number of the students.\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("Please input one student's grade.\n");
		scanf("%f",&a);
		m = (int)a / 10;
		switch (m)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Grade E\n");
			break;
		case 6:
			printf("Grade D\n");
			break;
		case 7:
			printf("Grade C\n");
			break;
		case 8:
			printf("Grade B\n");
			break;
		case 9:
		case 10:
			printf("Grade A\n");
			break;
		default:
			printf("This Grade is invalid.\n");
			break;
		}
	}
}
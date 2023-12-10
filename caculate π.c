#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main() //Caculate pi to six decimal places.
{
	int i=0;
	double  j = 1;
	while (1.0/(2 * i + 1) >= pow(10, -6))
	{
		i++;
		j = j + 1.0 / (pow(-1, i) *( 2 * i + 1));
	}
	printf("%f",4 * j);
}
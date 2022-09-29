#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int k = 5;
	int num1;
	
	for (; k > 0; k--)
	{
		num1 = k;
		for (; k > 1; k--)
		{
			printf(" ");
		}
		k = num1;
		for (int n = -2*k+11; n > 0; n --)
		{
			printf("*");
		}
		k = num1;
		printf("\n");
	}

	return 0;
}
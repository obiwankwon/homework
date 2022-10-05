#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, k;
	printf("Please enter a number: ");
	scanf("%d", &n);

	for (k = 2; k < n; k++)
	{
		if (n % k == 0)
		{
			printf("It is not a prime number.");
			break;
		}
		else
		{
			printf("It is a prime number.");
			break;
		}
	}
	return 0;
}
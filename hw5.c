#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int bin(int num)
{
	int n;
	if (num <= 1)
	{
		n = num % 2;
		printf("%d", n);
		return 0;
	}
	else
	{
		n = num % 2;
		printf("%d", n);
		return bin(num / 2);
	}
}
int main(void)
{
	int num1;
	printf("Please enter a number: ");
	scanf("%d", &num1);
	printf("%c", bin(num1));
	return 0;
}

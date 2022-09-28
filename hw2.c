#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1;
	printf("Please enter kilomiters:");
	scanf("%lf", &num1);
	double result1 = num1 / 1.609;
	printf("%.1f km is equal to %.1f miles\n", num1, result1);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int calc(int num1, int num2, int num3, int num4, int num5);

int main(void)
{
	int n1, n2, n3, n4, n5;
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	printf("Standard Deviation = %d\n", calc(n1, n2, n3, n4, n5));
	return 0;
}

int calc(int num1, int num2, int num3, int num4, int num5)
{

}

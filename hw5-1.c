#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int bin(int num)
{
	int n;
	if (num < 2) //num이 2보다 작게 입력되었을 때
	{
		n = num % 2;
		printf("%d", n);
		return 0;
	}
	else  //나 머 지
	{
		bin(num / 2);
		n = num % 2;
		printf("%d", n);
	}
}
int main(void)
{
	int num1;
	printf("Please enter a number: ");
	scanf("%d", &num1);
	printf("%d", bin(num1));
	return 0;
}

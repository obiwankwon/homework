#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int bin(int num)
{
	int n;
	if (num < 2) //num�� 2���� �۰� �ԷµǾ��� ��
	{
		n = num % 2;
		printf("%d", n);
		return 0;
	}
	else  //�� �� ��
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

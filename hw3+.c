#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int k;
	int s;
	int d;
	printf("�� �Ƕ�̵��� �� ���� �Է��ϼ���: ");
	scanf("%d", &k);
	d = k;
	for (; k > 0; k--)
	{
		s = k;
		for (; k > 1; k--)
		{
			printf(" ");
		}
		k = s;
		for (int n = -2 * k + (2 * d + 1); n > 0; n--)
		{
			printf("*");
		}
		k = s;
		printf("\n");
	}

}
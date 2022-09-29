#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int k;
	int s;
	int d;
	printf("별 피라미드의 층 수를 입력하세요: ");
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
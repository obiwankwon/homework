#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5], i;
	printf("Please input five integers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nOdd numbers: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf("%d ", arr[i]);
		}

	}
	printf("\nEven numbers: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}

	}
	printf("\n");
	return 0;
}
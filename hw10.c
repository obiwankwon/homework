#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100], temp;
	int len;
	printf("국가의 이름을 입력하세요: ");
	scanf("%s", &str);
	len = strlen(str);
	for (int k = 0; k < len; k++)
	{
		if ('A' <= str[k] && str[k] <= 'Z')
		{
			temp = str[k] + 32;
			str[k] = temp;
		}
		else if ('a' <= str[k] && str[k] <= 'z')
		{
			temp = str[k] - 32;
			str[k] = temp;
		}
		else if (str[k] == ' ')
			str[k] = ' ';
	}
	printf(">Output %s", str);
	return 0;

}
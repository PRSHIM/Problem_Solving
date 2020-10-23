#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int phone;

	scanf("%d", &phone);

	int first = phone / 1000000;
	int second = (phone / 100000) % 10;
	int third = (phone / 10000) % 10;

	if (first == 5)
	{
		if (second == 5)
		{
			if (third == 5)
			{
				printf("YES\n");
			}
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	else
		printf("NO\n");

	return 0;
}
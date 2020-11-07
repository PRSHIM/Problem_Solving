#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int score;
	int stack;
	char a[80];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		stack = 1, score = 0;
		scanf("%s", a);

		for (int j = 0; j < strlen(a); j++)
		{
			if (a[j] == 'O')
			{
				score += stack;
				stack++;
			}
			else if (a[j] == 'X')
			{
				stack = 1;
			}
		}
		printf("%d\n", score);
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T;
	scanf_s("%d", &T);
	int N;
	int sum;


	for (int i = 0; i < T; i++)
	{
		sum = 0;
		scanf_s("%d", &N);
		
		for (int j = 1; j <= N; j++)
		{
			sum += j;
			j++;
		}
		printf("%d\n", sum);
	}

	return 0;
}
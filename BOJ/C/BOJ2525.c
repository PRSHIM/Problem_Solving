#include <stdio.h>

int main()
{
	int A;
	int B;
	int C;

	scanf_s("%d %d", &A, &B);
	scanf_s("%d", &C);

	if ((B + C) >= 60)
	{
		A += (B + C) / 60;
		if (A >= 24)
		{
			A = (A % 24);
		}
		printf("%d %d\n", A, (B + C) % 60);

	}
	else
	{
		printf("%d %d\n", A, B + C);
	}

	return 0;
}
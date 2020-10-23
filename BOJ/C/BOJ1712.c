#include <stdio.h>

int main()
{
	int A;
	int B;
	int C;

	scanf_s("%d %d %d", &A, &B, &C);
	
	int D = C - B;
	
	if (D > 0)
	{
		printf("%d", (A / D) + 1);
	}
	else
		printf("-1\n");

	return 0;
}
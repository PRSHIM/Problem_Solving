#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int max = 0;
	double avg;
	double sum = 0;
	int N;

	scanf("%d", &N);
	double a[N];


	for (int i = 0; i < N; i++)
	{
		scanf("%lf", &a[i]);

		if (a[i] > max)
		{
			max = a[i];
		}
	}

	for (int j = 0; j < N; j++)
	{


		a[j] = (a[j] / max) * 100;

		sum += a[j];
	}

	avg = sum / N;

	printf("%0.2lf", avg);
	return 0;
}
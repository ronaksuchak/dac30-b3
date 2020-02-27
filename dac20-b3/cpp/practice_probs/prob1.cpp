#include <stdio.h>
#include <stdlib.h>

int getMin(int *p, int n)
{

	int min, i;
	min = *p;
	for (i = 0; i < n; i++)
	{
		if (min > p[i])
			min = p[i];
	}
	return min;
}

int getMax(int *p, int n)
{
	int max, i;
	max = *p;
	for (i = 0; i < n; i++)
	{
		if (max < p[i])
			max = p[i];
	}
	return max;
}

int main()
{
	int i, n, *p;
	printf("How many numbers do you want yo enter?");
	scanf("%d", &n);
	p = (int *)malloc((sizeof(int) * n));
	if (p != NULL)
	{
		printf("enter numbers\n");
		for (i = 0; i < n; ++i)
		{
			scanf("%d", (p + i));
		}
	}
	else
	{
		printf("cant assign memory..");
		return 0;
	}

	// find min & max
	printf("\nThe minimum value is %d", getMin(p, n));
	printf("\nThe maximum value is %d", getMax(p, n));
	free(p);
	return 0;
}

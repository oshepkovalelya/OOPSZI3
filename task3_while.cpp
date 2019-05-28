#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print(int n, int k)
{
	int i = 0;
	while (i < n)
	{
		if (i != k)
		{
			printf("%lf ", pow(-1, i)*(i + 1) / (i*i + 2 * i + 1));
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
}
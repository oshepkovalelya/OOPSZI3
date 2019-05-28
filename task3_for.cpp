#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print(int n, int k)
{
	for (int i = 0; i<n; ++i)
		if (i != k)
			printf("%lf ", pow(-1, i)*(i + 1) / (i*i + 2 * i + 1));
		else
			continue;
}
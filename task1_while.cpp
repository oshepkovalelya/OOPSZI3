#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double summ(int n)
{
	double sum = 0;
	int i = 0;
	while (i < n)
	{
		sum = pow(-1, i)*(i + 1) / (i*i + 2 * i + 1);
		i++;
	}
	return sum;
}
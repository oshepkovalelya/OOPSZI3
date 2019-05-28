#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double summ(int n)
{
	double sum = 0;
	int i = 0;
		do
		{
			sum = pow(-1, i)*(i + 1) / (i*i + 2 * i + 1);
			i++;
		} while (i < n);
	return sum;
}
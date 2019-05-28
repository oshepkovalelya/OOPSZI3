#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double summ2(double eps)
{
	double sum = 0;
	for (int i = 0; fabs(pow(-1, i)*(i + 1) / (i*i + 2 * i + 1)) > eps; i++)
	{
		sum = pow(-1, i)*(i + 1) / (i*i + 2 * i + 1);
	}
	return sum;
}
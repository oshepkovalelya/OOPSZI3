#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double summ(int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = pow(-1,i)*(i+1)/(i*i+2*i+1);
	}
	return sum;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	do
	{
		if (fabs(pow(-1, i)*(i + 1) / (i*i + 2 * i + 1)) <= eps)
			break;
		i++;
	} while (true);
	return i;
}
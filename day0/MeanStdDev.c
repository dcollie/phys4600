#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	float mean;
	float sum = 0;
	float sum2 = 0;
	float stdDev;
	float y[] = {3,8,2,9,30,21,23,56,67,35};

	for (int i = 0; i < 10; i++)
	{
		sum = sum + y[i];
	}

	mean = sum / 10;

	for (int j = 0; j < 10 ; j++)
	{
		sum2 = sum2 + pow(y[j] - mean,2);
	}

	stdDev = sqrt(sum2/9);

	printf ("The mean of the 10 numbers is: %f \n", mean);
	printf ("The standard deviation of the 10 numbers is: %f", stdDev);


	return 0;
}
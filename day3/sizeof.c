#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int maxInt = 0;
	char maxChar = 0;
	short maxShort = 0;
	long maxLong = 0;
	long long maxLongLong = 0;
	float maxFloat = 0;
	double maxDouble = 0;
	long double maxLongDouble = 0;

	long long bits;

	int n = sizeof(maxInt);
	bits = pow(2,n*8);
	printf ("\nint has the size of: \n");
	printf ("  bytes: %d \n", n);
	printf ("  bits: %llu \n\n", bits);
	
	n = sizeof(maxChar);
	bits = pow(2,n*8);
	printf ("char has the size of:  \n", bits);
	printf ("  bytes: %d \n", n);
	printf ("  bits: %llu \n\n", bits);
	
	n = sizeof(maxShort);
	bits = pow(2,n*8);
	printf ("short has the size of:  \n", bits);
	printf ("  bytes: %d \n", n);
	printf ("  bits: %llu \n\n", bits);

	n = sizeof(maxLong);
	bits = pow(2,n*8);
	printf ("long has the size of:  \n", bits);
	printf ("  bytes: %d \n", n);
	printf ("  bits: %llu \n\n", bits);

	n = sizeof(maxLongLong);
	bits = pow(2,n*8);
	printf ("long long has the size of:  \n", bits);
	printf ("  bytes: %d \n", n);
	printf ("  bits: %llu \n\n", bits);

	n = sizeof(maxFloat);
	bits = pow(2,n*8);
	printf ("float has the size of:  \n", bits);
	printf ("  bytes: %d \n", n);
	printf ("  bits: %llu \n\n", bits);

	n = sizeof(maxDouble);
	bits = pow(2,n*8);
	printf ("double has the size of: \n", bits);
	printf ("  bytes: %d \n", n);
	printf ("  bits: %llu \n\n", bits);

	n = sizeof(maxLongDouble);
	bits = pow(2,n*8);
	printf ("long double has the size of: \n", bits);
	printf ("  bytes: %d \n", n);
	printf ("  bits: %llu \n\n", bits);

	return 0;

}
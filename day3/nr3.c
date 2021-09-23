#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double polynomial_recursive(double x, int n, double* c)
{
	if (n>0)
	{
		return *c + x * polynomial_recursive(x, --n, ++c);
		
	}
}

double polynomial(double x, int p, double* c)		// p is the order of the poly, but +1 coefficients
{
	double y=c[0];

	for (int i=1; i<= p; i++)
		y = y + c[i] * pow(x,i);

	return y;

}

void diffPolynomial(double* c, double* diff_c, int p)
{
	printf ("\n");
	for (int i=0; i < p; i++)
	{
		diff_c[i] = c[i+1] * (i+1);
		printf("c%d: %f\tdiff_c%d: %f\n",i+1,c[i+1],i,diff_c[i]);
	}
}

/*double cubic(double x, double c3, double c2, double c1, double c0)
{
	return c3 * pow(x,3) + c2 * x * x + c1 * x + c0;
}

double quadratic(double x, double c2, double c1, double c0)
{
	return c2 * x * x + c1 * x + c0;
}
*/

int main(int argc, char ** argv)
{
	double x = 0;
	int n=0;
	int p = 3;

	double tolerance = 1e-9;
	double F, dF, delta;
	double coeff3[4]={-3.0, 1.0, 0, 2.0};
	double coeff2[3];

	diffPolynomial(coeff3,coeff2,p);

	do
	{


		F = polynomial(x,3,coeff3);		//F = cubic(x, 2.0, 0, 1.0, -3.0); 	//2.0 * pow(x,3) + x - 3.0;
		dF = polynomial(x,2,coeff2); 	//dF = quadratic (x, 6.0, 0, 1.0);  //6.0 * x * x + 1.0;
		delta = - F / dF;

		x = x + delta;

		printf ("\n%d: x=%g delta=%g",n,x,delta);
		n++;

	}while(fabs(delta) > tolerance);

	printf ("\nRoot = %g \n\n", x);
	return 0;
	
}
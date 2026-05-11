#include <stdio.h>

double factorial(int n)
{
	int cont;
    double multi=1;
     for (cont=n;cont>=1;cont--)
	{
		multi=multi*cont;
	}
	return multi;
}
main()
{
	double f;
	int n;
	printf("Introduce un valor entero: ");
	scanf("%d",&n);
	f=factorial(n);
	printf("El factorial de %d es %0.0f\n",n,f);
}

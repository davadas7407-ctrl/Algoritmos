#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void llenar(int[], int);
void imprimir(int[], int);
void leer(int[], int);
int busquedaL1(int[], int, int);
void busquedaL2(int[], int, int);

int main()
{
	int size,dato,posicion;
	printf("Num. de elementos ? ");
	scanf("%d",&size);
	int a[size];
	srand(time(NULL));
	llenar(a,size);
	imprimir(a,size);
	printf("\nQue dato buscas ? ");
	scanf("%d",&dato);
	posicion=busquedaL1(a,size,dato);
//	if(posicion!=(-1)){
//	    printf("El %d esta en la posicion %d \n",dato,posicion);
//	}
//	else{
//	    printf("El dato %d no se pudo encontrar en el arreglo \n",dato);
//	}
    busquedaL2(a,size,dato);
    printf("\nChao ctm");
	return 0;
}

void llenar(int x[], int n)
{
	int i;
	for (i=0;i<n;i++)
    {
     	x[i]=  18 + rand()%77;
    }	
}

void leer(int x[], int n)
{
	int i;
	for (i=0;i<n;i++)
    {
     	printf("Ingresa el dato %d :",i);
     	scanf("%d",&x[i]);
    }	
}

void imprimir(int x[],int n)
{
	int i;
	printf("\n");
	for (i=0;i<n;i++)
	{
		printf("%d \t",x[i]);
	}
}

int busquedaL1(int x[], int n, int dato)
{
    for(int i=0;i<n;i++)
    {
        if(dato==x[i])
        {
            return (i);
        }
    }
    return (-1);
}

void busquedaL2(int x[], int n, int dato)
{
    int encontrado=0;
    for(int i=0;i<n;i++)
    {
        if(dato==x[i])
        {
            printf("\nEl %d esta en la posicion %d ",dato,i);
            encontrado=1;
        }
    }
    if(encontrado==0)
    {
        printf("El dato %d no se pudo encontrar en el arreglo \n",dato);
    }
}

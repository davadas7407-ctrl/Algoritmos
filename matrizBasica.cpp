#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void leerMatriz(int [][20], int, int);
void generarMatriz(int [][20], int, int);
void imprimirMatriz(int [][20], int, int);
int sumarMatriz(int [][20],int,int);
int contarNegativos(int[][20],int,int);

main()
{
	int x[20][20];
	int n,m;
	printf("Ingresa las dimensiones de la matriz ( r c ): ");
	scanf("%d %d",&n,&m);
	//leerMatriz(x,n,m);
	srand(time(NULL));
	generarMatriz(x,n,m);
	imprimirMatriz(x,n,m);
	printf("La suma de los elementos es : %d\n",sumarMatriz(x,n,m));   //llamado
	printf("Los valores negativos son: %d",contarNegativos(x,n,m));	
	printf("\nBye");
}

int contarNegativos(int x[][20], int n, int m)
{
	int i,j,negativos=0;
	for(i=0;i<n;i++)    //rows
		for(j=0;j<m;j++)   //columns
		    if(x[i][j]<0)   // is the entry negative?
		    {
		    	negativos++;
			}
	return negativos;	
}

int sumarMatriz(int x[][20], int n, int m)
{
	      int i,j,suma=0;
			for(i=0;i<n;i++)
			{
			   for(j=0;j<m;j++)
			   {
			   	  suma+=x[i][j];
			   	
			   }
			}
	return suma;		
}
void leerMatriz(int x[][20], int n, int m)
{
     int i,j;
for(i=0;i<n;i++)
{
   for(j=0;j<m;j++)
   {
        printf("Da el dato %d,%d : ",i,j);
		scanf("%d",&x[i][j]);
   }
}
}
void generarMatriz(int x[][20], int n, int m)
{
     int i,j;
		for(i=0;i<n;i++)
		{
		   for(j=0;j<m;j++)
		   {
		       x[i][j]=-3+rand()%7;
		   }
		}
}

void imprimirMatriz(int x[][20], int n, int m)
{
     int i,j;
   for(i=0;i<n;i++)
   {
      for(j=0;j<m;j++)
      {
        printf("%d  ",x[i][j]);
      }
      printf("\n");
   }
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generarMatriz(char [][40], int, int);
void imprimirMatriz(char [][40], int, int);

int main()
{
	char x[40][40];
	int n,m;
	printf("Ingresa las dimensiones de la matriz ( r c ): ");
	scanf("%d %d",&n,&m);
	srand(time(NULL));
	generarMatriz(x,n,m);
	imprimirMatriz(x,n,m);
	printf("\nChao ctm!");
}

void generarMatriz(char x[][40], int n, int m)
{
	for(int i=0;i<n;i++){
		  for(int j=0;j<m;j++){
		       x[i][j]=65+rand()%16;
		  }
	}
}

void imprimirMatriz(char x[][40], int n, int m)
{
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        printf("%c ",x[i][j]);
      }
    printf("\n");
   }
}


#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void generarMatriz(int [][20], int, int);
void imprimirMatriz(int [][20], int, int, char[][20], char[][20]);
void totalporMarca(int [][20], int, int,char [][20]);
void PorcentajeTienda(int [][20],int ,int,int[],char [][20]);
void MejorVenta(int,int,int [],char [][20]);


int main()
{
	int n_tiendas=5,m_marcas=8,opcion,totalT[n_tiendas];
	int V[10][20]; 
	char tiendas[][20]={"LIVERPOOL","PALACIO","SAMS","SEARS","SUBURBIA"};
	char marcas[][20]={"GUESS","DIOR","GUCCI","DKNY","VERSACE","BURBERRY","LANCOME","ABERCROMBI"};
	srand(time(NULL));
	generarMatriz(V,n_tiendas,m_marcas);
	printf("VENTAS DE PERFUMERIA");
	do {	
	printf("\n\n1) Impresion de tabla de datos");
	printf("\n2) Total por marca");
	printf("\n3) Porcentaje por tienda");
	printf("\n4) Tienda con las mejores ventas");
	printf("\n5) Salir");
	printf("\nElige la opcion que desees ver ");
	scanf("%d",&opcion);
	printf("\n\n");
	switch (opcion){
		case 1: imprimirMatriz(V,n_tiendas,m_marcas,tiendas,marcas);
			break;
		case 2: totalporMarca(V,n_tiendas,m_marcas,marcas);
			break;
		case 3: PorcentajeTienda(V,n_tiendas,m_marcas,totalT,tiendas);
			break;
		case 4: MejorVenta(n_tiendas,m_marcas,totalT,tiendas);
			break;
		case 5: printf("Gracias por usar el programa\n\n");
			break;
		default : printf("Opcion invalida");
		
	}
	}while(opcion!=5);
}


void imprimirMatriz(int x[][20], int ren, int col, char tiendas[][20], char marcas[][20])
{
     int i,j;
     printf("\t");
     //encabezado de la tabla
     for(i=0;i<col;i++)
     {
     	printf("\t%s",marcas[i]);
	 }
	 printf("\n");
	 
	//tabla 
    for(i=0;i<ren;i++)
    {
    printf("%s\t",tiendas[i]);
    for(j=0;j<col;j++)
    {
        printf("%d\t",x[i][j]);
    }
   printf("\n");
    }
    printf("\n");
}


void generarMatriz(int x[][20], int ren, int col)
{
     int i,j;
for(i=0;i<ren;i++)
{
   for(j=0;j<col;j++)
   {
       x[i][j]=(1+rand()%100)*1000;
   }
}
}


void MejorVenta(int ren,int col,int totalT[],char tiendas[][20])
{
	int i,m,pos;
	m=totalT[0];
	for (i=0;i<ren;i++) {
		if(totalT[i]>m)
		{
			m=totalT[i];
			pos=i;
		}
    }
	printf("%s",tiendas[pos]);
}


void PorcentajeTienda(int V[][20],int ren,int col,int totalT[],char tiendas[][20])
{
	int m,t,suma,suma2;
	float porcentaje;
	printf("PORCENTAJE POR TIENDAS\t\t");
	suma=0;
	for (m=0;m<ren;m++)
	{
		for(t=0;t<col;t++)
		{
			suma=suma+V[m][t];
		}
    
    }
    printf("\nVentas Totales %d",suma);
    
	for (m=0;m<ren;m++)
	{
			suma2=0;
		for(t=0;t<col;t++)
		{
			suma2=suma2+V[m][t];
		}
		totalT[m]=suma2;
		porcentaje=((float)suma2/suma)*100;
		printf("\nEl porcentaje de %s fue %0.2f",tiendas[m],porcentaje);
	}
}


void totalporMarca(int V[][20], int ren, int col,char marcas[][20])
{

	int m,t,suma;
	printf("ANALISIS POR MARCA\n");
	for (m=0;m<col;m++)//6 marcas
	{
		suma=0;
		for(t=0;t<ren;t++)
		{
			suma=suma+V[t][m];
		}
		printf("%s tuvo ventas de %d\n",marcas[m],suma);
	}
}
	


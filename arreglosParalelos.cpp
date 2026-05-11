#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void impresionTabla(char n[][30],char p[][20],int e[],float h[]);
float calcularProm(float [],int);
int personaMayor(char [][30],int [],char [][20],int);
void personasAltas(char [][30],float [], float ,int);

int main()
{
	char nombres[5][30] = {"Ana", "Luis", "Carlos", "Maria", "Jose"};
    char pais[5][20] = {"Mexico", "Chile", "Peru", "Colombia", "Argentina"};
    int edad[5] = {20, 22, 19, 21, 23};
    int n=5;
    float estatura[5] = {170.5, 180.2, 165.0, 175.3, 169.8};
	impresionTabla(nombres, pais, edad, estatura);
	float prom = calcularProm(estatura,n);
	personasAltas(nombres,estatura,prom,n);
	personaMayor(nombres, edad, pais, n);
}

float calcularProm(float estatura[], int n)
{
    float suma=0;
    for(int i=0;i<n;i++)
    {
        suma = suma + estatura[i];
    }
    return suma/n;
}

void personasAltas(char nombres[][30], float estatura[], float prom, int n)
{
    printf("\nPersonas mas altas que el promedio:\n");
    for(int i=0;i<n;i++)
    {
        if(estatura[i] > prom)
        {
            printf("%s mide %.2f cms\n", nombres[i], estatura[i]);
        }
    }
}

void impresionTabla(char n[][30],char p[][20],int e[],float h[])
{
	for (int k=0;k<5;k++)
	{
		printf("%s nacido en %s tiene %d años y mide %0.2f cms\n",n[k],p[k],e[k], h[k]);
	}		
}

int personaMayor(char nombres[][30], int edad[], char pais[][20], int n)
{
    int mayor = edad[0], pos=0;
    for(int i=1;i<n;i++)
    {
        if(edad[i] > mayor)
        {
            mayor = edad[i];
            pos = i;
        }
    }
    printf("\nPersona mayor:\n");
    printf("%s de %s con %d años\n", nombres[pos], pais[pos], edad[pos]);
    return pos;
}

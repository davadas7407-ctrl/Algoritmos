//despliega un dia de la semana
#include <stdio.h>
#include <math.h>

float calcularProm(float [],int);
void ciudadesCalidas (char[][15],float[],int,float);

main()
{
	char cd[][15]={"Acapulco","Amsterdam","Atlanta", " Bogota", "Cd_Mexico", "Hong_Kong",
	          "Londres","Madrid", "Miami", "Milan","Paris", "Rio_de_janeiro", "Roma",
			   "Buenos Aires","Taiwan","Tokio","Sydney","Venecia "};
    float tMax[]={33,17,14,19,21,24,17,16,28,16,15,29,20,23,28,19,30,16};
	int opcion, n=18;
	float prom;
	printf("Bienvenido al programa de ciudades y temperaturas\n");
	do{
			printf("\n1. Promedio temperaturas\n");
			printf("2. Ciudades que rebasan la media\n");
			printf("3. Buscar por ciudad\n");
			printf("4. Salir\n");
			printf("Que desear realizar?");
			scanf("%d",&opcion);
			switch(opcion)
			{
				case 1: prom = calcularProm(tMax,n);
				        printf("El promedio de temperaturas maximas es: %0.2f\n",prom);
				        break;
				case 2: prom = calcularProm(tMax,n);
				        ciudadesCalidas(cd,tMax,n,prom);
				        break; 
				case 3:
				        break;
				case 4:	printf("Gracias por usar UDLAP SW Inc.");     
			        	break;
				default: printf("La opcion no es valida");
						 break;        
			}
			
		} while(opcion!=4);   //llave del do

}

void ciudadesCalidas(char cd[][15], float tMax[],int n,float prom)
{
    printf("\nLas ciudades que rebasan la media son: \n");
	for(int j=0;j<n;j++)
	{
		if(tMax[j]>prom)
		   printf("%-15s  con una temperatura de %0.1f \n",cd[j],tMax[j]);
		
	}
	
	
}

float calcularProm(float tMax[],int n)
{
	int i;
	float suma=0;
	for (i=0;i<n;i++)
	{
		suma = suma +tMax[i];	
	}
	return (suma/n);
}



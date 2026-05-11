#include <stdio.h>
#include <math.h>
int main()
{
	int w;
	float h,imc;
	printf("Da el peso: ");
	scanf("%i",&w);
	printf("Altura : ");
	scanf("%f",&h);
	imc = w/pow(h,2);
	printf("Tu indice es %f \n",imc);
	if (imc<18.5)
	   printf("Peso bajo \n");
	else
 	  if (imc>=18.5 && imc<25)
  	       printf("Peso normal \n");  
      else if(imc>=25 && imc <30)
              printf("Sobrepeso \n");
           else 
		     {
                printf("Obesidad \n"); 
                printf("Corre al nutriologo");
			 }			    
	printf("Come frutas y verduras \n"); 	
	return 0;
}





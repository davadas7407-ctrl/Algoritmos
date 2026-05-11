/* 
Ejemplo de una función que no devuelve
*/
#include<stdio.h>

void figura1(int n)
{
    for (int i=1; i<=n;i++)   //ciclo externo, filas
    {
        for (int k=1;k<=n;k++)   //ciclo interno, columnas
        {
           printf("* ");
        }
        printf("\n");
    }
     printf("\n");
}


void figura2(int n)
{
    for (int i=1; i<=n;i++)   //ciclo externo, filas
    {
        for (int k=1;k<=i;k++)   //ciclo interno, columnas
        {
           printf("* ");
        }
        printf("\n");
    }
     printf("\n");
}
int main() {
  int size;
  printf("De que tamaño quieres figura: ");
  scanf("%d",&size);
  figura1(size);
  figura2(size);
  printf("Have a nice day!");
}
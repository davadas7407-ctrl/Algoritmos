/* 
Ejemplo de una función que devuelve: Factorial
*/
#include<stdio.h>

double calcularFactorial(int n)
{
    double producto = 1;   //acumulador, multiplicatoria
    for (int i=1; i<=n; i++)
    {
        producto *=i;   //producto = producto * i;
    }
     
    return producto;
}


int main() {
    double combinaciones, prob;
    int n,r;
    printf("Cálculo de probabilidad de ganarse el melate\n");
    printf("Ingresa en total de valores (n): ");
    scanf("%i",&n);
     printf("Cuántos eliges (r): ");
    scanf("%i",&r);
    combinaciones = calcularFactorial(n)/(calcularFactorial(r)*calcularFactorial(n-r));
    prob = 2.0/combinaciones;
    //fact = calcularFactorial(num);
    printf("Las combinaciones son %0.0lf \n",combinaciones);
    printf("La probablidad de ganar es  %0.12lf \n",prob);
}
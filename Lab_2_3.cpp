#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a, b , r, total;
    int buenas = 0, malas = 0;
    float score;
    srand(time(NULL));
    do{
        a = rand()%10+1;
        b = rand()%10+1;
        printf("Cuanto es %d por %d : ", a, b);
        scanf("%d",&r);
        if((a*b)==r)
        {
        printf("Correcto!\n");
        buenas++;
        }
        else if(r!=0)
        {
        printf("Incorrecto, la respuesta es %d \n", (a*b));
        malas++;
        }
    }
    while(r!=0);
    score = (float) buenas / (malas + buenas) * 100;
    total = buenas + malas;
    printf("Tu score fue %0.1f\n", score);
    printf("En total fue %d / %d \n", buenas, total);
    printf("\nChao ctm");
    return 0;
}

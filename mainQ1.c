/******************************************************************************

   1. A imobiliária Imóbilis vende apenas terrenos retangulares.
   Faça um algoritmo para ler as dimensões de um terreno 
   e depois exibir a área do terreno

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a=0,b=0,h=0;
    printf("digite o valor da base \n");
    scanf ("%f", &b);
    printf("digite o valor da altura \n");
    scanf("%f",&h);
    a=b*h;
    
    printf("a area do terro e %.2f \n ", a);
    

    return 0;
}
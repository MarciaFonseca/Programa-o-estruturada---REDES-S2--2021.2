/******************************************************************************

Faça um programa que preencha dois vetores, X e Y, com dez 
números inteiros cada. Calcule e mostre a união de X com Y. Isto é, 
um vetor que contenha os valores de X seguidos dos valores de Y.

*******************************************************************************/
#include <stdio.h>
#define TAM 10

int main()
{   
     printf("Olá, vamos somar!!! \n\n\n\n");
    int x [TAM], y [TAM], tam2 = 2*TAM, xy[tam2];
    printf("Digite os primeiros dez numeros:\n");
    for (int i=0; i<TAM; i++){
    scanf("%d", &x[i]);
    
    }
    printf("Digite os ultimpos dez numeros:\n");
    for (int i=0; i<TAM; i++){
    scanf("%d", &y[i]);
    
    }
    for (int i=0; i<TAM; i++){
    xy[i]=x[i];
    xy[i+TAM]=y[i];
    
    }
    
   printf("Resultado: \n");
   for (int i=0; i<tam2; i++){
   printf("%d \n\n", xy[i]);
  
  }
    
    printf("fim\n");

    return 0;
}

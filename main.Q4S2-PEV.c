/******************************************************************************

Faça um programa que preencha um vetor com oito números 
inteiros, calcule e mostre dois vetores result
antes. O primeiro vetor resultante deve conter os números p
ositivos; o segundo deve conter os números negativos. Cada vetor resultan
te vai ter, no máximo, oito posições, que poderão não ser completamente utilizadas.
Bons estudos!

*******************************************************************************/
#include <stdio.h>
#define TAM 8
int main()
{

    printf("\n\n\n Olá, vamos calcular?\n\n\n");
    int vert1 [TAM];
    int vert2 [TAM];
    int vert3 [TAM];
    int i = 0;
    printf("\n\n Digite um vetor de oito numeros:\n\n");
    for(i=0; i<TAM; i++){
    scanf ("%d",&vert1[i]);
    }
    printf("\n\n O valor resultante dos numeros positivos sera:\n\n");
    for(i=0; i<TAM; i++){
    if (vert1 [i]>0){
    vert2[i]=vert1[i];
    
    printf("\n %d",vert2[i]);
    }
    }
    
    printf("\n\n O valor resultante dos numeros negativos sera:\n\n");
    for(i=0; i<TAM; i++){
    if (vert1 [i]<0){
    vert3[i]=vert1[i];
    
    printf("\n %d",vert3[i]);
    }
    }
    
    
    printf(" \n\n\n fim");

    return 0;
}

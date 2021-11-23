/******************************************************************************
3. Faça um algoritmo para calcular quantas ferraduras são necessárias
para equipar todos os cavalos comprados para um haras.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int qferraduras=0, qcavalos=0;
    printf("digite quantos cavalos foram comprados \n");
    scanf("%d",&qcavalos);
    qferraduras=qcavalos*4;
    printf("foram necessárias %d ferraduras para equipar todos os cavalos \n",qferraduras);
    
    return 0;
}

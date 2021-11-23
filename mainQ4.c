/******************************************************************************
   4. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição.
   Escreva um algoritmo que leia o peso do prato montado 
   pelo cliente (em quilos) e imprima o valor a pagar. 
   Assuma que a balança já desconte o peso do prato.

*******************************************************************************/
#include <stdio.h>

int main()
{

    float prato=0, valor=0;
    printf("qual o peso em kg \n");
    scanf("%f",&prato);
    valor=12*prato;
    printf("O valor a ser pago é %.2f reais \n", valor);
    return 0;
}

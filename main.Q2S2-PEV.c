/* Escreva um programa que recebe um vetor de 10 elementos do usuário
e diz qual o maior número e qual o 
menor número do vetor.*/

#include <stdio.h>
#define TAM 10

void main(void)
{
    float vet[TAM], maior_n = 0.0, menor_n = 0.0;
    
    printf("Olá vamos calcular seus numeros \n\n\n");
    printf("Digite dez números para que a média dos valores seja calculada: \n");
    for(int i = 0; i < 10; i++){
        scanf("%f", &vet[i]);
        if(i == 0){
            maior_n = menor_n = vet[i];
        }
        if(vet[i] > maior_n){
            maior_n = vet[i];
        }
        else if(vet[i] < menor_n){
            menor_n = vet[i];
        }
    }
    printf("O maior número e: %0.2f \n", maior_n);
    printf("O menor número e: %0.2f \n\n\n\n", menor_n);
    printf("Fim \n");

}
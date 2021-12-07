/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.
// Escreva um programa que recebe um vetor de 10 elementos do usuário e escreve a média dos valores no vetor.

*******************************************************************************/
#include <stdio.h>
#define TAM 10

int main()
{  
   printf("Olá, vamos calcular! \n");
   float vet [TAM], total = 0; 
   printf(" Digite dez numeros! \n");
   for (int i = 0; i<TAM; i++){
   scanf("%f",&vet[i]);
   
   total = total +vet[i];
   }
   printf("a media dos valores é %0.2f" , total/10);

    return 0;
}

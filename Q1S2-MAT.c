/******************************************************************************

Escreva um programa que recebe uma matriz 
3x4 do usuário e escreve a média dos valores na matriz.

*******************************************************************************/
#include <stdio.h>
#define TAM_L 3 
#define TAM_C 4 

int main()
{   
    printf ("\n Ola, vamos calcular a media da matriz! \n");
    int mat [TAM_L][TAM_C];
    float soma = 0.0;
    printf("\n Digite os valores da Matriz \n");
    for (int i = 0; i < TAM_L; i++) {
        for (int j = 0; j < TAM_C; j++) {
            printf("\n mat[%d][%d]=", i,j);
            scanf("\n %d",&mat [i][j]);
            
            
            soma = soma +mat [i][j];
            
        }
    }
    
    printf("A matriz escolhida foi:\n");
    for (int i = 0; i < TAM_L; i++) {
        for (int j = 0; j < TAM_C; j++) {
            printf("%d \t", mat [i] [j]);
 
        }
        printf("\n");
        
    }
    printf("\n \n A media dos valores da matriz é:%0.2f \n\n ", soma/(TAM_L*TAM_C));
    
    printf("Fim\n\n");

    return 0;
}
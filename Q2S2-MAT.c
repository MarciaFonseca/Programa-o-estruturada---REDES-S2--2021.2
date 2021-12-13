/******************************************************************************

 Escreva um programa que recebe uma matriz 2x3
 do usuário e diga qual o maior número e qual o menor número da matriz.
 
*******************************************************************************/
#include <stdio.h>
#define TAM_L 2
#define TAM_C 3 

int main()
{   
    printf ("\n Ola, vamos calcular o menor e o maior valor da matriz! \n");
    int mat [TAM_L][TAM_C], maior_v, menor_v;

    printf("\n Digite os valores da Matriz \n");
    for (int i = 0; i < TAM_L; i++) {
        for (int j = 0; j < TAM_C; j++) {
            printf("\n mat[%d][%d]=", i,j);
            scanf("\n %d",&mat [i][j]);
            if (i==0){
                maior_v = menor_v = mat [i][j];
            }
           
        }
    }
    
    printf("A matriz escolhida foi:\n");
    for (int i = 0; i < TAM_L; i++) {
        for (int j = 0; j < TAM_C; j++) {
            printf("%d \t", mat [i] [j]);
            
            if(mat [i][j]> maior_v){
               maior_v= mat [i][j]; 
            }
            else if (mat [i][j]< menor_v){
                menor_v= mat [i][j];
            }
         }
        printf("\n");
        
    }
    printf("\n O maior valor vai ser: %d", maior_v);
    printf("\n O menor valor vai ser: %d \n", menor_v);
    printf("\n Fim \n");

    return 0;
}
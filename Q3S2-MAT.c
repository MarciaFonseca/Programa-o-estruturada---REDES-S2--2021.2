/******************************************************************************

 Faça um programa que preencha dois vetores, X e Y, 
 com dez números inteiros cada. Mova os valores desses vetores 
 para uma matriz 2x10 e mostre os valores da matriz.
 
*******************************************************************************/
#include <stdio.h>
#define TAM_L 2
#define TAM_C 10

int main()
{
    printf ("\n Ola, vamos verificar os valoes dos vetores da matriz! \n\n");
    
    int mat [TAM_L][TAM_C], y [TAM_C], x [TAM_C];
    
    printf("Digite os dez valores do primeiro vetor:\n");
    
    for (int i =0; i<TAM_C; i++){
        scanf("%d",& x[i]);
    }
     printf("Digite os dez valores do segundo vetor:\n");
     
    for (int i =0; i<TAM_C; i++){
        scanf("%d",& y[i]);
    }
    
    for (int i= 0; i<TAM_L; i++){
        for (int j= 0; j<TAM_C; j++){
            mat[i][j]=x[j];
        }
    }
    
    for (int i= 1; i<TAM_L; i++){
        for (int j= 0; j<TAM_C; j++){
            mat[i][j]=y[j];  
        }
    }
    
    printf("\n A matriz gerada é: \n");
    
    for (int i= 0; i<TAM_L; i++){
        for (int j= 0; j<TAM_C; j++){
           printf("%d\t", mat [i][j]);
        }
        printf("\n");
    }

          printf("\n\nFim\n");
    return 0;  
}

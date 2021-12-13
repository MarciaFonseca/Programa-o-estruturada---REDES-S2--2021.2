/******************************************************************************

Faça um programa que preencha uma matriz 4x2 com valores inteiros, 
calcule e mostre dois vetores resultantes. O primeiro vetor resultante 
deve conter os números positivos; o segundo deve conter os números negativos. 
Cada vetor resultante vai ter, no máximo, oito posições, 
que poderão não ser completamente utilizadas.

*******************************************************************************/
#include <stdio.h>
#define TAM_L 4
#define TAM_C 2
int main()
{
   int mat [TAM_L][TAM_C], x [TAM_C],y [TAM_C];
   
   printf("\nSeja util e digite a matriz: \n");
   
   for(int i = 0; i < TAM_L; i++){
      for  (int j = 0; j < TAM_C;j++){
          scanf("%d",& mat [i][j]);
      } 
   }
   printf("\nO vetor resultante dos numeros positivos sera:\n");
   
   for(int i = 0; i < TAM_L; i++){
      for  (int j = 0; j < TAM_C;j++){
          if (mat [i][j]>0){
              x[i]= mat [i][j];
              printf("%d\t",x[i]);
          }
      } 
   }
    printf("\nO vetor resultante dos numeros negativos sera:\n");
   
   for(int i = 0; i < TAM_L; i++){
      for  (int j = 0; j < TAM_C;j++){
          if (mat [i][j]<0){
              y[i]= mat [i][j];
              printf("%d\t",y[i]);
          }
      } 
   } 
    printf("\n\nFim\n\n");
    return 0;
}


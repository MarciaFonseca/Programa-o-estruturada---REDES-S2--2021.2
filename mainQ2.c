/******************************************************************************

  2. Faça um programa que calcule e mostre a área de um trapézio.
  Sabe-se que: A = (base maior + base menor) * altura)/2

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a=0,b=0,h=0, B=0;
    printf("digite a base maior \n");
    scanf ("%f", &B);
    printf("digite a base menor \n");
    scanf("%f",&b);
    printf("digite a altura \n");
    scanf("%f", &h);
    a = ((B+b)*h)/2;
    
    printf("a area do trapézio é  %.2f \n ", a);
    

    return 0;
}

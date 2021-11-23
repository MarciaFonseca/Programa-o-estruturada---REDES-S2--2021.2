/******************************************************************************
5. A padaria Hotpão vende certa quantidade de pães franceses e 
uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 
e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com
a venda dos pães e broas (juntos), e quanto deve guardar
numa conta de poupança (10% do total arrecadado). 
Você foi contratado para fazer os cálculos para o dono. 
Com base nestes fatos, faça um algoritmo para ler as quantidades 
de pães e de broas, e depois calcular os dados solicitados.
*******************************************************************************/
#include <stdio.h>

int main()
{

    int qpaes=0, qbroas=0;
    float total=0;
    printf("Quantas broas foram compradas \n");
    scanf("%d",&qbroas);
    printf("Quantos paes foram comprados \n");
    scanf("%d",&qpaes);
    total=(qbroas*1.50)+(qpaes*0.12);
    printf("\n A casa recebeu um total de R$%.2f reais \n",total);
    total=total*0.1;
    printf("\n O valor que deve ser adicionado na poupança é de R$%.2f reais",total);
    
    return 0;
}
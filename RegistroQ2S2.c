#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct conta{
    int numero;
    char nome[30];
    float saldo;
}conta;

void cadastrar(conta *contas, int *ncontas){
    int i, j, k;
    char nome[30];
    char resposta;
    float saldo;
    int numero;
    
    if(ncontas == 15){
        printf("Quantidade maxima de contas atinginda\n");
        return;
    }
    
    printf("\nDigite o número da conta: ");
    scanf("%d", &numero);
    for(j=0; j<*ncontas; j++){
        if(numero == contas[j].numero){
            printf("\nConta já cadastrada!\n");
            return;
        }
    }
    
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]s", nome);
    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo);
    contas[*ncontas].numero = numero;
    strcpy(contas[*ncontas].nome, nome);
    contas[*ncontas].saldo = saldo;
    (*ncontas)++;

    printf("\nDeseja continuar?(S\N):");
    scanf(" %c", &resposta);
    
    if(resposta == 'S'){
    cadastrar(contas, ncontas);
   }
    
}

void visualizar(conta *contas, int ncontas){
    int i, j;
    char nome[30];
    printf("\nDigite o nome do cliente: ");
    scanf("%s", nome);
    for(i=0; i<ncontas; i++){
        if(strcmp(nome, contas[i].nome) == 0){
            printf("Conta: %d\n", contas[i].numero);
            printf("Nome: %s\n", contas[i].nome);
            printf("Saldo: %.2f\n", contas[i].saldo);
        }
    }
}

void excluir(conta *contas, int *ncontas){
    int i, j;
    for(i=0; i<*ncontas; i++){
        if(i == *ncontas-1){
            contas[i].numero = 0;
            strcpy(contas[i].nome, "");
            contas[i].saldo = 0;
            (*ncontas)--;
        }
    }
}

int main(){
    int ncontas = 0;
    printf ("Faça um programa que realize o cadastro de contas bancárias com as seguintes informações:\nnúmero da conta, nome do cliente e saldo. O banco permitirá o cadastramento de apenas quinze contas e não poderá haver mais que uma conta com o mesmo número.\nCrie o menu de opções a seguir:\n1. Cadastrar contas; 2. Visualizar todas as contas de determinado cliente; 3. Excluir ultima conta da lista; 4. Sair.\n\n");
    conta contas[15];
    int opcao;
    do{
        printf("1. Cadastrar contas\n");
        printf("2. Visualizar todas as contas de determinado cliente\n");
        printf("3. Excluir ultima conta da lista\n");
        printf("4. Sair\n");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                cadastrar(contas, &ncontas);
                break;
            case 2:
                visualizar(contas, ncontas);
                break;
            case 3:
                excluir(contas, &ncontas);
                break;
            case 4:
                break;
            default:
                printf("\nOpção inválida!\n\n");
        }
    }while(opcao != 4);
    return 0;
}
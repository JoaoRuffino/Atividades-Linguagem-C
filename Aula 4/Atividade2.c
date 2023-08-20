#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct funcionario{
int ID;
char nome[30];
int idade;
float salario;
}FUNCIONARIO;

FUNCIONARIO coletaDados();
void printTela(FUNCIONARIO pess3[5], int tam);
void reajuste(float *salario2);
void rel_salario_corrigido(FUNCIONARIO pess4[5], int tam);

int main(){
    FUNCIONARIO pess1[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Pessoa %d\n\n", i+1);
        pess1[i] = coletaDados();
        printf("\n\n\n");
    }

    system("cls");

    printTela(pess1, 5);

    for(i = 0; i < 5; i++){
        reajuste(&pess1[i].salario);
    }

    printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");

    rel_salario_corrigido(pess1, 5);

    printf("\n\n\n");

    return 0;
    system("pause");
}

FUNCIONARIO coletaDados(){
    int i = 0;
    FUNCIONARIO pess2;


    //id
    printf("Insira o ID do funcionario: ");
    scanf("%d", &pess2.ID);
    //nome
    printf("Digite o nome da Pessoa: ");
    getchar();
    fgets(pess2.nome, 29, stdin);
    //idade
    printf("Insira a idade do funcionario: ");
    scanf("%d", &pess2.idade);
    //salario
    printf("Insira o salario do funcionario: R$");
    scanf("%f", &pess2.salario);

    return pess2;
}

void printTela(FUNCIONARIO pess3[], int tam){
    int i;
    for(i = 0; i < tam; i++){
    printf("Dados do funcionario %d", i+1);
    printf("\nID: %d", pess3[i].ID);
    printf("\nNome: %s", pess3[i].nome);
    printf("Idade: %d", pess3[i].idade);
    printf("\nSalario: %.2f\n\n", pess3[i].salario);
    }
}

void reajuste(float *salario2){
    *salario2 = *salario2 + (*salario2 * 10/100);
}

void rel_salario_corrigido(FUNCIONARIO pess4[5], int tam){
    int i;
    for(i = 0; i < tam; i++){
    printf("\nReajuste salarial do Funcionario %d", i+1);
    printf("\nNome do Funcionario: %s", pess4[i].nome);
    printf("Novo Salario: %.2f\n\n", pess4[i].salario);
    }

}

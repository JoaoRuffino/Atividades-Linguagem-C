#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct funcionario{
int ID;
char nome[30];
int idade;
float salario;
};

int main(){
    struct funcionario p[5];
    int i = 0;
    for(i = 0; i < 5; i++){
    //id
    printf("Insira o ID do funcionario %d: ", i+1);
    scanf("%d", &p[i].ID);
    //nome
    printf("Insira o Nome do funcionario %d: ", i+1);
    getchar();
    fgets(p[i].nome, 29, stdin);
    //idade
    printf("Insira a idade do funcionario %d: ", i+1);
    scanf("%d", &p[i].idade);
    //salario
    printf("Insira o salario do funcionario %d: R$", i+1);
    scanf("%f", &p[i].salario);

    printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*==*=*=*\n\n");
    }

    for(i = 0; i < 5; i++){
    printf("Dados da pessoa %d", i+1);
    printf("\n\nID: %d", p[i].ID);
    printf("\nNome: %s", p[i].nome);
    printf("Idade: %d", p[i].idade);
    printf("\nSalario: R$%.2f", p[i].salario);
    printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*==*=*=*\n\n");
    }


    printf("\n\n\n");

    return 0;
    system("pause");
}

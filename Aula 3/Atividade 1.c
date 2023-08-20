#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int idade = 0;
    float salario = 0;

    printf("Insira o seu nome: ");
    scanf("%s", nome);


    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("Insira seu Salário: R$");
    scanf("%f", &salario);

    printf("\n\nSeu Nome é: %s", nome);
    printf("\n\nSua idade é: %d", idade);
    printf("\n\nSeu salário é: R$%.2f\n\n", salario);


    system("pause");
    return 0;
    }

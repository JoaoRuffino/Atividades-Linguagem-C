#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;

}FUNCIONARIO;

FUNCIONARIO coletaDados();

int main(){

    FILE *f1;
    FUNCIONARIO pess1[5];
    int i;

    //Pegando dados
    for(i = 0; i < 5; i++){
        printf("Pessoa %d\n\n", i+1);
        pess1[i] = coletaDados();
        printf("\n\n\n");
    }
    f1 = fopen("struct.txt", "wb");

    if (f1 == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    fwrite(pess1, sizeof(FUNCIONARIO), 5, f1);

    fclose(f1);
    printf("\n\n\n");
    system("pause");
    return 0;
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

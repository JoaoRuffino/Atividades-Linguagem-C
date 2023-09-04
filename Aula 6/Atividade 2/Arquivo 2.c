#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;

}FUNCIONARIO;

int main(){
    FILE *f2;
    f2 = fopen("struct.txt", "rb");
    if (f2 == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    FUNCIONARIO c;

    fseek(f2, 2*sizeof(FUNCIONARIO), SEEK_SET);
    fread(&c, sizeof(FUNCIONARIO), 1, f2);
    printf("ID: %d\nNome: %sIdade: %d\nSalario: R$%.2f\n\n", c.ID, c.nome, c.idade, c.salario);


    system("pause");
    return 0;
}

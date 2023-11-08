#include <stdio.h>

typedef struct usuario{
    char nome[50];
    int idade;
    char endereco[50];
}cadastro;

void criaCadastro(int n);
void insereDados(int n);
void imprimeCadastro(int n);

cadastro *p;

int main(){
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Numero invalido!\n\n");
        exit(1);

    };

    criaCadastro(n);
    insereDados(n);
    imprimeCadastro(n);

    free(p);

    printf("\n\n");
    system("pause");
    return 0;
};

void criaCadastro(int n){

    p = (cadastro*) malloc(n * sizeof(cadastro));

};

void insereDados(int n){
    for(int i = 0; i < n; i++){

        printf("\nInsira o nome do usuario %d: ", i + 1);
        scanf(" %[^\n]", p[i].nome);

        printf("Insira a idade do usuario %d: ", i + 1);
        scanf("%d", &p[i].idade);

        printf("Insira o endereco do usuario %d: ", i + 1);
        scanf(" %[^\n]", p[i].endereco);

    }
}

void imprimeCadastro(int n) {
    printf("\n\nRelatorio\n\n");
    for (int i = 0; i < n; i++) {
        printf("Usuario %d", i + 1);
        printf("\nNome: %s\n", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Endereco: %s\n\n", p[i].endereco);
    }
}

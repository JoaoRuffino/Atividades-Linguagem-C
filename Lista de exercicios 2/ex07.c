#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct ALUNO{
    char nomeAluno[50];
    int numMatricula;
    float p1;
    float p2;
    float p3;
    float media;
} aluno;

int nAlunos(int);
void preencheAlunos(aluno*, int);
int verificaMedia(aluno*, int);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n = nAlunos(n);

    aluno vetor[n];
    preencheAlunos(vetor, n);
    int indice = verificaMedia(vetor, n);

    printf("A maior média (%.2f) pertence ao aluno %d, com nome %s", vetor[indice].media, indice+1, vetor[indice].nomeAluno);

    printf("\n\n");
    system("pause");
    return 0;
}

int nAlunos(int n){
    printf("Quantos alunos deseja cadastrar? ");
    scanf(" %d", &n);
    return n;
}

void preencheAlunos(aluno *vetor, int n){
    char nome[50];

    for(int i = 0; i < n; i++){
        printf("\nQual o nome do aluno %d?: ", i+1);
        scanf(" %s", &nome);
        strcpy(vetor[i].nomeAluno, nome);
        printf("Qual o número de matrícula?: ");
        scanf(" %d", &vetor[i].numMatricula);
        printf("Nota da prova 1: ");
        scanf(" %f", &vetor[i].p1);
        printf("Nota da prova 2: ");
        scanf(" %f", &vetor[i].p2);
        printf("Nota da prova 3: ");
        scanf(" %f", &vetor[i].p3);
        vetor[i].media = (vetor[i].p1 + vetor[i].p2 + vetor[i].p3)/3;
    }
}

int verificaMedia(aluno *vetor, int n){
    int indice, mm = vetor[0].media;

    for(int i = 0; i < n; i++){
        if(mm < vetor[i].media){
            mm = vetor[i].media;
            indice = i;
        }
    }

    return indice;
}

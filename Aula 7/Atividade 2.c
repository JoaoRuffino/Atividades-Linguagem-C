#include <stdio.h>
#include <stdlib.h>

int main(){
    int alunos, i;
    float *vet, soma = 0;

    printf("Insira a quantidade de alunos da turma: ");
    scanf("%d", &alunos);

    vet = (float*) malloc(alunos * sizeof(float));

    if(vet == NULL){
        printf("Erro ao alocar memoria!");
        exit(1);
    }

    printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");

    for(i = 0; i < alunos; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &vet[i]);
        soma = soma + vet[i];
    }
    printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");
    for(i = 0; i < alunos; i++){
        printf("Nota do aluno %d: %.2f\n", i + 1, vet[i]);

    }
     printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");
     printf("Media Aritmetica da sala: %.2f", soma / alunos);

     free(vet);


    printf("\n\n\n");
    system("pause");
    return 0;
}

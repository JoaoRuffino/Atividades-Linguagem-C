#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheVET(int*, int);
int* somaVET(int*, int*, int);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Insira um número inteiro n para definir o tamanho dos vetores: ");
    scanf(" %d", &n);

    int *a = (int*) calloc(n, sizeof(int));
    int *b = (int*) calloc(n, sizeof(int));

    if(a == NULL || b == NULL){
        printf("\nErro na alocação de memória.\n");
        exit(1);
    }

    printf("\nPreencha o primeiro vetor:\n");
    preencheVET(a, n);

    printf("\nPreencha o segundo vetor:\n");
    preencheVET(b, n);

    int *c = somaVET(a, b, n);

    printf("\nResultado da soma dos vetores C:\n");
    for (int i = 0; i < n; i++) {
        printf("vet[%d] = %d\n", i+1, c[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}

void preencheVET(int *vet, int n){
    for (int i = 0; i < n; i++){
        printf("vet[%d] = ", i+1);
        scanf(" %d", &vet[i]);
    }
}

int* somaVET(int *vetA, int *vetB, int n) {
    int *c = (int*) calloc(n, sizeof(int));

    if (c == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        c[i] = vetA[i] + vetB[i];
    }

    return c;
}

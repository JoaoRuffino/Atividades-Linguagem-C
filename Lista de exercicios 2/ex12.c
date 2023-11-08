#include <stdio.h>

int main(){

    int n, i;
    float *p;

    printf("Insira o tamanho do vetor desejado: ");
    scanf("%d", &n);

    p = (float*) malloc(n * sizeof(float));
    if(p == NULL){
        printf("Erro na alocação!");
        exit(1);
    }
    for(i = 0; i < n; i++){
        printf("Insira o valor para p[%d]: ", i);
        scanf("%f", &p[i]);
    }

    printf("\n\nVetor formado: \n");
    for(i = 0; i < n; i++){
        printf("%.2f ", p[i]);
    }
    free(p);

    printf("\n\n");
    system("pause");
    return 0;
};

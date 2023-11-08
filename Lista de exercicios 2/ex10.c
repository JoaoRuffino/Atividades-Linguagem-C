#include <stdio.h>

int main(){

    int vet1[5], i, j;

    for(i = 0; i < 5; i++){
    int *p = &vet1[i];
    printf("Insira um valor para a posicao %d: ", i);
    scanf("%d", p);

    *p = (*p) * 2;
    }

    printf("\n\nVetor dobrado: \n");
    for(i = 0; i < 5; i++){
        printf("%d ", vet1[i]);
    }



    printf("\n\n");
    system("pause");
    return 0;
};

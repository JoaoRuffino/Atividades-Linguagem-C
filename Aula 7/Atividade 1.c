#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet = NULL, num, i, valor = 1;
    printf("Insira a quantidade de numeros inteiros: ");
    scanf("%d", &num);
    if(num <= 0){
        printf("Numero inserido nao valido!");
    }
    else{
    vet = (int*) malloc(num * sizeof(int));

        if(vet == NULL){
            printf("Erro ao alocar a memoria!");
        }
        else{
            for(i = 0; i < num; i++){
                vet[i] = valor;
                valor = valor + 2;
            }
        }

        printf("Vetor: ");
        for(i = 0; i < num; i++){
            printf("%d ", vet[i]);
        }
        free(vet);
    }



    printf("\n\n\n");
    system("pause");
    return 0;
}

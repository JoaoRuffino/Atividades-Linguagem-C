#include <stdio.h>
#include <stdlib.h>

int iterativo (int n);
int recursividade(int n);

int main(){

    int n;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &n);

    printf("\n\nPrograma com loop iterativo:\n\n");
    iterativo(n);

    printf("\n\n\nPrograma com recursividade:\n\n");
    recursividade(n);

    printf("\n\n");
    system("pause");
    return 0;
}


int iterativo(int n){
    int i;
    for(i = n; i >= 0; i--){
        printf("\nNumero %2d", i);
    }
}

int recursividade(int n){
    if(n < 0){
        return 0;

    }
    printf("\nNumero %2d", n);
    return recursividade(n-1);
}

#include <stdio.h>
#include <stdlib.h>

int recursividade(int n);
int iterativa(int n);

int main(){

    int n, num1, num2;

    printf("\nPrograma que soma o numero com seus antecessores naturais:\n\n");
    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &n);

    printf("\nEscolha o metodo de calculo: por recursividade (1) ou por iteratividade(2): ");
    scanf("%d", &num1);

    if(num1 == 1){
        num2 = recursividade(n);
        printf("\n\nResultado gerado por recursividade: %d", num2);

    }else
    if(num1 == 2){
        num2 = iterativa(n);
        printf("\n\nResultado gerado por iteratividade: %d", num2);
    } else{
        printf("\nOpcao invalida!");
        }

    printf("\n\n");
    system("pause");
    return 0;
}

int recursividade(int n){
    if(n == 0){
        return 0;

    }
    return (n + recursividade(n - 1));
}

int iterativa(int n){
    int i, soma = 0;
    for(i = n; i >= 0; i--){
        soma = soma + n;
        n--;
    }
    return soma;
}

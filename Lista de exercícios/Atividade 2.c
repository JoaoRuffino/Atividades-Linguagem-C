#include <stdio.h>
#include <stdlib.h>

void pergunta(int *num);
int main(){

    system("color 2");
    int num1, num2, num3, soma = 0;


    pergunta(&num1);
    pergunta(&num2);
    pergunta(&num3);

    soma = num1 + num2 + num3;

    printf("A soma dos numeros sera: %d", soma);
    return 0;
    system("pause");

}


void pergunta(int *num){

    printf("Insira um valor inteiro: ");
    scanf("%d", num);


}

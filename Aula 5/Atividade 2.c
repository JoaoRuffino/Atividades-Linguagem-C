#include <stdio.h>
#include <stdlib.h>

int valor(int j);

int main() {

    system("color 2");

    int a, b;


    a = valor(a);
    b = valor(b);

    printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");

    if(&a > &b){
        printf("\n\n\tEndereco da primeira variavel: %p e maior que o endereco da segunda variavel: %p", &a, &b);
        printf("\n\n\tConteudo da primeira variavel: %d\n\n", a);

    } else if(&b > &a){
        printf("\n\n\tEndereco da segunda variavel: %p e maior que o endereco da primeira varivale: %p", &b, &a);
        printf("\n\n\tConteudo da segunda variavel: %d\n\n", b);

    }else
    printf("\n\n\tOs endereços sao iguais\n\n");

    printf("\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");

    system("pause");
    return 0;
}

int valor(int j){

    printf("\n\tInsira um valor inteiro: ");
    scanf("%d", &j);

    return j;


}

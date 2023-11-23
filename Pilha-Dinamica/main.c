#include <stdio.h>
#include <stdlib.h>
#include "pilhaD.h"

int main()
{
    int x;

    Pilha *pi;

    ALUNO al1, al2, al3, al;

    al1.matricula = 100;
    al1.n1 = 4.7;
    al1.n2 = 8.7;
    al1.n3 = 7.6;

    al2.matricula = 110;
    al2.n1 = 7.3;
    al2.n2 = 9.5;
    al2.n3 = 5.6;

    al1.matricula = 100;
    al1.n1 = 4.7;
    al1.n2 = 8.7;
    al1.n3 = 7.6;

    pi = cria_pilha();


    x = tamanho_pilha(pi);
    printf("\nO tamanho da pilha e: %d", x);

    x = pilha_cheia(pi);
    if(x){
        printf("\nA Pilha esta cheia");
    }else{
        printf("\nA Pilha nao esta cheia");
    }

    x = pilha_vazia(pi);
    if(x){
        printf("\nA Pilha esta vazia");
    }else{
        printf("\nA Pilha nao esta vazia");
    }


    destroi_pilha(pi);
    return 0;
}

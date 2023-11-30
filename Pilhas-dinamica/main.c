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

    x = insere_pilha(pi, al1);
    if(x){
        printf("\nElemento inserido com sucesso");
    }else{
        printf("\nErro, Elemento nao inserido");
    }

    x = insere_pilha(pi, al2);
    if(x){
        printf("\nElemento inserido com sucesso");
    }else{
        printf("\nErro, Elemento nao inserido");
    }

    x = insere_pilha(pi, al3);
    if(x){
        printf("\nElemento inserido com sucesso");
    }else{
        printf("\nErro, Elemento nao inserido");
    }

    x = remove_pilha(pi);
    if(x){
        printf("\nElemento removido com sucesso");
    }else{
        printf("\nErro, Elemento nao removido");
    };

    x = consulta_pilha(pi, &al);
    if(x){
        printf("\nConsulta realizada com sucesso");
        printf("\nMatricula: %d", al.matricula);
        printf("\nNota 1: %2.f", al.n1);
        printf("\nNota 2: %2.f", al.n2);
        printf("\nNota 3: %2.f", al.n3);
    }else{
        printf("\nErro, consulta nao realizada");
    }


    destroi_pilha(pi);
    return 0;
}

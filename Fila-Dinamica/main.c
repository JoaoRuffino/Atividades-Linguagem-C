#include <stdio.h>
#include <stdlib.h>
#include "filaD.h"

int main()
{
    int x;
    Fila *fi;

    ALUNO al1, al2, al3, al;

    al1.matricula = 100;
    al1.n1 = 4.7;
    al1.n2 = 8.7;
    al1.n3 = 7.6;

    fi = cria_fila();

    x = tamanho_fila(fi);
    printf("\nO tamanho da Fila e: %d", x);

    x = insere_fila(fi, al1);
    if(x){
        printf("\nElemento inserido com sucesso");
    }else{
        printf("\nErro, elemento nao inserido");
    }

    x = consulta_fila(fi, &al);
    if(x){
        printf("\nConsulta realziada com sucesso!");
        printf("\nMatricula: %d", al.matricula);
        printf("\nNota 1: %.2f", al.n1);
        printf("\nNota 2: %.2f", al.n2);
        printf("\nNota 3: %.2f", al.n3);
    }else{
        printf("\nErro, consulta nao realizada");
    }

    x = remove_fila(fi);
    if(x){
        printf("\nElemento removido com sucesso");
    }else{
        printf("\nErro, elemento nao removido");
    }



    x = fila_cheia(fi);

    if(x){
        printf("\nA Fila esta cheia!");
    }else{
        printf("\nA Fila nao esta cheia");
    }

    destroi_fila(fi);

    return 0;
}

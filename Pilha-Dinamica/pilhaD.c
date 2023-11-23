#include <stdio.h>
#include <stdlib.h>
#include "pilhaD.h"

struct elemento{
    ALUNO dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Pilha *cria_pilha(){
    Pilha *pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL){
        *pi = NULL;
    }
    return pi;
}

void destroi_pilha(Pilha *pi){
    if(pi != NULL){
        Elem *no;
        while((*pi) != NULL){
            no = *pi;
            *pi = (*pi)->prox;
            free(no);
        }
        free(pi);
    }
}

int tamanho_pilha(Pilha *pi){
    if(pi == NULL){
        return 0;
    }
    int acum = 0;
    Elem *no = *pi;
    while(no != NULL){
        acum++;
        no = no->prox;
    }
    return acum;
}

int pilha_cheia(Pilha *pi){
    return 0;
}

int pilha_vazia(Pilha *pi){
    if(pi == NULL){
        return 1;
    }
    if(*pi == NULL){
        return 1;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"


struct contato{
    char nome[50];
    char email[50];
    char telefone [50];
};

CT *inserirContato(char nome[50], char email[50], char telefone[50]){

    CT *p = (CT*) malloc(sizeof(CT));
    if(p != NULL){
        strncpy(p->nome, nome, sizeof(p->nome) - 1);
        strncpy(p->email, email, sizeof(p->email) - 1);
        strncpy(p->telefone, telefone, sizeof(p->telefone) - 1);
    }
    return p;

};


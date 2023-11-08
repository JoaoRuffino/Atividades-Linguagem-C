#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

int main(){

    int mat = 110, posicao = 1, i = 0;

    struct aluno al1, al2, al3, al4, dados_aluno;

    al1.matricula = 100;
    al1.n1 = 5.3;
    al1.n2 = 6.9;
    al1.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

    al4.matricula = 130;
    al4.n1 = 4.8;
    al4.n2 = 2.3;
    al4.n3 = 9.4;


    int x;
    Lista *li;
    li = cria_lista();


    x = insere_lista_final(li, al2);
    if(x){
        printf("\nAluno inserido com Sucesso");
    }else{
        printf(printf("\nErro ao inserir o aluno"));
    }

    x = insere_lista_inicio(li, al1);
    if(x){
        printf("\nAluno inserido com Sucesso");
    }else{
        printf(printf("\nErro ao inserir o aluno"));
    }

    x = insere_lista_ordenada(li, al3);
    if(x){
        printf("\nAluno inserido com Sucesso");
    }else{
        printf(printf("\nErro ao inserir o aluno"));
    }


    for(i = 0; i < 10; i++){
    dados_aluno = cria_aluno();
    x = insere_lista_ordenada(li, dados_aluno);
    if(x){
        printf("\nAluno inserido com Sucesso");
    }else{
        printf(printf("\nErro ao inserir o aluno"));
    }

    }

    x = consulta_lista_pos(li, posicao, &dados_aluno);
    if(x){
        printf("\n\nConsulta por posicao realizada com sucesso!");
        printf("\n\nMatricula: %d", dados_aluno.matricula);
        printf("\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    }else{
        printf("\nErro ao consultar na posicao especifica");
    }

    x = consulta_lista_mat(li, mat, &dados_aluno);
    if(x){
        printf("\n\nConsulta por matricula realizada com sucesso!");
        printf("\n\nMatricula: %d", dados_aluno.matricula);
        printf("\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    }else{
        printf("\nErro ao consultar na matricula especifica");
    }

    x = tamanho_lista(li);
    printf("\n\nTamanho da lista: %d", x);

    x = lista_cheia(li);
    if(x){
        printf("\n\nLista Cheia");
    }else{
        printf("\n\nLista nao esta cheia");
    };

    x = remove_lista_final(li);
    if(x){
        printf("\nAluno removido no final com Sucesso");
    }else{
        printf(printf("\nErro ao remover aluno do final"));
    }

    x = remove_lista_inicio(li);
    if(x){
        printf("\nAluno removido no inicio com Sucesso");
    }else{
        printf(printf("\nErro ao remover aluno do inicio"));
    }

    x = remove_lista(li, mat);
    if(x){
        printf("\nAluno removido no inicio com Sucesso");
    }else{
        printf(printf("\nErro ao remover aluno do inicio"));
    }

    x = tamanho_lista(li);
    printf("\n\nTamanho da lista: %d", x);

    libera_lista(li);

    printf("\n\n\n\n");

    return 0;
}

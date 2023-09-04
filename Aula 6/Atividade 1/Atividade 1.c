#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    system("color 2");

    char texto[50];
    int i;
    FILE *f1, *f2;



    f1 = fopen("arq1.txt", "w");

    if(f1 == NULL){
        printf("Erro ao abrir o arquivo");
        system("pause");
        exit(1);
    }

    printf("Insira um pequeno texto: ");
    fgets(texto, sizeof(texto), stdin);
    printf("\n\n\n");


    for(i = 0; i < strlen(texto); i++){
        fputc(texto[i], f1);
    }

    fclose(f1);

    f2 = fopen("arqv2.txt", "w");
     if(f2 == NULL){
        printf("Erro ao abrir o arquivo");
        system("pause");
        exit(1);
    }


    for(i = 0; i < strlen(texto); i++){
        fputc(toupper(texto[i]), f2);
    }
    fclose(f2);
    printf("Arquivos gerados com Sucesso!");
    printf("\n\n\n");
    system("pause");
    return 0;

}

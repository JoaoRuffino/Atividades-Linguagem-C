#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


    int main(){

    setlocale(LC_ALL, "Portuguese");

    char nome1[20];
    char nome2[20];
    char nome3[20];
    char esp[2] = " ";

    printf("\nInsira seu primeiro nome: ");
    scanf("%s", nome1);

    printf("\nInsira seu segundo nome: ");
    scanf("%s", nome2);

    printf("\nInsira seu terceiro nome: ");
    scanf("%s", nome3);

    strcat(nome1, esp);
    strcat(nome1, nome2);
    strcat(nome1, esp);
    strcat(nome1, nome3);

    printf("\nSeu nome é: %s\n\n", nome1);

    system("pause");
    return 0;
    }

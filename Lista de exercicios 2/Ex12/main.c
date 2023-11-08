#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"

int main()
{
    int escolha;
    char resp = 'S';

    while (resp == 'S') {
        printf("\nMenu:\n");
        printf("1. Inserir um novo contato\n");
        printf("2. Encontrar um nome na lista de contatos\n");
        printf("3. Remover um contato da lista\n");
        printf("4. Encerrar programa\n");

        scanf("%d", &escolha);

        switch(escolha){

        case 1:

            break;

        case 2:

            break;

        case 3:

            break;

        case 4:
            resp = 'N';
            break;

        default:
            printf("Escolha invalida!");

        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>


    int main(){

    setlocale(LC_ALL, "Portuguese");

    char str[20];
    char consoante;
    char auxi;
    int i;

    int contador = 0;

    printf("Insira uma palavra: ");
    scanf("%s", str);

    printf("\n\nInsira uma consoante: ");
    scanf(" %c", &consoante);


    for (i = 0; i < strlen(str); i++){
    auxi = tolower(str[i]);

    if(auxi == 'a' || auxi == 'e' || auxi =='i' || auxi == 'o' || auxi == 'u'){

        contador++;
        str[i] = consoante;
        }
    }

    printf("\n\nNúmero total de vogais: %d", contador);
    printf("\n\nNova string substituindo as vogais pela consoante inserida: %s\n\n", str);

    system("pause");
    return 0;
    }

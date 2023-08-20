#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>


    int main(){

    char str1[20];
    char str2[20];
    int i;

    printf("Insira a string: ");
    scanf("%s", str1);

    for(i = 0; i < strlen(str1); i++){

    if(str1[i] >= 97 && str1[i] <= 122){
    str2[i] = str1[i] - 32;
    }

    else
    str2[i] = str1[i];

    }

    printf("\n\nPalavra em Maiuscula: %s", str2);

    printf("\n\n\n");

    system("pause");
    return 0;
    }

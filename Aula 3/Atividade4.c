#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>


    int main(){

    char str1[20];
    char str2[20];
    int i;
    int j;

    printf("Insira a primeira string: ");
    scanf("%s", str1);

    printf("Insira a segunda string: ");
    scanf("%s", str2);

    strlwr(str1);
    strlwr(str2);


    if (strstr(str1, str2) != 0){
        printf("\n\nA segunda string esta contida na primeira\n");
    }
    else
    printf("\n\nA segunda string nao esta contida na primeira\n");


    system("pause");
    return 0;
    }

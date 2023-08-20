#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *strupr(char *str);
char *strlwr(char *str);

int main() {

    char str1[50];
    char str2[50];
    int i;

    printf("Insira uma palavra: ");
    scanf("%s", str1);

    // Usando c.type
    for (i = 0; i < strlen(str1); i++) {
        if (isupper(str1[i])) {
            str2[i] = tolower(str1[i]);
        } else if (islower(str1[i])) {
            str2[i] = toupper(str1[i]);
        }
    }

    str2[i] = '\0';  // Adicione o caractere nulo ao final da string

    printf("\n\nPalavra com as caixas trocadas usando c.type: %s", str2);

    // Usando as funções
    for (i = 0; i < strlen(str1); i++) {
        if (str1[i] >= 97 && str1[i] <= 122) {
            str2[i] = toupper(str1[i]);
        } else if (str1[i] >= 65 && str1[i] <= 90) {
            str2[i] = tolower(str1[i]);
        }
    }


    printf("\n\nPalavra com caixas trocadas usando funcoes: %s", str2);

    printf("\n\n\n");

    system("pause");
    return 0;
}

char *strupr(char *str) {
    char *original = str;
    while (*str) {
        *str = toupper(*str);
        str++;
    }
    return original;
}

char *strlwr(char *str) {
    char *original = str;
    while (*str) {
        *str = tolower(*str);
        str++;
    }
    return original;
}

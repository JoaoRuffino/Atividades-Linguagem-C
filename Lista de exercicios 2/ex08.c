#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int recebeN1(int);
int recebeN2(int);
void gerados();

int main(){
    setlocale(LC_ALL, "Portuguese");

    gerados();

    printf("\n\n");
    system("pause");
    return 0;
}

void gerados(){
    int n1 = 1, n2 = 2;

    printf("\nN�MEROS GERADOS\n");

    if(&n1 > &n2){
        printf("O maior endere�o de mem�ria � de %d\nSeu endere�o �: %d", n1, &n1);
    }else {
        printf("O maior endere�o de mem�ria � de %d\nSeu endere�o �: %d", n2, &n2);
    }
}

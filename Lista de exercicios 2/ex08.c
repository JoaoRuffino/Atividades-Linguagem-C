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

    printf("\nNÚMEROS GERADOS\n");

    if(&n1 > &n2){
        printf("O maior endereço de memória é de %d\nSeu endereço é: %d", n1, &n1);
    }else {
        printf("O maior endereço de memória é de %d\nSeu endereço é: %d", n2, &n2);
    }
}

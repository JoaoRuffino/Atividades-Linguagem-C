#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int recebeN1(int);
int recebeN2(int);



int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = recebeN1(n1);
    int n2 = recebeN2(n2);

    if(&n1 > &n2){
        printf("\nO maior endereço de memória é de %d\nSeu endereço é: %d", n1, &n1);
    }else {
        printf("\nO maior endereço de memória é de %d\nSeu endereço é: %d", n2, &n2);
    }

    printf("\n\n");
    system("pause");
    return 0;
}

int recebeN1(int n1){
    printf("N1 = ");
    scanf(" %d", &n1);
    return n1;
}

int recebeN2(int n2){
    printf("N2 = ");
    scanf(" %d", &n2);
    return n2;
}

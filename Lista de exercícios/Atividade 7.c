#include <stdio.h>
#include <stdlib.h>


int main(){

    system("color 2");

    float cotac, real;

    printf("\n\tInsira a cotacao atual do dolar: U$1.00 = R$");
    scanf("%f", &cotac);

    printf("\n\tInsira o valor em reais que deseja converter: R$");
    scanf("%f", &real);

    printf("\n\tR$%.2f equivale a U$%.2f\n\n", real, real / cotac);

    system("pause");
    return 0;

}

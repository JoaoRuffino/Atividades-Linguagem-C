#include <stdio.h>
#include <stdlib.h>


void quadrado(float *numquad);
void pergunta(float *numPergunt);

int main(){

    system("color 2");

    float num1, num2, num3, soma;
    pergunta(&num1);
    pergunta(&num2);
    pergunta(&num3);

    quadrado(&num1);
    quadrado(&num2);
    quadrado(&num3);

    soma = num1 + num2 + num3;
    printf("\n\t=*=*=*=*=*=*=*==*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");

    printf("\n\n\tA soma dos quadrados dos numeros inseridos sera: %.2f\n\n", soma);


    return 0;
    system("pause");

}

void pergunta(float *numPergunt){
    printf("\tInsira um numero real: ");
    scanf("%f", numPergunt);

}



void quadrado(float *numquad){

    *numquad = *numquad * *numquad;

}

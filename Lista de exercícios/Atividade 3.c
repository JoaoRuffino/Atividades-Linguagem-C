#include <stdio.h>
#include <stdlib.h>


void quadrado(float *numquad);
int main(){

    system("color 2");

    float num;
    printf("\tInserir um numero real: ");
    scanf("%f", &num);

    quadrado(&num);
    printf("\n\t=*=*=*=*=*=*=*==*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\n\tO quadrado sera: %.2f\n\n", num);

    return 0;
    system("pause");

}


void quadrado(float *numquad){

    *numquad = *numquad * *numquad;

}

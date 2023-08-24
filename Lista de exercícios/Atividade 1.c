#include <stdio.h>
#include <stdlib.h>


int main(){

    system("color 2");

    int numint = 0;
    float numreal = 0;

    printf("\tInsira um numero inteiro: ");
    scanf("%d", &numint);
    printf("\n\tO numero inteiro digitado foi: %d", numint);


    printf("\n\n\t=*=*=*=*=*=*=*==*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");

    printf("\n\n\n\tInsira um numero real: ");
    scanf("%f", &numreal);
    printf("\n\n\tO numero real digitado foi: %.2f\n\n", numreal);


    return 0;
    system("pause");

}

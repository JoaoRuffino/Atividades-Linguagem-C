#include <stdio.h>
#include <stdlib.h>


void quintaParte(float *num);
int main(){

    system("color 2");

    float num1;

    printf("\tInsira um numero real: ");
    scanf("%f", &num1);

    quintaParte(&num1);

    printf("\n\t=*=*=*=*=*=*=*==*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\n\tA quinta parte sera: %.2f\n\n\n", num1);

    return 0;
    system("pause");

}

void quintaParte(float *num){

    *num = *num / 5;
}

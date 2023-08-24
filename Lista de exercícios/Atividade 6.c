#include <stdio.h>
#include <stdlib.h>

float mediaArit(float num1, float num2, float num3, float num4);
int main(){

    system("color 2");
    float nota[4];
    float media = 0;
    int i;

    for(i = 0; i < 4; i++){
    printf("\n\tInsira a nota %d: ", i + 1);
    scanf("%f", &nota[i]);

    }

    media = mediaArit(nota[0], nota[1], nota[2], nota[3]);

    printf("\n\t=*=*=*=*=*=*=*==*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");

    printf("\n\n\tA media aritmetica das notas sera: %.2f\n\n", media);






    system("pause");
    return 0;

}

float mediaArit(float num1, float num2, float num3, float num4){



    float arit = (num1 + num2 + num3 + num4) / 4;
    return arit;



}



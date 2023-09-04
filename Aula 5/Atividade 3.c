#include <stdio.h>
#include <stdlib.h>


int main() {

    system("color 2");

    int i = 0;
    float vetor1[10];
    double vetor2[10];

    printf("\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");

    printf("\n\n\tEnderecos do vetor tipo float:\n\n");

    for(i = 0; i < 11; i++){

    printf("\tPosicao %2d: %p\n", i, &vetor1[i]);

    }

    printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");


    printf("\n\n\tEnderecos do vetor tipo double:\n\n");

    for(i = 0; i < 11; i++){

    printf("\tPosicao %2d: %p\n", i, &vetor2[i]);

    }
    printf("\n\n\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");


    system("pause");
    return 0;
}



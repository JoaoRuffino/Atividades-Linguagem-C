#include <stdio.h>

int main(){

    int a, *b, **c, ***d;

    printf("Insira um numero inteiro: ");
    scanf("%d", &a);
    b = &a;
    *b = (*b) * 2;
    printf("\n\nO dobro do numero inserido sera: %d", *b);

    c = &b;
    **c = ((**c) / 2) * 3;
    printf("\n\nO triplo do numero inserido sera: %d", **c);

    d = &c;
    ***d = ((***d) / 3)* 4;
    printf("\n\nO quadruplo do numero inserido sera: %d", ***d);

    printf("\n\n");
    system("pause");
    return 0;
};

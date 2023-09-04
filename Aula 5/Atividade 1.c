#include <stdio.h>
#include <stdlib.h>

int valor(int j);
void somaCem(int **k);

int main() {

    system("color 2");

    int a, b, c;
    int *x, *y, *z;


    a = valor(a);
    b = valor(b);
    c = valor(c);

    x = &a;
    y = &b;
    z = &c;

    somaCem(&x);
    somaCem(&y);
    somaCem(&z);

    printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");

    printf("\n\n\tNumero 1 ficara: %d", a);
    printf("\n\n\tNumero 2 ficara: %d", b);
    printf("\n\n\tNumero 3 ficara: %d", c);
    printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");




    system("pause");
    return 0;
}

int valor(int j){

    printf("\n\tInsira um valor inteiro: ");
    scanf("%d", &j);

    return j;


}

void somaCem(int **k){

    **k = **k + 100;

}

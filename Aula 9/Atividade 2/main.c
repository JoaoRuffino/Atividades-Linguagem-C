#include <stdio.h>
#include <stdlib.h>
#include "PTcart.h"

int main(){

    float d = 0, retornaX, retornaY;
    PTcart *p = NULL, *q = NULL;

    p = criaPTcart(10, 21);
    q = criaPTcart(7, 25);
    d = distanciaPTcart(p, q);
    printf("Distancia entre os pontos cartesianos: %f\n\n", d);

    atribuiPTcart(q, 15, -2);
    d = distanciaPTcart(p, q);
    printf("Nova distancia entre os pontos cartesianos: %f\n\n", d);

    acessaPTcart(p, &retornaX, &retornaY);
    printf("Valores armazenados em p: X = %.2f e Y = %.2f\n\n", retornaX, retornaY);

    acessaPTcart(q, &retornaX, &retornaY);
    printf("Valores armazenados em q: X = %.2f e Y = %.2f\n\n", retornaX, retornaY);

    liberaPTcart(p);
    liberaPTcart(q);

    system("pause");
    return 0;
}

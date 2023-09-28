#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

struct Calculadora {
    float resultado;
};

Calculadora* criarCalculadora() {
    Calculadora *calc = (Calculadora*)malloc(sizeof(Calculadora));
    if (calc == NULL) {
        printf("Erro ao alocar memória para a calculadora\n");
        exit(1);
    }
    calc->resultado = 0.0;
    return calc;
}

void destruirCalculadora(Calculadora *calc) {
    free(calc);
}

void criaValores(float *x, float *y, Calculadora *calc) {
    printf("Digite o primeiro numero: ");
    scanf("%f", x);

    printf("Digite o segundo numero: ");
    scanf("%f", y);
}

float somar(float x, float y, Calculadora *calc) {
    calc->resultado = x + y;
    return calc->resultado;
}

float subtrair(float x, float y, Calculadora *calc) {
    calc->resultado = x - y;
    return calc->resultado;
}

float multiplicar(float x, float y, Calculadora *calc) {
    calc->resultado = x * y;
    return calc->resultado;
}

float dividir(float x, float y, Calculadora *calc) {
    if (y != 0) {
        calc->resultado = x / y;
    } else {
        printf("Não pode dividir por zero\n");
    }
    return calc->resultado;
}

float obterResultado(Calculadora *calc) {
    return calc->resultado;
}

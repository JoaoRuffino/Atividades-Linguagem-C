#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main() {
    int escolha;
    char resp = 'S';  // Alterei para char para comparar com 'S' ou 'N'
    float a, b;
    Calculadora *calc;  // Ponteiro para a calculadora

    // Cria a calculadora
    calc = criarCalculadora();

    while (resp == 'S') {
        criaValores(&a, &b, calc);

        printf("Menu:\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Mostrar resultado anterior\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                somar(a, b, calc);
                printf("Resultado: %.2f\n", obterResultado(calc));
                break;

            case 2:
                subtrair(a, b, calc);
                printf("Resultado: %.2f\n", obterResultado(calc));
                break;

            case 3:
                multiplicar(a, b, calc);
                printf("Resultado: %.2f\n", obterResultado(calc));
                break;

            case 4:
                dividir(a, b, calc);
                printf("Resultado: %.2f\n", obterResultado(calc));
                break;

            case 5:
                printf("Resultado anterior: %.2f\n", obterResultado(calc));
                break;
            default:
                printf("Opção inválida\n");
        }

        printf("Deseja realizar um novo cálculo? (S/N): ");
        scanf(" %c", &resp);
    }

    destruirCalculadora(calc);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"

int main()
{
    float numeroHoras, salarioHora, numeroFilhos, valorPorFilho, taxaIR;
    float salarioBruto, salarioFamilia, vantagens, INSS, IRPF, deducoes;

    printf("Insira o numero de horas: ");
    scanf("%f", &numeroHoras);

    printf("Insira o salario por hora: ");
    scanf("%f", &salarioHora);

    printf("Insira o numero de filhos: ");
    scanf("%f", &numeroFilhos);

    printf("Insira o valor por filho: ");
    scanf("%f", &valorPorFilho);

    Funvantagens(numeroHoras, salarioHora, numeroFilhos, valorPorFilho, &salarioBruto, &salarioFamilia, &vantagens);

    printf("\nSalario bruto: %.2f\n", salarioBruto);
    printf("Salario da Familia: %.2f\n", salarioFamilia);
    printf("Vantagens: %.2f\n", vantagens);



    /////////////////////////////////////////////////////////////

    printf("\n\nInsira a taxa IR: ");
    scanf("%f", &taxaIR);

    Fundeducoes(taxaIR, &INSS, &IRPF, &deducoes, salarioBruto);
    printf("INSS: %.2f\n", INSS);
    printf("IRPF: %.2f\n", IRPF);
    printf("Deducoes:: %.2f\n", deducoes);

    system("pause");
    return 0;
}

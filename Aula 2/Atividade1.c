#include <stdio.h>
#include <stdlib.h>

    float salarioBruto, salarioFamilia, vantagens, INSS, IRPF, taxaIR, deducoes;

    void Funvantagens(float x, float y, int z, float w);
    void Fundeducoes(float t);

    int main(){

    float numeroHoras, salarioHora, valorPorFilho, taxaIR;
    int numeroFilhos;

    printf("Insira o numero de horas: ");
    scanf("%f", &numeroHoras);

    printf("Insira o salario por hora: ");
    scanf("%f", &salarioHora);

    printf("Insira o numero de filhos: ");
    scanf("%d", &numeroFilhos);

    printf("Insira o valor por filho: ");
    scanf("%f", &valorPorFilho);

    Funvantagens(numeroHoras, salarioHora, numeroFilhos, valorPorFilho);

    printf("\nSalario bruto: %.2f\n", salarioBruto);
    printf("Salario da Familia: %.2f\n", salarioFamilia);
    printf("Vantagens: %.2f\n", vantagens);

    /////////////////////////////////////////////////////////////

    printf("\n\nInsira a taxa IR: ");
    scanf("%f", &taxaIR);

    Fundeducoes(taxaIR);
    printf("INSS: %.2f\n", INSS);
    printf("IRPF: %.2f\n", IRPF);
    printf("Deducoes:: %.2f\n", deducoes);

    system("pause");
    return 0;
    }

    void Funvantagens(float x, float y, int z, float w){
        salarioBruto = x * y;
        salarioFamilia = z * w;
        vantagens = salarioBruto + salarioFamilia;

    }

    void Fundeducoes(float t){
        INSS = salarioBruto * 0.08;
        IRPF = salarioBruto * t;
        deducoes = INSS + IRPF;
    }

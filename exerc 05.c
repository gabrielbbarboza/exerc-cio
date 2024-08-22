#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste;

    printf("Salario atual: ");
    scanf("%f", &salarioAtual);

    printf("Percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    printf("Novo salario: %.2f\n", salarioAtual * (1 + percentualReajuste / 100));

    return 0;
}


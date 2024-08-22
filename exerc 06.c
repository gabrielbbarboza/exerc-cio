#include <stdio.h>

int main() {
    float custoFabrica;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    printf("O custo final ao consumidor e: %.2f\n", custoFabrica * 1.28 * 1.45);

    return 0;
}


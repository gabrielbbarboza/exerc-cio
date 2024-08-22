#include <stdio.h>

int main() {
    int numeroCarros;
    float valorTotalVendas, salarioFixo, comissaoPorCarro;

    printf("Numero de carros vendidos: ");
    scanf("%d", &numeroCarros);

    printf("Valor total das vendas: ");
    scanf("%f", &valorTotalVendas);

    printf("Salario fixo do vendedor: ");
    scanf("%f", &salarioFixo);

    printf("Comissao por carro vendido: ");
    scanf("%f", &comissaoPorCarro);

    printf("Salario final do vendedor: %.2f\n",
        salarioFixo + (comissaoPorCarro * numeroCarros) + (valorTotalVendas * 0.05)
    );

    return 0;
}


#include <stdio.h>

int lerNumero() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int numero = lerNumero();

    printf("O antecessor de %d e %d\n", numero, numero - 1);

    return 0;
}


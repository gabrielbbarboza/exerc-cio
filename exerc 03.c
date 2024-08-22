#include <stdio.h>


// Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mes com 30 dias.

int main() {
    int anos, meses, dias, idadeEmDias;

    // Ler a idade em anos, meses e dias
    printf("Anos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    // Calcular a idade total em dias
    idadeEmDias = (anos * 365) + (meses * 30) + dias;

    // Escrever a idade total em dias
    printf("Idade em dias: %d\n", idadeEmDias);

    return 0;
}


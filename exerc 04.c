#include <stdio.h>

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;

    printf("Total de eleitores: ");
    scanf("%d", &totalEleitores);

    printf("Votos brancos: ");
    scanf("%d", &votosBrancos);

    printf("Votos nulos: ");
    scanf("%d", &votosNulos);

    printf("Votos validos: ");
    scanf("%d", &votosValidos);

    printf("Percentual de votos brancos: %.2f%%\n", (votosBrancos / (float)totalEleitores) * 100);
    printf("Percentual de votos nulos: %.2f%%\n", (votosNulos / (float)totalEleitores) * 100);
    printf("Percentual de votos válidos: %.2f%%\n", (votosValidos / (float)totalEleitores) * 100);

    return 0;
}


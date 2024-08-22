#include <stdio.h>

int main() {
    float nota1, nota2, nota3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("A media final do aluno e: %.2f\n", 
           (2 * nota1 + 3 * nota2 + 5 * nota3) / 10);

    return 0;
}


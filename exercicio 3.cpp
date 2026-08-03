#include <stdio.h>

int main() {
    float notas[3];
    float soma = 0.0;

    for (int i = 0; i < 3; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / 3.0;
    printf("\nA média das notas é: %.2f\n", media);

    return 0;
}
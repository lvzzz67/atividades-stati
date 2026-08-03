#include <stdio.h>

int main() {
    int vetor[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o %dº número (índice %d): ", i + 1, i);
        scanf("%d", &vetor[i]);
    }

    int soma = vetor[1] + vetor[3] + vetor[5];
    printf("\nA soma dos elementos nas posições 1, 3 e 5 é: %d\n", soma);

    return 0;
}
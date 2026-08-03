#include <stdio.h>

int main() {
    int vetor[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("\nA soma de todos os elementos é: %d\n", soma);

    return 0;
}
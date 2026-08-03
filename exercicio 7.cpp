#include <stdio.h>

int main() {
    int vetor[4];
    int busca, encontrado = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um número para buscar no vetor: ");
    scanf("%d", &busca);

    for (int i = 0; i < 4; i++) {
        if (vetor[i] == busca) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O número %d existe no vetor.\n", busca);
    } else {
        printf("O número %d NÃO existe no vetor.\n", busca);
    }

    return 0;
}
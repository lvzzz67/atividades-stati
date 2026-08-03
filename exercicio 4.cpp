#include <stdio.h>

int main() {
    int vetor[4];
    int maior;

    for (int i = 0; i < 4; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if (i == 0 || vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("\nO maior valor digitado é: %d\n", maior);

    return 0;
}
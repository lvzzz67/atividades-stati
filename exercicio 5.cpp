#include <stdio.h>

int main() {
    int vetor[4];
    int pares = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("\nQuantidade de números pares: %d\n", pares);

    return 0;
}

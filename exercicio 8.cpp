#include <stdio.h>

int main() {
    int pontos[5];
    int maior, menor, soma = 0, acima_70 = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a pontuação do jogador %d (0 a 100): ", i + 1);
        scanf("%d", &pontos[i]);

        soma += pontos[i];

        if (i == 0) {
            maior = pontos[i];
            menor = pontos[i];
        } else {
            if (pontos[i] > maior) maior = pontos[i];
            if (pontos[i] < menor) menor = pontos[i];
        }

        if (pontos[i] > 70) {
            acima_70++;
        }
    }

    printf("\n--- RESULTADOS DO RANKING ---\n");
    printf("Maior pontuação: %d\n", maior);
    printf("Menor pontuação: %d\n", menor);
    printf("Média: %.2f\n", (float)soma / 5.0);
    printf("Jogadores com mais de 70 pontos: %d\n", acima_70);

    return 0;
}
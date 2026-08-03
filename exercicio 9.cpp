#include <stdio.h>

int main() {
    int gols[5];
    int total = 0, partida_mais_gols = 1, maior_gols = 0, partidas_dois_mais = 0;

    for (int i = 0; i < 5; i++) {
        printf("Jogo %d: ", i + 1);
        scanf("%d", &gols[i]);

        total += gols[i];

        if (i == 0 || gols[i] > maior_gols) {
            maior_gols = gols[i];
            partida_mais_gols = i + 1;
        }

        if (gols[i] >= 2) {
            partidas_dois_mais++;
        }
    }

    printf("\n--- ESTATÍSTICAS DA COPA ---\n");
    printf("Total de gols: %d\n", total);
    printf("Média de gols: %.2f\n", (float)total / 5.0);
    printf("Partida com mais gols: Jogo %d (%d gols)\n", partida_mais_gols, maior_gols);
    printf("Partidas com 2 ou mais gols: %d\n", partidas_dois_mais);

    return 0;
}
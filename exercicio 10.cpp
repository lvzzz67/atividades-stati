#include <stdio.h>

int main() {
    float temp[7];
    float soma = 0.0, maior, menor;
    int acima_30 = 0;

    for (int i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);

        soma += temp[i];

        if (i == 0) {
            maior = temp[i];
            menor = temp[i];
        } else {
            if (temp[i] > maior) maior = temp[i];
            if (temp[i] < menor) menor = temp[i];
        }

        if (temp[i] > 30.0) {
            acima_30++;
        }
    }

    printf("\nSAÍDA ESPERADA:\n");
    printf("Temperaturas:\n");
    for (int i = 0; i < 7; i++) {
        printf("%.1f\n", temp[i]);
    }

    printf("\nMédia: %.1f °C\n", soma / 7.0);
    printf("Maior: %.1f °C\n", maior);
    printf("Menor: %.1f °C\n", menor);
    printf("Dias acima de 30°C: %d\n", acima_30);

    return 0;
}
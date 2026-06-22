#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float faturamento = 0.0;

    do {
        printf("\n===== CANTINA =====\n");
        printf("1 - Vender Salgado (R$ 8)\n");
        printf("2 - Vender Refrigerante (R$ 6)\n");
        printf("3 - Consultar Faturamento\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                faturamento += 8;
                printf("Salgado vendido!\n");
                break;

            case 2:
                faturamento += 6;
                printf("Refrigerante vendido!\n");
                break;

            case 3:
                printf("Faturamento total: R$ %.2f\n", faturamento);
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while(opcao != 4);

    return 0;
}
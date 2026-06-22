#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    int tanque = 50;
    int litros;

    do {
        printf("\n===== CARRO =====\n");
        printf("1 - Ver Combustivel\n");
        printf("2 - Abastecer\n");
        printf("3 - Viajar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Combustivel atual: %d litros\n", tanque);
                break;

            case 2:
                printf("Quantos litros abastecer? ");
                scanf("%d", &litros);

                if (tanque + litros <= 50) {
                    tanque += litros;
                    printf("Abastecido com sucesso!\n");
                } else {
                    printf("Erro: tanque maximo e 50 litros.\n");
                }
                break;

            case 3:
                printf("Quantos litros serao consumidos? ");
                scanf("%d", &litros);

                if (litros <= tanque) {
                    tanque -= litros;
                    printf("Viagem realizada!\n");
                } else {
                    printf("Erro: combustivel insuficiente.\n");
                }
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
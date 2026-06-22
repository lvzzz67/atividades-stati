#include <stdio.h>
#include <stdlib.h>

int main() {
    int estoque = 100;
    int opcao, qtd;

    do {
        printf("\n===== ESTOQUE =====\n");
        printf("1 - Consultar Estoque\n");
        printf("2 - Entrada de Produtos\n");
        printf("3 - Saida de Produtos\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Estoque atual: %d unidades\n", estoque);
                break;

            case 2:
                printf("Quantidade de entrada: ");
                scanf("%d", &qtd);
                estoque += qtd;
                printf("Entrada registrada.\n");
                break;

            case 3:
                printf("Quantidade de saida: ");
                scanf("%d", &qtd);

                if (qtd <= estoque) {
                    estoque -= qtd;
                    printf("Saida registrada.\n");
                } else {
                    printf("Erro: estoque insuficiente.\n");
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
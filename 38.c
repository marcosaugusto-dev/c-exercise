#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Erro: nao e possivel dividir por zero!\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;

            case 5:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}

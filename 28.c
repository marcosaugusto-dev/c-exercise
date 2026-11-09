
#include <stdio.h>

int main() {

    float numero1, numero2, resultado;
    char operador;

    printf("Digite um numero: ");
    scanf("%f", &numero1);

    printf("Digite outro numero: ");
    scanf("%f", &numero2);

    printf("Digite o operador (+, -, * ou /): ");
    scanf(" %c", &operador);

    switch (operador) {

        case '+':
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: nao e possivel dividir por zero!\n");
            }
            break;

        default:
            printf("Operador invalido!\n");
    }

    return 0;
}
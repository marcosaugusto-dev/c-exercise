#include <stdio.h>

int main() {
    int secreto = 37;
    int chute;
    int tentativas = 0;

    printf("===== JOGO DE ADIVINHACAO =====\n");
    printf("Tente descobrir o numero secreto!\n");
    printf("Voce tem 7 tentativas.\n");

    while (tentativas < 7) {
        printf("\nDigite seu chute: ");
        scanf("%d", &chute);

        tentativas++;

        if (chute == secreto) {
            printf("Parabens! Voce acertou!\n");
            printf("Tentativas: %d\n", tentativas);
            return 0;
        } 
        else if (chute < secreto) {
            printf("O numero secreto e maior!\n");
        } 
        else {
            printf("O numero secreto e menor!\n");
        }

        printf("Tentativas restantes: %d\n", 7 - tentativas);
    }

    printf("\nVoce perdeu!\n");
    printf("O numero secreto era %d.\n", secreto);

    return 0;
}
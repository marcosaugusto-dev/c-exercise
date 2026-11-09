#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "computador";
    char progresso[] = "__________";
    char letra;

    int erros = 0;
    int acertos = 0;
    int tamanho = strlen(palavra);

    printf("===== JOGO DA FORCA =====\n");

    while (erros < 6 && acertos < tamanho) {

        printf("\nPalavra: ");

        for (int i = 0; i < tamanho; i++) {
            printf("%c ", progresso[i]);
        }

        printf("\nErros: %d/6\n", erros);

        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        int encontrou = 0;

        for (int i = 0; i < tamanho; i++) {

            if (palavra[i] == letra && progresso[i] == '_') {
                progresso[i] = letra;
                acertos++;
                encontrou = 1;
            }
        }

        if (encontrou == 1) {
            printf("Acertou!\n");
        } else {
            erros++;
            printf("Errou!\n");
        }
    }

    if (acertos == tamanho) {
        printf("\nPARABENS! Voce descobriu a palavra!\n");
        printf("A palavra era: %s\n", palavra);
    } else {
        printf("\nGAME OVER!\n");
        printf("A palavra era: %s\n", palavra);
    }

    return 0;
}
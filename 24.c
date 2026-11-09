#include <stdio.h>

int main(){

    char palavra[25], frase[50];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    getchar();

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);

    printf("\nPalavra: %s\n", palavra);
    printf("Frase: %s", frase);

    return 0;
}
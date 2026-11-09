#include <stdio.h>

int main() {
    int alunos;
    int aprovados = 0;
    int reprovados = 0;
    
    float nota1, nota2, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    for (int i = 1; i <= alunos; i++) {
        printf("\nAluno %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        printf("Media: %.2f\n", media);

        if (media >= 6) {
            printf("Aprovado!\n");
            aprovados++;
        } else {
            printf("Reprovado!\n");
            reprovados++;
        }
    }

    printf("\n===== RESULTADO FINAL =====\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}
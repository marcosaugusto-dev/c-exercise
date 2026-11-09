
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int menu, saque = 0, saldo = 1000;

    while (true)
    {
        printf("\nMENU\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Sacar dinheiro\n");
        printf("3 - Sair do programa\n");

        printf("Digite o numero do menu: ");
        scanf("%i", &menu);

        switch (menu)
        {
            case 1:
                printf("SALDO: %i\n", saldo);
                break;

            case 2:
                printf("Digite quanto deseja sacar: ");
                scanf("%i", &saque);

                if (saque <= saldo && saque > 0)
                {
                    saldo = saldo - saque;
                }
                else
                {
                    printf("Voce nao tem saldo suficiente\n");
                }
                break;

            case 3:
                printf("SAIR DO PROGRAMA\n");
                return 0;
        }
    }
}

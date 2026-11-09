#include <stdio.h>

int main(){
    
    int i, n1, n2, resul = 0;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n1);

    for (i = 0; i < n1; i++)
    {
        printf("Digite o numero:");
        scanf("%d", &n2);
        if (n2 % 2 == 0)
        {
            resul = resul + n2;
        }
    }

    printf("SOMA: %d", resul);
    
    return 0;
}
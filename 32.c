#include <stdio.h>

int main(){
    
    int i, n, resul;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i < 11; i++)
    {
        resul = n * i;
        printf("%d X %d = %d\n", n, i, resul);
    }

    return 0;
}
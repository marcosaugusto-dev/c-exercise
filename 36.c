#include <stdio.h>

int main(){
    
    float n1;
    
    printf("Digite um numero: ");
    scanf("%f", &n1);

    while (n1 < 0 || n1 > 100)
    {
        printf("Nota invalida. Digite novamente: ");
        scanf("%f", &n1);
    }
    
    printf("Nmr valido: %f", n1);
    
    return 0;
}
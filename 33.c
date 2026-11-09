#include <stdio.h>
#define senha 1234

int main(){
    
    int i, n;
    
    do
    {
        printf("Digite sua senha: ");
        scanf("%d", &n);
    } while (n != senha);
        
    printf("Acesso liberado");

    return 0;
}
#include<stdio.h>

int main(){

    int A, B, C; 

    printf("Digite um numero: ");
    scanf("%d", &A);

    printf("Digite outro numero: ");
    scanf("%d", &B);


    printf("Antes da troca: A = %d, B = %d\n", A, B);

   
    C = A;
    A = B;
    B = C;

    printf("Depois da troca: A = %d, B = %d\n", A, B);

    return 0;
}
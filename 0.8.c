#include<stdio.h>

int main(){

int A,B,inteiro,resto;


printf("Digite um numero: ");
scanf("%d",&A);

printf("Digite outro numero: ");
scanf("%d",&B);


resto = A % B;
inteiro = A / B;


printf("RESTO: %d ",resto);
printf("INTEIRO: %d ",inteiro);

    return 0;
}
#include<stdio.h>
int main (){

int numero1,numero2;

printf("Digite um numero: ");
scanf("%i",&numero1);

printf("Digite outro numero: ");
scanf("%i",&numero2);


if (numero1 > numero2){
  printf("O numero %i e maior",numero1);
}
else if (numero2 > numero1){
    printf("O numero %i e maior",numero2);
}
else{
    printf("Os numeros sao iguais");
}

return 0;


}
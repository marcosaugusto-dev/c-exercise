#include<stdio.h>
int main(){

int numero1;

printf("Digite um numero: ");
scanf("%i",&numero1);

if(numero1 % 2 == 0){
 printf("O numero %i e par",numero1);
}
else{
 printf("O numero %i e impar",numero1);
}

return 0;

}
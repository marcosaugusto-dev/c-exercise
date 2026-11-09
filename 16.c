#include<stdio.h>
int main(){

int numero1;

printf("Digite um numero: ");
scanf("%i",&numero1);

if (numero1 > 0){
 printf("O numero %i e positivo ",numero1);
}
else if (numero1 < 0){
 printf("O numero %i e negativo",numero1);
}
else{
 printf("Este numero e igual a zero");
}

return 0;

}
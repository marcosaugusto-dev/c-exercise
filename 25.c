#include<stdio.h>
#define idade_minima 18
#define nota_minima 6

int main(){


int idade;
float nota;

printf("Digite sua idade: ");
scanf("%i",&idade);

printf("Digite sua nota: ");
scanf("%f",&nota);

if (idade >= idade_minima && nota >= nota_minima){
printf("REQUISITOS APROVADOS");
}
else{
printf("REQUISITOS REPROVADOS");
}

return 0;

}
#include<stdio.h>
int main(){

int idade;
char nome[50];
char curso[50];

printf("Digite seu nome: ");
fgets(nome,50,stdin);

printf("Digite seu curso: ");
fgets(curso,50,stdin);


printf("Digite sua idade: ");
scanf(" %i",&idade);


printf("\n-------------------\n");
printf("  DADOS PESSOAIS");
printf("\n-------------------\n");


printf("NOME:  %s", nome);  
printf("CURSO: %s", curso);  
printf("IDADE: %d\n", idade);

 

return 0;

}
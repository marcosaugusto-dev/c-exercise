// 22. Nome completo 
// Leia o nome completo do usuário, aceitando espaços, e depois mostre uma mensagem de boas-vindas. 
// Conteúdos: char[], fgets(), printf()

#include<stdio.h>
#include<string.h>
int main(){

char nome [50];

printf("Digite seu nome completo: ");
fgets(nome,50,stdin);

nome[strcspn(nome , "\n")] = '\0';

printf("Ola, %s seja bem vindo",nome);

return 0;

}
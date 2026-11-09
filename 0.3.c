#include<stdio.h>
int main(){

int idade,ano;


printf("Digite o ano em que nasceu: ");
scanf("%i",&idade);

printf("Digite o ano atual: ");
scanf("%i",&ano);


idade = ano - idade;

printf("Voce tem aproximadamente %i anos ",idade);


return 0;

}
#include<stdio.h>
int main(){

int opcao;

printf("----------------------------------\n");
printf("             MENU\n");
printf("1-CADASTRO\n");
printf("2-CONSULTAR\n");
printf("3-SAIR");
printf("\n----------------------------------\n");

printf("Digite a opcao do menu: ");
scanf("%i",&opcao);

switch(opcao){

case 1: 
printf("Voce apertou em cadastro");
break;

case 2:
printf("Voce apertou em consultar");
break;

case 3:
printf("Voce apertou em sair");
break;

default:
printf("Opcao invalida");
break;
}

return 0;

}
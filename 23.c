// 23. Cidade e estado 
// Leia uma cidade e um estado, ambos podendo conter espaços. Exiba: "Voce mora em CIDADE - 
// ESTADO.". 
// Conteúdos: fgets(), strings 

#include<stdio.h>
#include<string.h>
int main(){


char cidade[50],estado[50];

printf("Digite sua cidade: ");
fgets(cidade,50,stdin);

printf("Digite o Estado: ");
fgets(estado,50,stdin);

cidade[strcspn(cidade , "\n")] = '\0';

printf("Voce mora em %s,%s",cidade,estado);



return 0;



}
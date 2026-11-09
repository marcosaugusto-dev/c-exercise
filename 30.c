#include<stdio.h>
int main(){

int idade,codigo;

printf("Digite sua idade: ");
scanf("%i",&idade);

printf("Digite o codigo: ");
scanf("%i",&codigo);

if (idade >= 60 || codigo == 1234){
printf("ACESSO LIBERADO");
}

else{
printf("ACESSO NEGADO");    
}


return 0;

}
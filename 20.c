#include<stdio.h>
int main(){

int idade;

printf("Digite sua idade:");
scanf("%i",&idade);

if (idade >= 16){
printf("VOTO LIBERADO");    
}

else{
printf("NAO PODE VOTAR");
}

return 0;

}
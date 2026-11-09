#include<stdio.h>
int main(){

int idade;
float renda;


printf("Digite sua idade: ");
scanf("%i",&idade);

printf("Digite sua renda: ");
scanf("%f",&renda);

if (idade >= 18 && renda >= 2000){
printf("ELEGIVEL");
}
else{
printf("INELEGIVEL");
}

return 0;

}
// // 21. Maioridade e faixa etária 
// Leia a idade. Informe Menor de idade para abaixo de 18; Adulto de 18 a 59; e 60 ou mais para idade igual 
// ou superior a 60.


#include<stdio.h>
int main(){

int idade;

printf("Digite sua idade: ");
scanf("%i",&idade);


if (idade < 18 ){
printf("MENOR DE IDADE");    
}

else if (idade >= 18 && idade <= 59){
printf("ADULTO");
}

else {
printf("IDOSO");
}

return 0;

}
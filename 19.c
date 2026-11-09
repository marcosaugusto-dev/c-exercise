#include<stdio.h>
int main (){

float nota;

printf("Digite uma nota: ");
scanf("%f",&nota);


if(nota < 0 || nota > 10){
printf("NOTA INVALIDA");
}

else if(nota >= 9){
printf("EXCELENTE");
}

else if(nota >= 7){
printf("BOM");
}

else if(nota >= 6){
printf("REGULAR");
}

else{
printf("REPROVADO");
}

return 0;

}
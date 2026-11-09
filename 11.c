#include<stdio.h>
int main (){


float preco,desc,valor_desc,valor_final;



printf("Digite o preco da compra: ");
scanf("%f",&preco);

printf("Digite a porcentagem do desconto: ");
scanf("%f",&desc);

valor_desc = preco * (desc / 100.0);
    valor_final = preco - valor_desc;


printf("O valor da compra final deu %.2f",valor_final);


return 0;

}
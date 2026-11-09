#include<stdio.h>

int main(){

float km,l,km_l;


printf("Digite quantos km percorridos: ");
scanf("%f",&km);

printf("Digite quanto litros consumidos: ");
scanf("%f",&l);

km_l = km / l;

printf("O consumo medio e %.2f km/l ",km_l);

    return 0;
}
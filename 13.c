#include<stdio.h>
#define PI 3.14159
int main(){

float raio, circunferencia;

printf("Digite o raio: ");
scanf("%f",&raio);


circunferencia = 2 * PI * raio;

printf("O resultado do calculo: %.2f",circunferencia);


return 0;


}
#include<stdio.h>
int main(){

float F,C;

printf("Digite quantos graus celsius: ");
scanf("%f",&C);

F = C * 9 / 5 + 32;

printf("A conversao deu %.2f Fahrenheit",F);

return 0;

}
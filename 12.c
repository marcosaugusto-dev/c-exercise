#include<stdio.h>
#define KM_POR_MILHA  1.60934
int main(){


float milha,km;

printf("Digite a quantidade de milhas: ");
scanf("%f",&milha);

km = milha * KM_POR_MILHA;

printf("milhas:%.2f\n",milha);
printf("Km:%.2f\n",km);



return 0;

}
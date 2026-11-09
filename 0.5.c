#include<stdio.h>
int main(){

float n1,n2,media;

printf("Digite a nota do primeiro aluno: ");
scanf("%f",&n1);

printf("Digite a nota do segundo aluno: ");
scanf("%f",&n2);

media = (n1 + n2) / 2;


printf("A media dos alunos e %.2f ",media);



return 0;

}
//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
float bonus, salario;
int tempo;

printf("Informe o seu sal�rio: R$ ");
scanf("%f", &salario);

while (salario <= 0)
{
    printf("Informe um sal�rio v�lido");
    printf("\n\nInforme o seu sal�rio: R$ ");
    scanf("%f", &salario);
}

printf("Informe a quantos anos voc� trabalha na empresa: ");
scanf("%d", &tempo);

while (tempo < 0)
{
   printf("Informe uma quantidade de anos v�lida");
   printf("\n\nInforme a quantos anos voc� trabalha na empresa: ");
   scanf("%d", &tempo);
}

if (tempo >= 5)
{
    bonus = salario * 0.20;
}else
    bonus = salario * 0.10;

printf("\nB�nus: R$ %.2f\n\n", bonus);

system("pause");
}
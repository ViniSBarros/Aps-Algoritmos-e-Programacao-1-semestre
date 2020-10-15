//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float bonus, salario;
int tempo;

printf("Informe o seu salário: R$ ");
scanf("%f", &salario);

while (salario <= 0)
{
    printf("Informe um salário válido");
    printf("\n\nInforme o seu salário: R$ ");
    scanf("%f", &salario);
}

printf("Informe a quantos anos você trabalha na empresa: ");
scanf("%d", &tempo);

while (tempo < 0)
{
   printf("Informe uma quantidade de anos válida");
   printf("\n\nInforme a quantos anos você trabalha na empresa: ");
   scanf("%d", &tempo);
}

if (tempo >= 5)
{
    bonus = salario * 0.20;
}else
    bonus = salario * 0.10;

printf("\nBônus: R$ %.2f\n\n", bonus);

system("pause");
}
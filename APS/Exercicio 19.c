//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
float valor, salario, vpar, pmin;
int parcelas;

printf("Informe o valor do empr�stimo: R$ ");
scanf("%f", &valor);

while (valor <= 0)
{
    printf("Informe um valor v�lido de empr�stimo");
    printf("\n\nInforme o valor do empr�stimo: R$ ");
    scanf("%f", &valor);
}

printf("Informe a quantidade de parcelas: ");
scanf("%d", &parcelas);

while (parcelas <= 0)
{
    printf("Informe uma quantidade v�lida de parcelas");
    printf("\n\nInforme a quantidade de parcelas: ");
    scanf("%d", &parcelas);
}

printf("Informe o seu sal�rio: R$ ");
scanf("%f", &salario);

while (salario <= 0)
{
    printf("Informe um sal�rio v�lido");
    printf("\n\nInforme o seu sal�rio: R$ ");
    scanf("%f", &salario);
}
    vpar = valor / parcelas;
    pmin = salario * 0.30;  

if (vpar <= pmin)
{
    printf("\nEmpr�stimo aprovado!\n\n");
}
    else
        printf("\nEmpr�stimo negado!\n\n");

system("pause");
}
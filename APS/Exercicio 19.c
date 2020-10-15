//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float valor, salario, vpar, pmin;
int parcelas;

printf("Informe o valor do empréstimo: R$ ");
scanf("%f", &valor);

while (valor <= 0)
{
    printf("Informe um valor válido de empréstimo");
    printf("\n\nInforme o valor do empréstimo: R$ ");
    scanf("%f", &valor);
}

printf("Informe a quantidade de parcelas: ");
scanf("%d", &parcelas);

while (parcelas <= 0)
{
    printf("Informe uma quantidade válida de parcelas");
    printf("\n\nInforme a quantidade de parcelas: ");
    scanf("%d", &parcelas);
}

printf("Informe o seu salário: R$ ");
scanf("%f", &salario);

while (salario <= 0)
{
    printf("Informe um salário válido");
    printf("\n\nInforme o seu salário: R$ ");
    scanf("%f", &salario);
}
    vpar = valor / parcelas;
    pmin = salario * 0.30;  

if (vpar <= pmin)
{
    printf("\nEmpréstimo aprovado!\n\n");
}
    else
        printf("\nEmpréstimo negado!\n\n");

system("pause");
}
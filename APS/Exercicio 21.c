//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float com, valor, bruto;

printf("Informe qual foi o valor vendido neste mês: R$ ");
scanf("%f", &valor);

while (valor <= 0)
{
    printf("Digite um valor válido!");
    printf("\n\nInforme qual foi o valor vendido neste mês: R$ ");
    scanf("%f", &valor);
}

com = valor * 0.10;
bruto = 1200.00 + valor;

if (valor > 2000)
{
    printf("\nSalário bruto: R$ %.2f\nComissão: R$ %.2f\nSalário líquido: R$ %.2f \n\n", bruto, com, bruto + com);
}
    else
    {
        printf("\nSalário bruto: R$ %.2f\nO funcionário não recebeu comissão pois não bateu a meta.\n\n", bruto);   
    }

system("pause");
}
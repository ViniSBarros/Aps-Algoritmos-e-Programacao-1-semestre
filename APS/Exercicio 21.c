//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
float com, valor, bruto;

printf("Informe qual foi o valor vendido neste m�s: R$ ");
scanf("%f", &valor);

while (valor <= 0)
{
    printf("Digite um valor v�lido!");
    printf("\n\nInforme qual foi o valor vendido neste m�s: R$ ");
    scanf("%f", &valor);
}

com = valor * 0.10;
bruto = 1200.00 + valor;

if (valor > 2000)
{
    printf("\nSal�rio bruto: R$ %.2f\nComiss�o: R$ %.2f\nSal�rio l�quido: R$ %.2f \n\n", bruto, com, bruto + com);
}
    else
    {
        printf("\nSal�rio bruto: R$ %.2f\nO funcion�rio n�o recebeu comiss�o pois n�o bateu a meta.\n\n", bruto);   
    }

system("pause");
}
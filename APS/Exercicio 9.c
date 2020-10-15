//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float valor, bruto, descontos, inss = 0.10, ir;
int horas;

do
{
    printf("Quanto vale a sua hora de trabalho? ");
    scanf("%f", &valor);

    printf("Quantas horas voce trabalha mensalmente? ");
    scanf("%d", &horas);

} while (valor <= 0 || horas <= 0);

bruto = horas * valor;

if(bruto <= 900)
    ir = 0;

if(bruto > 900 && bruto <= 1500)
    ir = 0.05;

if(bruto > 1500 && bruto <= 2500)
    ir = 0.10;

if(bruto > 2500)
    ir = 0.20;
    
descontos = ((bruto * ir) + (bruto * inss));

printf("\nSalário Bruto (%.0f * %d): R$ %.2f", valor, horas, bruto);

printf("\n(-) IR (%.0f%%): R$ %.2f", ir * 100, bruto * ir);

printf("\n(-) INSS (10%%): R$ %.2f", bruto * inss);

printf("\nFGTS (11%%): R$ %.2f", bruto * 0.11);

printf("\nTotal de descontos: R$ %.2f", descontos);

printf("\nSalário Liquído: R$ %.2f\n\n", bruto - descontos);


system("pause");
}
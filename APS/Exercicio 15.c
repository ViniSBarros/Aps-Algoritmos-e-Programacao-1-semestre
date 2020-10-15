//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
int litro;
float valor, total;
char tipo;

printf("Informe a quantidade de litros que ser�o colocados no tanque: ");
scanf("%d", &litro);

while (litro <= 0)
{
    printf("\nDigite uma quantidade v�lida!\n");
    printf("Informe a quantidade de litros que ser�o colocados no tanque: ");
    scanf("%d", &litro);
}
//limpeza de buffer
printf("\nInforme o tipo de combust�vel com 'A' para �lcool e 'G' para Gasolina: ");
scanf(" %c", &tipo);
//limpeza de buffer

if(tipo == 'A')
{
    valor = 1.90;

    if(litro <= 20)
    {
        valor = valor - (valor * 0.03);
    }
    else
    {
        valor = valor - (valor * 0.05);
    }
}
else
if(tipo == 'G')
{
    valor = 2.50;

    if(litro <= 20)
    {
        valor = valor - (valor * 0.04);
    }
    else
    {
        valor = valor - (valor * 0.06);
    } 
}

total = valor * litro;

printf("\nValor Total a ser pago: %.2f\n\n", total);

system("pause");
}
//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
int n;

printf("Informe o n�mero do dia da semana: ");
scanf("%d", &n);

switch (n)
{
case 1:
printf("\nDomingo\n\n");
    break;

case 2:
printf("\nSegunda-Feira\n\n");
    break;

case 3:
printf("\nTerça-Feira\n\n");
    break;

case 4:
printf("\nQuarta-Feira\n\n");
    break;

case 5:
printf("\nQuinta-Feira\n\n");
    break;

case 6:
printf("\nSexta-Feira\n\n");
    break;

case 7:
printf("\nS�bado\n\n");
    break;

default:
printf("\nValor Inv�lido!\n\n");
    break;
}


system("pause");
}

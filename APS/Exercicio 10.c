//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
int n;

printf("Informe o número do dia da semana: ");
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
printf("\nTerÃ§a-Feira\n\n");
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
printf("\nSábado\n\n");
    break;

default:
printf("\nValor Inválido!\n\n");
    break;
}


system("pause");
}

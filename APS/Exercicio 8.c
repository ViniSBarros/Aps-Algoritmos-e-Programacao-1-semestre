//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
char periodo;

printf("Informe o seu periodo com apenas a primeira letra: ");
scanf("%c", &periodo);

switch (periodo)
{
case 'M':
case 'm':
printf("\nBom Dia!\n\n");
    break;

case 'V':
case 'v':
printf("\nBoa Tarde!\n\n");
    break;

case 'N':
case 'n':
printf("\nBoa Noite!\n\n");
    break;

default:
printf("\nValor Inv�lido!\n\n");
    break;
}


system("pause");
}
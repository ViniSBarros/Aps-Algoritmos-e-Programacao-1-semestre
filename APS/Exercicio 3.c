//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
char sexo;

printf("Informe o seu sexo com apenas a primeira letra: ");
scanf("%c", &sexo);

switch (sexo)
{
case 'm':
case 'M':
printf("\nSexo: %c - Masculino\n\n", sexo);
    break;

case 'f':
case 'F':
printf("\nSexo: %c - Feminino\n\n", sexo);
    break;

default:
printf("\nSexo Inv�lido!\n\n");
    break;
}


system("pause");
}
//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
float n1, n2, media;

printf("Digite as notas parciais: ");
scanf("%f %f", &n1, &n2);

media = (n1 + n2) / 2;

if (media >= 7 && media != 10)
    printf("\nAprovado com uma m�dia de: %.2f\n\n", media);

if (media < 7)
    printf("\nReprovado com uma m�dia de:  %.2f\n\n", media);

if (media == 10)
    printf("\nAprovado com Distin��o, m�dia: %.2f\n\n", media);


system("pause");
}
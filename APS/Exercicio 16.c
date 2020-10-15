//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float peso, pmo, pma, vmo, vma, total;

printf("Digite a quantidade em kilos de morangos comprados: ");
scanf("%f", &pmo);

while(pmo < 0)
{
    printf("\nDigite uma quantidade válida!");
    printf("\nDigite a quantidade em kilos de morangos comprados: ");
    scanf("%f", &pmo);
}

printf("Digite a quantidade em kilos de maçãs compradas: ");
scanf("%f", &pma);

while(pma < 0)
{
    printf("\nDigite uma quantidade válida!");
    printf("\nDigite a quantidade em kilos de maçãs compradas: ");
    scanf("%f", &pma);
}

if (pmo <= 5)
{
    vmo = 2.50;
}
    else
    {
        vmo = 2.20;
    }

if (pma <= 5)
{
    vma = 1.80;
}
    else
    {
        vma = 1.50;
    }

vmo = pmo * vmo;
vma = pma * vma;

peso = pmo + pma;
total = vmo + vma;

if(peso > 8 || total > 25)
{
    total = total - ((vmo + vma) * 0.10);
}

printf("\nValor total a ser pago pelo cliente: R$ %.2f\n\n", total);


system("pause");
}
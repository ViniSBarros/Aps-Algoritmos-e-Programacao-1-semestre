//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float n1;

printf("Informe o número: ");
scanf("%f", &n1);

if(n1 > 0)
    printf("\nValor positivo: %.2f\n\n", n1);

if(n1 < 0)
    printf("\nValor negativo: %.2f\n\n", n1);

if(n1 == 0)
    printf("\nValor neutro: %.2f\n\n", n1);


system("pause");
}
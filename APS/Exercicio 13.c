//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
int num, n1, n5, n10, n50, n100; 

printf("Quantos reais o(a) senhor(a) deseja sacar? ");
scanf("%d", &num);

while (num < 10 || num > 600)
{
    printf("\nDigite um valor válido!\n");
    printf("Quantos reais o(a) senhor(a) deseja sacar? ");
    scanf("%d", &num);
}

    n100 = num / 100;
    n50 = (num % 100) / 50;
    n10 = ((num % 100) % 50) / 10;
    n5 = (((num % 100) % 50) % 10) / 5;
    n1 = ((((num % 100) % 50) % 10) % 5) / 1;


printf("\nNotas de 100: %d\nNotas de 50: %d\nNotas de 10: %d\nNotas de 5: %d\nNotas de 1: %d\n\n", n100, n50, n10, n5, n1);


system("pause");
}
//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
int idade, valor;

printf("Digite a sua idade: ");
scanf("%d", &idade);

while(idade < 0 || idade >= 130)
    {
    printf("\nDigite uma idade válida!");
    printf("\n\nDigite a sua idade: ");
    scanf("%d", &idade);
    }

if(idade <= 10)
    valor = 30;

if(idade > 10 && idade <= 29)
    valor = 60;

if(idade > 29 && idade <= 45)
    valor = 120;

if(idade > 45 && idade <= 59)
    valor = 150;

if(idade > 59)
    valor = 300;

if(idade == 1)
    printf("\nIdade: %d ano\nValor: R$ %d \n\n", idade, valor);
else if(idade >= 0 && idade < 130)
    printf("\nIdade: %d anos\nValor: R$ %d \n\n", idade, valor);

system("pause");
}
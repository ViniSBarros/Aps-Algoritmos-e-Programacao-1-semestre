//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float salario, percentual, desconto;
int porcentagem;  


printf("Digite o seu salário: ");
scanf("%f", &salario);

//correÃ§Ã£o de erros
while(salario < 0)
    {
    printf("\nDigite um salário válido!");
    printf("\n\nDigite o seu salário: ");
    scanf("%f", &salario);
    }

if(salario <= 600.00)
    percentual = 1, desconto = 0;

if(salario > 600.00 && salario <= 1200.00)
    percentual = 0.80, desconto = 0.20, porcentagem = 20;

if(salario > 1200 && salario <= 2000)
    percentual = 0.75, desconto = 0.25, porcentagem = 25;

if(salario >2000)
    percentual = 0.70, desconto = 0.30, porcentagem = 30;
        
desconto = salario*desconto;
salario = salario*percentual;

printf("\nDesconto de: R$ %.2f (%d%%)\nSalário final: R$ %.2f\n\n", desconto, porcentagem, salario);

system("pause");
}

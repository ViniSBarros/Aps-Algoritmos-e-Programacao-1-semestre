



/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */
/* FALTA TERMINAR */






//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float peso, vf, va, vp, total, desconto = 0, final;
char carne[15], pagamento[10];

printf("Informe qual foi o tipo de carne comprada com a primeira letra F(FilÃ© Duplo), A(Alcatra) ou P(Picanha): ");
scanf(" %s", &carne);

printf("Digite a quantidade em kilos de carne comprada: ");
scanf("%f", &peso);

if (peso <= 5)
{
    vf = 4.90;
    va = 5.90;
    vp = 6.00;
}
    else
    {
        vf = 5.80;
        va = 6.80;
        vp = 7.80;
    }

if (carne == 'F')
    total = peso * vf;
    else
        if (carne == 'A')
            total = peso * va;
            else
                total = peso * vp;


printf("Informe o tipo de pagamento ");
scanf(" %s", &pagamento[10]);

if (pagamento[10] == "ab")
{
    desconto = total * 0.05;
}

final = total - desconto;

printf("\n\nTipo de carne: %s\n", carne);
printf("Quantidade de carne: %.2fkg\n", peso);
printf("PreÃ§o total: R$ %.2f\n", total);
printf("Tipo de pagamento: %s\n", pagamento);
printf("Valor do desconto: R$ %.2f\n", desconto);
printf("Valor a pagar: R$ %.2f\n", final);

system("pause");
}
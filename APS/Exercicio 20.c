//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
int cod;

printf("Informe o código do produto: ");
scanf("%d", &cod);

if (cod == 1)
{
    printf("\nAlimento não-perecí­vel\n\n");
} else
    if (cod == 2 || cod == 3 || cod == 4)
    {
        printf("\nAlimento perecí­vel\n\n");
    }
    else
        if (cod == 5 || cod == 6)
        {
            printf("\nVestuário\n\n");
        }
        else
            if (cod == 7)
            {
                printf("\nHigiene pessoal\n\n");
            }
            else
                if (cod == 8 || cod == 9 || cod == 10)
                {
                    printf("\nUtensí­lios domésticos\n\n");
                }
                else
                    printf("\nCódigo Inválido\n\n");

system("pause");
}
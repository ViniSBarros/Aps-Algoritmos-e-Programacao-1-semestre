//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
int cod;

printf("Informe o c�digo do produto: ");
scanf("%d", &cod);

if (cod == 1)
{
    printf("\nAlimento n�o-perec�vel\n\n");
} else
    if (cod == 2 || cod == 3 || cod == 4)
    {
        printf("\nAlimento perec�vel\n\n");
    }
    else
        if (cod == 5 || cod == 6)
        {
            printf("\nVestu�rio\n\n");
        }
        else
            if (cod == 7)
            {
                printf("\nHigiene pessoal\n\n");
            }
            else
                if (cod == 8 || cod == 9 || cod == 10)
                {
                    printf("\nUtens�lios dom�sticos\n\n");
                }
                else
                    printf("\nC�digo Inv�lido\n\n");

system("pause");
}
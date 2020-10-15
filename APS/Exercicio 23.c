//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float altura, massa, imc;

printf("Digite a sua altura em metros: ");
scanf("%f", &altura);

while (altura <= 0 || altura >= 3)
{
    printf("\nDigite uma altura válida\n");
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
}

printf("Digite o seu peso: ");
scanf("%f", &massa);

while (massa <= 0 || massa >= 700)
{
    printf("\nDigite um peso válido\n");
    printf("Digite o seu peso: ");
    scanf("%f", &massa);
}

altura = pow(altura, 2);

imc = massa / altura;

printf("\n%.2f\n", imc);

if (imc < 18.5){
    printf("Abaixo do Peso\n\n");
}
else
    if (imc >= 18.5 && imc < 25){
        printf("Saudável\n\n");
    }
    else
        if (imc >= 25 && imc < 30){
            printf("Peso em excesso\n\n");
        }
        else
            if (imc >= 30 && imc < 35){
                printf("Obesidade Grau I\n\n");
            }
            else
                if (imc >= 35 && imc < 40){
                    printf("Obesidade Grau II (severa)\n\n");
                }
                else
                        printf("Obesidade Grau III (mórbida)\n\n");

system("pause");
}
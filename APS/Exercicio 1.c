//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
float n1, n2, maior;

printf("Forne�a os dois n�meros: ");
scanf("%f %f", &n1, &n2); 

if(n1 > n2)
    maior = n1;
    else
        if(n1 < n2)
        maior = n2;
        else
            maior = n1;

printf("\nMaior n�mero: %.2f\n\n", maior);


system("pause");
}
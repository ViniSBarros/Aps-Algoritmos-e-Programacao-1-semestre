//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float n1, n2, maior;

printf("Forneça os dois números: ");
scanf("%f %f", &n1, &n2); 

if(n1 > n2)
    maior = n1;
    else
        if(n1 < n2)
        maior = n2;
        else
            maior = n1;

printf("\nMaior número: %.2f\n\n", maior);


system("pause");
}
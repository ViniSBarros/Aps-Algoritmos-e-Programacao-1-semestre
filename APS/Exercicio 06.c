//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float n1, n2, n3, maior, menor;

printf("Digite 3 números: ");
scanf("%f %f %f", &n1, &n2, &n3);

if(n1 > n2 && n1 > n3)
    maior = n1;
    else
        if(n2 > n3)
            maior = n2;
            else
                maior = n3;

if(n1 == n2 == n3)
    maior = n1;

if(n1 == n2 && n1 > n3)
    maior = n1;

if(n1 == n3 && n1 > n2)
    maior = n1;

if(n2 == n3 && n2 > n1)
    maior = n2;

printf("\nO maior número é o: %.2f\n", maior);

if(n1 < n2 && n1 < n3)
    menor = n1;
    else
        if(n2 < n3)
            menor = n2;
            else
                menor = n3;

if(n1 == n2 == n3)
    menor = n1;

if(n1 == n2 && n1 < n3)
    menor = n1;

if(n1 == n3 && n1 < n2)
    menor = n1;

if(n2 == n3 && n2 < n1)
    menor = n2;

printf("\nO menor número é o: %.2f\n\n", menor);


system("pause");
}

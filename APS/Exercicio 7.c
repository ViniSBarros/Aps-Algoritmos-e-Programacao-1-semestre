//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
float p1, p2, p3;

printf("Informe o pre�o dos 3 produtos: ");
scanf("%f %f %f", &p1, &p2, &p3);

if(p1 < p2 && p1 < p3)
    printf("\nVoc� deve comprar o produto de: R$ %.2f\n\n", p1);
    else
        if(p2 < p3)
            printf("\nVoc� deve comprar o produto de: R$ %.2f\n\n", p2);
            else
                if(p3 < p2)
                    printf("\nVoc� deve comprar o produto de: R$ %.2f\n\n", p3);
                    else
                        if(p1 == p2 == p3)
                            printf("\nVoc� pode comprar o produto que quiser\n\n");
                            else
                                if(p1 == p2 && p1 < p3)
                                    printf("\nVoc� pode comprar qualquer um dos produtos de: R$ %.2f\n\n", p1);
                                    else
                                        if(p1 == p3 && p1 < p2)
                                            printf("\nVoc� pode comprar qualquer um dos produtos de: R$ %.2f\n\n", p1);
                                            else
                                                printf("\nVoc� pode comprar qualquer um dos produtos de: R$ %.2f\n\n", p2);

system("pause");
}
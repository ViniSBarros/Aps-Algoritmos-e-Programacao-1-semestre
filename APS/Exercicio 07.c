//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float p1, p2, p3;

printf("Informe o preço dos 3 produtos: ");
scanf("%f %f %f", &p1, &p2, &p3);

if(p1 < p2 && p1 < p3)
    printf("\nVocê deve comprar o produto de: R$ %.2f\n\n", p1);
    else
        if(p2 < p3)
            printf("\nVocê deve comprar o produto de: R$ %.2f\n\n", p2);
            else
                if(p3 < p2)
                    printf("\nVocê deve comprar o produto de: R$ %.2f\n\n", p3);
                    else
                        if(p1 == p2 == p3)
                            printf("\nVocê pode comprar o produto que quiser\n\n");
                            else
                                if(p1 == p2 && p1 < p3)
                                    printf("\nVocê pode comprar qualquer um dos produtos de: R$ %.2f\n\n", p1);
                                    else
                                        if(p1 == p3 && p1 < p2)
                                            printf("\nVocê pode comprar qualquer um dos produtos de: R$ %.2f\n\n", p1);
                                            else
                                                printf("\nVocê pode comprar qualquer um dos produtos de: R$ %.2f\n\n", p2);

system("pause");
}

//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
float n1,n2, media;

printf("Digite a primeira nota: ");
scanf("%f", &n1);

printf("Digite a segunda nota: ");
scanf("%f", &n2);

while (n1 < 0 || n2 < 0)
{
    printf("\nDigite uma nota válida!\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
}

media = (n1 + n2) / 2;

if(media >= 9.0 && media <= 10.0)
        printf("\nParabéns, você foi APROVADO com uma media de: %.1f conceito: A\n\n", media);
        else
            if(media >= 7.5 && media < 9.0)
                printf("\nParabéns, você foi APROVADO com uma media de: %.1f conceito: B\n\n", media);
                else   
                    if(media >= 6.0 && media < 7.5)
                        printf("\nParabéns, você foi APROVADO com uma media de: %.1f conceito: C\n\n", media);
                        else          
                            if(media >= 4.0 && media < 6.0)
                                printf("\nSinto muito, você foi REPROVADO devido a uma media de: %.1f conceito: D\n\n", media);
                                else    
                                    if(media < 4.0 && media >= 0)
                                        printf("\nSinto muito, você foi REPROVADO devido a uma media de: %.1f conceito: E\n\n", media);


system("pause");
}

//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
int n1, centena, dezena, unidade;

printf("Digite um número inteiro menor que 1000: ");
scanf("%d", &n1);

if (n1 >= 200 && n1 < 1000)
{
    centena = n1 / 100;
    dezena = (n1 % 100) / 10;
    unidade = ((n1 % 100) % 10) / 1;

    if (dezena > 1 && unidade > 1)
        printf("\nEste número possui %d centenas, %d dezenas e %d unidades\n\n", centena, dezena, unidade);
    else
    if (dezena > 1 && unidade == 1)  
        printf("\nEste número possui %d centenas, %d dezenas e %d unidade\n\n", centena, dezena, unidade);  
    else 
    if (dezena == 1 && unidade > 1)
        printf("\nEste número possui %d centenas, %d dezena e %d unidades\n\n", centena, dezena, unidade);   
    else  
    if (dezena == 1 && unidade == 1)
        printf("\nEste número possui %d centenas, %d dezena e %d unidade\n\n", centena, dezena, unidade);  
    else   
    if (dezena > 1 && unidade == 0)
        printf("\nEste número possui %d centenas e %d dezenas\n\n", centena, dezena);  
    else   
    if (dezena == 1 && unidade == 0)
        printf("\nEste número possui %d centenas e %d dezena\n\n", centena, dezena);  
    else   
    if (dezena == 0 && unidade > 1)
        printf("\nEste número possui %d centenas e %d unidades\n\n", centena, unidade);  
    else   
    if (dezena == 0 && unidade == 1)
        printf("\nEste número possui %d centenas e %d unidade\n\n", centena, unidade);  
    else
        printf("\nEste número possui %d centenas\n\n", centena); 

    
      
}

else
if (n1 >= 100 && n1 < 200)
{
    centena = n1 / 100;
    dezena = (n1 % 100) / 10;
    unidade = ((n1 % 100) % 10) / 1;

    if (dezena > 1 && unidade > 1)
        printf("\nEste número possui %d centena, %d dezenas e %d unidades\n\n", centena, dezena, unidade);
    else
    if (dezena > 1 && unidade == 1)  
        printf("\nEste número possui %d centena, %d dezenas e %d unidade\n\n", centena, dezena, unidade);  
    else 
    if (dezena == 1 && unidade > 1)
        printf("\nEste número possui %d centena, %d dezena e %d unidades\n\n", centena, dezena, unidade);   
    else  
    if (dezena == 1 && unidade == 1)
        printf("\nEste número possui %d centena, %d dezena e %d unidade\n\n", centena, dezena, unidade);  
    else   
    if (dezena > 1 && unidade == 0)
        printf("\nEste número possui %d centena e %d dezenas\n\n", centena, dezena);  
    else   
    if (dezena == 1 && unidade == 0)
        printf("\nEste número possui %d centena e %d dezena\n\n", centena, dezena);  
    else   
    if (dezena == 0 && unidade > 1)
        printf("\nEste número possui %d centena e %d unidades\n\n", centena, unidade);  
    else   
    if (dezena == 0 && unidade == 1)
        printf("\nEste número possui %d centena e %d unidade\n\n", centena, unidade);  
    else
        printf("\nEste número possui %d centena\n\n", centena); 

}

else
if (n1 < 100 && n1 >= 20)
{
    dezena = n1 / 10;
    unidade = (n1 % 10) / 1;

    if (unidade == 0)
        printf("\nEste número possui %d dezenas\n\n", dezena);  
    else   
    if (unidade > 1)
        printf("\nEste número possui %d dezenas e %d unidades\n\n", dezena, unidade);  
    else   
    if (unidade == 1)
        printf("\nEste número possui %d dezenas e %d unidade\n\n", dezena, unidade);  

}

else
if (n1 < 20 && n1 >= 10)
{
    dezena = n1 / 10;
    unidade = (n1 % 10) / 1;

    if (unidade == 0)
        printf("\nEste número possui %d dezena\n\n", dezena);  
    else   
    if (unidade > 1)
        printf("\nEste número possui %d dezena e %d unidades\n\n", dezena, unidade);  
    else   
    if (unidade == 1)
        printf("\nEste número possui %d dezena e %d unidade\n\n", dezena, unidade);  

}

else
if (n1 < 10 && n1 >= 1)
{
    unidade = n1 / 1;

    if (unidade > 1)
        printf("\nEste número possui %d unidades\n\n", unidade);
    else
    if (unidade == 1)
        printf("\nEste número possui %d unidade\n\n", unidade);
}

else
    printf("\nValor Inválido!\n\n");
 

system("pause");
}

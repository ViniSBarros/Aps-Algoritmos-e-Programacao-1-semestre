//inclusão de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declaração de variáveis
char resposta[10];
int positivo = 0;

printf("Telefonou para a ví­tima? ");
scanf("%s", &resposta[1]);

printf("Esteve no local do crime? ");
scanf("%s", &resposta[2]);

printf("Mora perto da vítima? ");
scanf("%s", &resposta[3]);

printf("Devia para a vítima? ");
scanf("%s", &resposta[4]);

printf("Já trabalhou com a vítima? ");
scanf("%s", &resposta[5]);

for(int i = 1; i <= 5; i++){
    if(resposta[i] == 's'){
    positivo = positivo + 1;
    }
}

printf("\nRespostas positivas: %d\n", positivo);

if(positivo == 2){
    printf("\nSuspeita\n\n");
}
else
    if(positivo == 3 || positivo == 4){
    printf("\nCúmplice\n\n");
    }
    else
        if(positivo == 5){
        printf("\nAssassino\n\n");
        }
        else
            printf("\nInocente\n\n");

system("pause");
}
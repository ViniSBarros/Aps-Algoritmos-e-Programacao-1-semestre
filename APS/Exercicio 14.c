//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis
char resposta[10];
int positivo = 0;

printf("Telefonou para a v�tima? ");
scanf("%s", &resposta[1]);

printf("Esteve no local do crime? ");
scanf("%s", &resposta[2]);

printf("Mora perto da v�tima? ");
scanf("%s", &resposta[3]);

printf("Devia para a v�tima? ");
scanf("%s", &resposta[4]);

printf("J� trabalhou com a v�tima? ");
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
    printf("\nC�mplice\n\n");
    }
    else
        if(positivo == 5){
        printf("\nAssassino\n\n");
        }
        else
            printf("\nInocente\n\n");

system("pause");
}
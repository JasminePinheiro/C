#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
char nome[40];
int idade;
float peso;
printf("<<< EX003 - Dados >>>\n\n");
printf("Qual � o seu nome? ");
gets(nome);
printf("Quantos anos voc� tem? ");
scanf(" %d",&idade);
printf("Qual � o seu peso? ");
scanf(" %f",&peso);
printf("\n\n");
printf("-------<<< PROCESSANDO >>>-------\n");
printf("Muito prazer, %s. Voc� tem %i e pesa %.2fKg correto?\n", nome, idade, peso);
printf("Fim.");

}

#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
char nome[40];
int idade;
float peso;
printf("<<< EX003 - Dados >>>\n\n");
printf("Qual é o seu nome? ");
gets(nome);
printf("Quantos anos você tem? ");
scanf(" %d",&idade);
printf("Qual é o seu peso? ");
scanf(" %f",&peso);
printf("\n\n");
printf("-------<<< PROCESSANDO >>>-------\n");
printf("Muito prazer, %s. Você tem %i e pesa %.2fKg correto?\n", nome, idade, peso);
printf("Fim.");

}

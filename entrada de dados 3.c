#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
char nome[30];
char endereco[40];
printf("Digite o seu nome: ");
gets(nome); //o scanf s� funciona se n�o for palavras composta, por exemplo n�o pode digitar (ana maria), nesse caso usamos o gets e n�o o scanf
printf("Digite o seu endere�o: ");
gets(endereco);
printf("Voc� digitou o nome \"%s\" e o endere�o \"%s\".", nome, endereco);


}

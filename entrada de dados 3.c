#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
char nome[30];
char endereco[40];
printf("Digite o seu nome: ");
gets(nome); //o scanf só funciona se não for palavras composta, por exemplo não pode digitar (ana maria), nesse caso usamos o gets e não o scanf
printf("Digite o seu endereço: ");
gets(endereco);
printf("Você digitou o nome \"%s\" e o endereço \"%s\".", nome, endereco);


}

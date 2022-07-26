#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
char *nome="Jasmine";
unsigned int idade=20;
float peso=55.50;
char sexo='F';
printf("A %s tem %d anos e é do sexo %c e pesa %5.2fkg\n", nome, idade, sexo, peso);
}

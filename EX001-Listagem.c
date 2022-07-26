#include <stdio.h>
#include <locale.h>
void main(){
printf("Listagem de Alunos\n");
printf("Nome\t      Nota\n");
printf("------------------\n");
printf("Ana Beatriz    8.5\n");
printf("Bianca Martins 9.0\n");
setlocale(LC_ALL,"Portuguese");
printf("Cláudio Sá     5.5\n");
printf("Giovana Silva  7.5\n");

}

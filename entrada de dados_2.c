#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
    char r;
    char s;
    char j;
    printf("Digite só uma letra: ");
    fflush(stdin);  //serve para limpar a entrada de dados, sempre colocar antes do scanf
    scanf("%c", &r);
    printf("Digite outra letra: ");
    scanf(" %c",&s);  //também pode colocar um espaço entre as aspas e a porcentagem " %C
    printf("Você digitou a letra \"%c\" e a letra \"%c\"\n", r,s);
    printf("Digite só uma letra: ");
   j = getchar();
   scanf("%c", &j);
}

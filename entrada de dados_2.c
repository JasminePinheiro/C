#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
    char r;
    char s;
    char j;
    printf("Digite s� uma letra: ");
    fflush(stdin);  //serve para limpar a entrada de dados, sempre colocar antes do scanf
    scanf("%c", &r);
    printf("Digite outra letra: ");
    scanf(" %c",&s);  //tamb�m pode colocar um espa�o entre as aspas e a porcentagem " %C
    printf("Voc� digitou a letra \"%c\" e a letra \"%c\"\n", r,s);
    printf("Digite s� uma letra: ");
   j = getchar();
   scanf("%c", &j);
}

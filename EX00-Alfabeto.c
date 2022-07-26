#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char letra;
    char antes;
    char depois;
    printf("<<< EX006 - Alfabeto >>>\n\n");
    printf("Digite uma letra: ");
    scanf("%c",&letra);
    antes = letra - 1;
    depois = letra + 1;
    printf("Antes da letra %c temos %c. Depois temos a letra %c.", letra, antes, depois);

}

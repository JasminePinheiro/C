#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[40];
    float nota1, nota2, media;
    printf("<<< EX009 - M�dia do aluno >>>\n\n");
    printf("Nome do aluno: ");
    fflush(stdin);
    gets(nome);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("O aluno(a) %s tirou notas %.2f e %.2f e ficou com a m�dia %.2f", nome, nota1, nota2, media);


}

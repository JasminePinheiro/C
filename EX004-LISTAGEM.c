#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
    char nome[40],nome2[40],nome3[40];
    char sexo,sexo2,sexo3;
    float nota,nota2,nota3;
    printf("<<< EX004 - Listagem >>>\n\n");

    printf("Cadastrando a primeira pessoa:\n");
    printf("--------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo);
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota);
    printf("\n\n");

    printf("Cadastrando a segunda pessoa:\n");
    printf("--------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo2);
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota2);
    printf("\n\n");

    printf("Cadastrando a terceira pessoa:\n");
    printf("--------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    scanf("%s", &nome3);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    scanf("%c",&sexo3);
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota3);
    printf("\n\n");

    printf("Listagem Completa\n");
    printf("--------------------------------\n");
    printf("NOME              SEXO    NOTA\n");
    printf("%-20s %c %6.1f\n", nome,sexo,nota); //a quantidade de números que tem entre o % e a letra, representa os espaços
    printf("%-20s %c %6.1f\n", nome2,sexo2,nota2);
    printf("%-20s %c %6.1f\n", nome3,sexo3,nota3);
    }

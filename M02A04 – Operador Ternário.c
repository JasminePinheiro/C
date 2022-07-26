#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
    int n1,n2;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%i",&n1);
    printf("Digite um outro número: ");
    fflush(stdin);
    scanf("%i",&n2);
    int maior = (n1>n2)?n1:n2;
    printf("O maior número é: %i ",maior);

//int a = 4, b = 8;
//int c = (a>b)?1:2;
//printf("O resultado é %i\n",c);

//int a = 10, b = 8;
//int c = (a>b)?b+2:a+1;
//printf("O resultado é %i",c);

    //int n1, n2;
    //printf("Digite um número: ");
    //scanf("%i", &n1);
    //printf("Digite um outro número: ");
    //scanf("%i", &n2);
    //int maior =(n1>n2)?n1:n2;
    //printf("O número %i é maior",maior );

}



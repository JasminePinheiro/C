#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
    int n1,n2;
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%i",&n1);
    printf("Digite um outro n�mero: ");
    fflush(stdin);
    scanf("%i",&n2);
    int maior = (n1>n2)?n1:n2;
    printf("O maior n�mero �: %i ",maior);

//int a = 4, b = 8;
//int c = (a>b)?1:2;
//printf("O resultado � %i\n",c);

//int a = 10, b = 8;
//int c = (a>b)?b+2:a+1;
//printf("O resultado � %i",c);

    //int n1, n2;
    //printf("Digite um n�mero: ");
    //scanf("%i", &n1);
    //printf("Digite um outro n�mero: ");
    //scanf("%i", &n2);
    //int maior =(n1>n2)?n1:n2;
    //printf("O n�mero %i � maior",maior );

}



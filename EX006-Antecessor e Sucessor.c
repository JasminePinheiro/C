#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    int a;
    int s;
    printf("<<< EX006 - Antecessor e Sucessor >>>\n");
    printf("Digite um n�mero: ");
    scanf("%i",&n);
    a = n-1;
    s = n+1;
    printf("Analisando o n�mero %i, seu antecessor � %i e o seu sucessor � %i.", n, a, s);
}

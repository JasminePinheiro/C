#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int n1 = rand()% 6;
    int n2;
    printf("<<< EX005 - Será que você acerta? >>>\n\n");
    printf("Vou pensar em um número entre 1 e 5. Tente advinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%d",&n2);
    printf("Eu pensei no número %i e você pensou no %i.",n1,n2);
    }

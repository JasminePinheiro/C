#include <stdio.h>
#include <locale.h>
#import <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int n = rand() % 10 + 1; //ele gera números aleatórios entre 1 e 10
    printf("Eu gerei um número aleatório (%d)",n);

}

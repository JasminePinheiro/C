#include <stdio.h>
#include <locale.h>
#import <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int n = rand() % 10 + 1; //ele gera n�meros aleat�rios entre 1 e 10
    printf("Eu gerei um n�mero aleat�rio (%d)",n);

}

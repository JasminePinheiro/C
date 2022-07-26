#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int a = 7;
    int b = 4;
    int c =(a>=b+6);
    printf("O resultado é %i",c);


}

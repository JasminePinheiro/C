#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
   // int x = 5;
   // int y = 2;
   // float r = x / y;
   // printf("O resultado é %.2 f",r);


    int x = 5;
    int y = 2;
    float r = (float)x / (float) y;
    printf("O resultado é %.2f\n",r);

    int numero = 65;
    printf("Eu tenho a letra %c",(char)numero);



}

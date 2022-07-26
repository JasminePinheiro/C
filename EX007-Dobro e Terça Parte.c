#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float n;
    float dobro;
    float terca;
    printf("<<< E007 - Dobro e Terça Parte >>>\n");
    printf("\n");
    printf("Digite um número: ");
    scanf("%f",&n);
    dobro = n * 2;
    terca = n / 3;
    printf("Analisando o número %.0f, seu dobro é %.0f e sua terça parte é %.2f.", n, dobro, terca);

}

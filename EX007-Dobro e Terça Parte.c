#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float n;
    float dobro;
    float terca;
    printf("<<< E007 - Dobro e Ter�a Parte >>>\n");
    printf("\n");
    printf("Digite um n�mero: ");
    scanf("%f",&n);
    dobro = n * 2;
    terca = n / 3;
    printf("Analisando o n�mero %.0f, seu dobro � %.0f e sua ter�a parte � %.2f.", n, dobro, terca);

}

#import <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
printf("A %s tem %d anos de idade\n ", "Jasmine", 20);
printf("Seu peso atual é de %5.2fKg\n", 51.55);
printf("O seu sexo é %c\n", 'F');

}

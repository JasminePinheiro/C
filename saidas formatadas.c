#import <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL,"Portuguese");
printf("A %s tem %d anos de idade\n ", "Jasmine", 20);
printf("Seu peso atual � de %5.2fKg\n", 51.55);
printf("O seu sexo � %c\n", 'F');

}

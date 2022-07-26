#include <stdio.h>
#include <locale.h>

void main() {
    printf("Oi\n");
    printf("Tudo\n");
    printf("bem?\n");
    printf("Oi\nTudo\nbem\n ");
    printf("Oi\tT\budo\tbem?\t\n ");
    printf("Oi, tudo \rbem? \n");
    printf("Oi, tudo \\bem? \n");
    printf("Oi, tudo bem? \a \n");
    printf("Oi, tudo bem? %% \n");
    printf("\n\n\n");
    setlocale(LC_ALL,"Portuguese");
    printf("C é \n");
    printf("\"SUPER\"\n");
    printf("Fácil!");
        }

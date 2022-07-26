#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char produto[30];
    float preco, desconto, valor;
    printf("<<< - Preço de Produto >>>\n");
    printf("Produto: ");
    fflush(stdin);
    gets(produto);
    printf("Preço do %s R$", produto);
    fflush(stdin);
    scanf("%f", &preco);
    printf("Desconto:(%%) ");
    fflush(stdin);
    scanf("%f", &desconto);
    valor = preco - (preco * desconto / 100);
    printf("O produto %s custava R$ %.2f, mas com %.2f%% de desconto, passa a custar R$%.2f", produto, preco, desconto, valor);
}

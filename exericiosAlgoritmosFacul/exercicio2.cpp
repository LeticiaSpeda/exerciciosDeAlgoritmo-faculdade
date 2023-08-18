#include <stdio.h>

int main ()
{
    int quantidade;
    float preco_custo, preco_total;

    printf("Entre com a quantidade do produto");
    scanf("%d", &quantidade);

    printf("Entre com o valor de custo do produto");
    scanf("%f", &preco_custo);

    preco_total= quantidade*preco_custo;

    printf("Voce pagara o total de %2.f", preco_total);
}
#include <stdio.h>

int main()
{
    int numero, resposta;
    printf("Entre com o numero para ser calculado seu quadrado \n");
    scanf("%d", &numero);

    resposta=numero*numero;
    printf("O quadrado do numero e:%d \n", resposta);
}
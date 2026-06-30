/******************************************************************************

Questao 43:
Ler uma temperatura em Farenheit e imprimir o correspondente em Celsius.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float c, f;

    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("A temperatura em Celsius é: %.2f\n", c);

    return 0;
}
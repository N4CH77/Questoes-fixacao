/******************************************************************************

Questao 42:
A  conversão  de  Celsius  para  Ferenheit  é  dada  pela  fórmula  𝐶 =5/9 × (𝐹−32).
Ler uma temperatura em Celcius e imprimir o correspondente em Farenheit.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("A temperatura em Farenheit é: %.2f\n", f);

    return 0;
}
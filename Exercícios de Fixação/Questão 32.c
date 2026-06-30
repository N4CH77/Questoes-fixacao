/******************************************************************************

Questao 32:
Ler o raio de um círculo. Calcular e imprimir o comprimento desse círculo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float raio, comprimento;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    comprimento = 2 * 3.14 * raio;
    printf("Comprimento da circunferência: %.2f\n", comprimento);

    return 0;
}